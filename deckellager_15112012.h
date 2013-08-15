( Einrichtblatt
(   Maschine: "DMU 50-BC T40 SK40"
(   Steuerung: "HEIDENHAIN iTNC 530 340422 BC DEU"
(
( Allgemeine Informationen
(   Programmierer: "Sebastian Weigl"
(   Erstellungszeit: "15.11.2012 15:04"
(
( Werkstück
(   Quader: QX120 QY120 QZ120
(   Werkstoff: "P\Unlegierter Baustahl\Grundstahl\St37-2"
(
( Werkstück-Einspannung
(   Spannmittel: "T-Nut-A14H8\NC-HDS\HDS-ZS 125x350x110"
(   Spannmittelaufsatz: "HDSB 125\HDS-AufsatzB\HDSB B125xL70_40xH40_20"
(   Spannmittel-Ausrichtung: X-
(   Spannungsart: innenstufige Backen
(   Einspanntiefe: ET10
(   Werkstückposition: XMT0 YMT0 ZMT140
(
( Werkzeugsystem
(   Werkzeugsatz: leer
(   Werkzeugliste
(     T01: "SK40\WinkelF Form A\WF-A45 32x8(71) R_SZF-40 ER25x60"
(   Aktives Werkzeug: T01
(
(   Werkzeugkorrekturwertliste
(     T01 TC1: KL+096.100 KR016.000 NZ12
(
( Nullpunktregister
(   Nullpunkt G54: XP-60 YP-60 ZP120 NT1
(
( Einrichtblatt-Ende
BEGIN PGM 04 MM
N1 BLK FORM 0.1 Z X0 Y0 Z120
N2 BLK FORM 0.2 X120 Y120 Z0
N3 TOOL CALL 1 Z S2000 F200
N4 L X-40 Y-40 Z1 FMAX M13
N5 L Z-10
N6 APPR LCT X5 Y0 R20 RL
N7 L X5 Y120
N8 L X0 Y115
N9 L X120 Y115
N10 DEP LCT X-40 Y160 R20
N11 L Z1 R0 FMAX

