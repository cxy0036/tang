;;==================================================================================================
;;
;;	Peripheral Register
;;
;;==================================================================================================
P0CONH		EQU	0C6H
P0CONM		EQU	0C7H
P0CONL		EQU	0C8H
P0PU			EQU	0C9H
P0				EQU	0C0H
P1CONH		EQU	0D3H
P1CONM		EQU	0D4H
P1CONL		EQU	0D5H
P1PU			EQU	0D6H
P1				EQU	0C1H
P2CONH		EQU	0D9H
P2CONL		EQU	0DAH
P2PU			EQU	0DBH
P2				EQU	0C2H
P3CONH		EQU	0DCH
P3CONL		EQU	0DDH
P3				EQU	0C3H
P4CONH		EQU	0DEH
P4CONL		EQU	0DFH
P4				EQU	0C4H
P5CON			EQU	0E0H
P5				EQU	0C5H

IENH			EQU	0EAH
IENL			EQU	0EBH
IRQH			EQU	0ECH
T0MIR			EQU	7,IRQH
T1MIR			EQU	5,IRQH
T2MIR			EQU	3,IRQH
T3MIR			EQU	1,IRQH
IRQL			EQU	0EDH
WTIR			EQU	5,IRQL
INTFH			EQU	0EEH
T0MIF			EQU	7,INTFH
T1MIF			EQU	5,INTFH
T2MIF			EQU	3,INTFH
T3MIF			EQU	1,INTFH
INTFL			EQU	0EFH

EINT0H		EQU	0CAH
EINT0L		EQU	0CBH
EINT1			EQU	0D7H
ERQ0			EQU	0CCH
ERQ1			EQU	0D8H
EINTFH		EQU	0CDH

OSCSEL		EQU	0BCH
SSCR			EQU	0F5H

CKCTLR		EQU	0F2H
BTCR			EQU	0F1H

WDTR			EQU	0F4H
WDTSR			EQU	0F6H

WTSCR			EQU	0F0H

T0SCR			EQU	0B0H
T0DR			EQU	0B1H

T1SCR			EQU	0B3H
T1DR			EQU	0B4H

T2SCR			EQU	0B6H
T2DR			EQU	0B7H
PWMSCR		EQU	0CEH
PWMPDR		EQU	0CFH
PWM2DR		EQU	0D0H
PWM3DR		EQU	0D1H
PWM4DR		EQU	0D2H

BUZR			EQU	0E5H
BUPDR			EQU	0E6H

SIOCR			EQU	0E7H
SIODAT		EQU	0E8H
SIOPS			EQU	0E9H

T3SCR			EQU	0B9H
T3DR			EQU	0BAH

ADCM			EQU	0BDH
ADCRH			EQU	0BEH
ADCRL			EQU	0BFH

UCONH			EQU	0FCH
UCONL			EQU	0FDH
RXBR0			EQU	0FEH
TXSR0			EQU	0FEH
BRDAT			EQU	0FFH
TX0IF			EQU	3,IRQL
RX0IF			EQU	4,IRQL

IICSCR		EQU	0E2H
IICDSR		EQU	0E4H
IICAR			EQU	0E3H


RPR				EQU	0E1H
PORC			EQU	0F3H

;;==================================================================================================
;;	End	of HMS81F8816.h
;
;
;;
;;