( Einrichtblatt
(   Maschine: "DMU 50-BC T40 SK40"
(   Steuerung: "HEIDENHAIN iTNC 530 340422 BC DEU"
(
( Allgemeine Informationen
(   Programmierer: "Sebastian Weigl"
(   Erstellungszeit: "15.11.2012 12:27"
(
( Werkst�ck
(   Quader: QX130 QY100 QZ20
(   Werkstoff: "N\Aluminium\AlZnMgCu1.5"
(
( Werkst�ck-Einspannung
(   Spannmittel: "T-Nut-A14H8\NC-HDS\HDS-ZS 125x350x110"
(   Spannmittelaufsatz: "HDSB 125\HDS-AufsatzB\HDSB B125xL70_40xH40_20"
(   Spannmittel-Ausrichtung: X-
(   Spannungsart: innenstufige Backen
(   Einspanntiefe: ET15
(   Werkst�ckposition: XMT0 YMT0 ZMT135
(
( Werkzeugsystem
(   Werkzeugsatz: leer
(   Werkzeugliste
(     T01: "SK40\SchruppF HSS l\SRF HSS-l 10x45(95) R_SZF-40 ER25x60"
(     T02: "SK40\SchlichtF HSS l\SLF HSS-l 10x45(95) R_SZF-40 ER25x60" 004000
(     T03: "SK40\NC-AnBo\NCABO-90 8x25(140) R_SZF-40 ER25x60" 0000FF
(     T04: "SK40\SpiralBo HSS l\SPIBO HSS-l 5.5x91(139) R_SPBF-40 13x79" FF00FF
(   Aktives Werkzeug: T01
(
(   Werkzeugkorrekturwertliste
(     T01 TC1: KL+120.100 KR005.000 NZ04
(     T02 TC1: KL+120.100 KR005.000 NZ03
(     T03 TC1: KL+165.200 KR004.000 NZ02
(     T03 TC2: KL+165.100 KR004.000 NZ02
(     T03 TC3: KL+161.200 KR004.000 NZ02
(     T04 TC1: KL+172.800 KR002.750
(     T04 TC2: KL+171.189 KR002.750
(     T04 TC3: KL+172.841 KR002.750
(
( Nullpunktregister
(   Nullpunkt G54: XP-65 YP-50 ZP20 NT1
(
( Einrichtblatt-Ende
BEGIN PGM 02 MM
N1 BLK FORM 0.1 Z X0 Y0 Z-20
N2 BLK FORM 0.2 X130 Y100 Z0
N3 TOOL CALL 1 Z S2000 F200 DR+0.5
N4 LBL 1  ;;-----------------------------------fr�sen der aussenkontur mit 0.5 aufmass
N5 L X-10 Y70 Z1 FMAX M13
N6 L Z-4
N7 APPR LCT X5 Y80 R5 RL
N8 L Y95
N9 RND R4
N10 L X17.7
N11 RND R4
N12 L Y82
N13 CR X30.7 Y82 R6.5 DR+
N14 L Y95
N15 RND R4
N16 L X41.473
N17 RND R4
N18 CR X88.473 Y95 R24 DR+
N19 RND R4
N20 L X99.3
N21 RND R4
N22 L Y82
N23 CR X112.3 Y82 R6.5 DR+
N24 L Y95
N25 RND R4
N26 L X125
N27 RND R4
N28 L Y60
N29 RND R4
N30 L X93.246 Y5
N31 RND R4
N32 L X71.5
N33 RND R4
N34 L Y18
N35 CR X58.5 Y18 R6.5 DR+
N36 L Y5
N37 RND R4
N38 L X36.754
N39 RND R4
N40 L X5 Y60
N41 L Y80
N42 DEP LCT X-10 Y90 R5
N43 L Z1 R0 FMAX
N44 LBL 0  ;;--------------------------------abschluss der aussenkontur mit 0.5 aufmass
N45 TOOL CALL 2 Z S2000 F200
N46 CALL LBL 1  ;;---------------------------schlichten der aussenkontur
N47 L X65 Y60 Z1 FMAX
N48 CYCL DEF 4.0 TASCHENFRAESEN  ;;----------def. der rechtecktasche 50x20
N49 CYCL DEF 4.1 ABST 1
N50 CYCL DEF 4.2 TIEFE -5
N51 CYCL DEF 4.3 ZUSTLG 5 F100
N52 CYCL DEF 4.4 X+50
N53 CYCL DEF 4.5 Y+20
N54 CYCL DEF 4.6 F200 DR- RADIUS 5.5
N55 CYCL CALL  ;;---------------------------aufruf rechtecktasche 50x20
N56 TOOL CALL 3 Z S3000 F200
N57 L X45 Y30 Z1 FMAX M13
N58 CYCL DEF 200 BOHREN ~
    Q200=+1 ;SICHERHEITS-ABST. ~
    Q201=-3 ;TIEFE ~
    Q206=100 ;VORSCHUB TIEFENZ. ~
    Q202=+3 ;ZUSTELL-TIEFE ~
    Q210=0 ;VERWEILZEIT OBEN ~
    Q203=+0 ;KOOR. OBERFLAECHE ~
    Q204=+1 ;2. SICHERHEITS-ABST. ~
    Q211=0.1 ;VERWEILZEIT UNTEN
N59 LBL 2
N60 CYCL DEF 220 MUSTER KREIS ~
    Q216=+45 ;MITTE 1. ACHSE ~
    Q217=+30 ;MITTE 2. ACHSE ~
    Q244=+22 ;TEILKREIS-DURCHM. ~
    Q245=+30 ;STARTWINKEL ~
    Q246=+270 ;ENDWINKEL ~
    Q247=+120 ;WINKELSCHRITT ~
    Q241=+3 ;ANZAHL BEARBEITUNGEN ~
    Q200=+1 ;SICHERHEITS-ABST. ~
    Q203=+0 ;KOOR. OBERFLAECHE ~
    Q204=+1 ;2. SICHERHEITS-ABST. ~
    Q301=+1 ;FAHREN AUF S. HOEHE ~
    Q365=+0 ;VERFAHRART
N61 CYCL DEF 7.0 NULLPUNKT
N62 CYCL DEF 7.1 IX+40
N63 CYCL DEF 7.2 IY+0
N64 CYCL DEF 7.3 IZ+0
N65 LBL 0
N66 CALL LBL 2 REP 1
N67 CYCL DEF 7.0 NULLPUNKT
N68 CYCL DEF 7.1 X+0
N69 CYCL DEF 7.2 Y+0
N70 CYCL DEF 7.3 Z+0
N71 TOOL CALL 4 Z S3000 F150
N72 L X45 Y30 Z1 FMAX M13
N73 Q201=-21.65
N74 CALL LBL 2 REP 1
N75 M30
N76 END PGM 02 MM