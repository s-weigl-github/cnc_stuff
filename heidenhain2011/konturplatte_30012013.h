( Einrichtblatt
(   Maschine: "DMU 50-BC T40 SK40"
(   Steuerung: "HEIDENHAIN iTNC 530 340422 BC DEU"
(
( Allgemeine Informationen
(   Programmierer: "Sebastian Weigl"
(   Erstellungszeit: "30.01.2013 08:17"
(
( Werkstück
(   Quader: QX100 QY80 QZ20
(   Werkstoff: "N\Aluminium\AlMgSi1"
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
(     T01: "SK40\BohrnutenF\BNF-B 18x19(79) R_SZF-40 ER25x60" FF8080
(   Aktives Werkzeug: T01
(
(   Werkzeugkorrekturwertliste
(     T01 TC1: KL+104.100 KR009.000 NZ02
(
( Nullpunktregister
(   Nullpunkt G54: XP-50 YP-40 ZP20 NT1
(
( Einrichtblatt-Ende
BEGIN PGM 01 MM
N1 BLK FORM 0.1 Z X0 Y0 Z-20
N2 BLK FORM 0.2 X100 Y80 Z0
N3 TOOL CALL 1 Z F220 S2500
N4 L X-15 Y-15 Z1 FMAX M13
N5 L Z-7.5
N6 APPR LCT X10 Y10 R9 RL
 G1 X10 Y26.045
 G1 X0 Y80
 G1 X48.092 Y70.652
 G3 X51.908 Y70.652 I1.908 J9.816
 G1 X83.882 Y76.867 Z-7.5
 G2 X95.388 Y64.242 I1.908 J-9.816
 G1 X88.403 Y40.376 Z-7.5
 G3 X88 Y37.567 I9.597 J-2.809
 G1 X88 Y20 Z-7.5
 G2 X78 Y10 I-10 J0
 G1 X49.321 Y10 Z-7.5
 G3 X40.66 Y5 I0 J-10
 G2 X23.34 Y5 I-8.66 J5
 G3 X14.679 Y10 I-8.66 J-5
 G1 X10 Y10
N7 DEP LCT X-15 Y10 R9
N8 L Z1 R0 FMAX
N9 L X150 Y150 Z150 FMAX
N10 M30
N11 END PGM 01 MM
