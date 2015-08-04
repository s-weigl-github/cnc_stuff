( Einrichtblatt
(   Maschine: "DMU 50-BC T40 SK40"
(   Steuerung: "HEIDENHAIN iTNC 530 340422 BC DEU"
(
( Allgemeine Informationen
(   Programmierer: "Sebastian Weigl"
(   Erstellungszeit: "28.01.2013 08:35"
(
( Werkstück
(   Quader: QX90 QY90 QZ100
(   Werkstoff: "N\Aluminium\AlMg1"
(
( Werkstück-Einspannung
(   Spannmittel: "T-Nut-A14H8\NC-HDS\HDS-ZS 125x350x110"
(   Spannmittelaufsatz: "HDSB 125\HDS-AufsatzB\HDSB B125xL70_40xH40_20"
(   Spannmittel-Ausrichtung: X-
(   Spannungsart: innenstufige Backen
(   Einspanntiefe: ET20
(   Werkstückposition: XMT0 YMT0 ZMT130
(
( Werkzeugsystem
(   Werkzeugsatz: leer
(   Werkzeugliste
(     T01: "SK40\WalzenstirnF\WSF 40x32x16 R_AFD-40 32x55(17)" FF8080
(   Aktives Werkzeug: T01
(
(   Werkzeugkorrekturwertliste
(     T01 TC1: KL+087.000 KR020.000 NZ06
(
( Nullpunktregister
(   Nullpunkt G54: XP0 YP0 ZP100 NT5
(
( Einrichtblatt-Ende
BEGIN PGM 01 MM
N1 BLK FORM 0.1 Z X45 Y45 Z-100
N2 BLK FORM 0.2 X-45 Y-45 Z0
N3 TOOL CALL 1 Z F220 S1800
N4 L X120 Y0 Z1 FMAX M13
N5 L Z-10
N6 APPR LCT X45 Y0 R20 RL F220
N7 L X45 Y-18.64
N8 RND R4
N9 L X18.64 Y-45
N10 RND R4
N11 L X-18.64 Y-45
N12 RND R4
N13 L X-45 Y-18.64
N14 RND R4
N15 L X-45 Y18.64
N16 RND R4
N17 L X-18.64 Y45
N18 RND R4
N19 L X18.64 Y45
N20 RND R4
N21 L X45 Y18.64
N22 RND R4
N23 L X45 Y0
N24 DEP LCT X120 Y0 R20
N25 L Z1 R0 FMAX
N26 L X150 Y150 Z150 FMAX
N27 END PGM 01 MM
