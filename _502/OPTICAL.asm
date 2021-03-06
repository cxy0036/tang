;;=================================================================================
;;
;;Module Name:	F_PowerOnOptical
;;
;;=================================================================================
F_PowerOnOptical:
	bbs	R_StandbyCtrl.B_StandbyCtrl,L_PowerOnMuteCheck
	bbc	R_Flag1.B_AudioIn,L_PowerOnOptical_Exit
	ldm	R_OpticalMuteSecond,#0
	ldm	R_OpticalMuteCounter,#0
	ldm	R_OpticalMuteCounterTime,#0
	call F_InitialSystem
	jmp	Main_Loop
	
L_PowerOnMuteCheck:
	lda R_OpticalMuteSecond
	cmp #C_MuteTime
	bcs L_PowerOnMuteOn
	inc R_MuteBaseTime
	lda R_MuteBaseTime
	cmp	#128
	bcc L_CheckMuteSignal
	ldm R_MuteBaseTime,#0
	inc R_OpticalMuteSecond
	lda R_OpticalMuteSecond
	cmp #C_MuteTime
	bcc L_CheckMuteSignal

L_PowerOnMuteOn:
	call F_MuteOnCtrl	
	ldm	R_OpticalMuteSecond,#0
	ldm	R_OpticalMuteCounter,#0
	ldm	R_OpticalMuteCounterTime,#0
	ret

L_CheckMuteSignal:
	inc	R_OpticalMuteCounterTime
	lda	R_OpticalMuteCounterTime
	cmp	#250
	bcc	L_CheckMuteSignal_L
	ldm	R_OpticalMuteCounterTime,#0
	lda R_OpticalMuteCounter
	cmp #030
	bcs	L_CheckMute_over
	ldm	R_OpticalMuteCounter,#0

L_CheckMuteSignal_L:	
	bbc	R_Flag1.B_AudioIn,L_PowerOnOptical_Exit
	inc	R_OpticalMuteCounter
	lda R_OpticalMuteCounter
	cmp #3
	bcs L_PowerOnMuteOff
	jmp	L_PowerOnOptical_Exit
	
L_CheckMute_over:
F_InitialMute:
	lda	#0
;	sta	R_AuxSleepBaseTime
;	sta	R_AuxSleepSecond
	sta	R_OpticalMuteSecond
	sta	R_OpticalMuteCounter
	sta	R_OpticalMuteCounterTime
	
L_PowerOnMuteOff:
	call F_MuteOffCtrl
	ldm	R_OpticalMuteSecond,#0
	ldm	R_OpticalMuteCounter,#0
	ldm	R_OpticalMuteCounterTime,#0
	ret
	
L_PowerOnOptical_Exit:
	ret
	
;;=================================================================================
;;
;;Module Name:	F_PowerOffOptical
;;
;;=================================================================================
F_PowerOffOptical:
L_PowerOffOptical_Exit:
	ret	
;
;
;;
;;