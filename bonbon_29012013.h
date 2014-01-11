( Einrichtblatt
(   Maschine: "DMU 50-BC T40 SK40"
(   Steuerung: "HEIDENHAIN iTNC 530 340422 BC DEU"
(
( Allgemeine Informationen
(   Programmierer: "Sebastian Weigl"
(   Erstellungszeit: "29.01.2013 08:26"
(
( Werkstück
(   Quader: QX100 QY60 QZ10
(   Werkstoff: "N\Aluminium\AlMg1"
(
( Werkstück-Einspannung
(   Spannmittel: "T-Nut-A14H8\NC-HDS\HDS-ZS 125x350x110"
(   Spannmittelaufsatz: "HDSB 125\HDS-AufsatzB\HDSB B125xL70_40xH40_20"
(   Spannmittel-Ausrichtung: X-
(   Spannungsart: innenstufige Backen
(   Einspanntiefe: ET5
(   Werkstückposition: XMT0 YMT0 ZMT145
(
( Werkzeugsystem
(   Werkzeugsatz: leer
(   Werkzeugliste
(     T01: "SK40\SchlichtF HSS l\SLF HSS-l 4x19(63) R_SZF-40 ER16x60" FF8080
(   Aktives Werkzeug: T01
(
(   Werkzeugkorrekturwertliste
(     T01 TC1: KL+088.100 KR002.000 NZ03
(
( Nullpunktregister
(   Nullpunkt G54: XP0 YP0 ZP10 NT5
(
( Einrichtblatt-Ende
BEGIN PGM 01 MM
N1 BLK FORM 0.1 Z X-50 Y-50 Z10
N2 BLK FORM 0.2 X50 Y50 Z0
N3 TOOL CALL 1 Z F220 S4500
N4 L X0 Y0 Z1 FMAX M13
N5 L Z-10.5
N6 APPR LCT X19.827 Y0 R+2 RR


