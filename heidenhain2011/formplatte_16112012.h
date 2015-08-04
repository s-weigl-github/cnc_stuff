( Einrichtblatt
(   Maschine: "DMU 50-BC T40 SK40"
(   Steuerung: "HEIDENHAIN iTNC 530 340422 BC DEU"
(
( Allgemeine Informationen
(   Programmierer: "Sebastian Weigl"
(   Erstellungszeit: "16.11.2012 12:55"
(
( Werkstück
(   Quader: QX120 QY90 QZ16
(   Werkstoff: "P\Unlegierter Stahl\S235JR"
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
(     T01: "SK40\WalzenstirnF\WSF 40x32x16 R_AFD-40 32x55(17)" FF0000
(     T02: "SK40\BohrnutenF\BNF-B 32x32(112) R_FSF-40 32x100" 008000
(     T03: "SK40\BohrnutenF\BNF-B 10x13(63) R_SZF-40 ER25x60" FF8080
(     T04: "SK40\NC-AnBo\NCABO-90 10x25(170) R_SZF-40 ER25x60"
(     T05: "SK40\SpiralBo HSS l\SPIBO HSS-l 6.8x102156) R_SPBF-40 13x79" 00FF00
(     T06: "SK40\GewindeBo\GBF 8x22(90) 1 L_SZF-40 ER25x60" FF0080
(     T07: "SK40\BohrnutenF\BNF-B 4x7(51) R_SZF-40 ER16x60" FF8000
(   Aktives Werkzeug: T01
(
(   Werkzeugkorrekturwertliste
(     T01 TC1: KL+087.000 KR020.000 NZ06
(     T02 TC1: KL+151.800 KR016.000 NZ02
(     T03 TC1: KL+088.100 KR005.000 NZ02
(     T04 TC1: KL+195.225 KR005.000 NZ02
(     T04 TC2: KL+195.100 KR005.000 NZ02
(     T04 TC3: KL+190.225 KR005.000 NZ02
(     T05 TC1: KL+183.800 KR003.400
(     T05 TC2: KL+181.808 KR003.400
(     T05 TC3: KL+183.851 KR003.400
(     T06 TC1: KL+090.100 KR004.000 NZ04
(     T07 TC1: KL+076.100 KR002.000 NZ02
(
( Nullpunktregister
(   Nullpunkt G54: XP-60 YP-45 ZP16 NT1
(
( Einrichtblatt-Ende
BEGIN PGM 02 MM
N1 BLK FORM 0.1 Z X0 Y0 Z-16
N2 BLK FORM 0.2 X120 Y90 Z0
N3 TOOL CALL 1 Z S1600 F200
N4 L X-45 Y-45 Z1 FMAX M13  ;;----------------fräsen der aussenkontur
N5 L Z-7.5 FMAX
N6 APPR LCT X5 Y30 R20 RL
N7 L Y80
N8 RND R6.5
N9 L X19.74
N10 L X60 Y45
N11 RND R26.5
N12 L X100.26 Y80
N13 L X115
N14 RND R6.5
N15 L Y10
N16 RND R6.5
N17 L X100.26
N18 L X60 Y45
N19 RND R26.5
N20 L X19.74 Y10
N21 L X5
N22 RND R6.5
N23 L Y40
N24 DEP LCT X-45 Y60 R20
N25 L Z1 R0 FMAX  ;;-----------------------ende aussenkontur
N26 TOOL CALL 2 Z S2020 F200
N27 L X60 Y45 Z1 FMAX M13
N28 CYCL DEF 5.0 KREISTASCHE  ;;-----------def. der kreistasche Ø78
N29 CYCL DEF 5.1 ABST 1
N30 CYCL DEF 5.2 TIEFE -5.5
N31 CYCL DEF 5.3 ZUSTLG 5.5 F100
N32 CYCL DEF 5.4 RADIUS 39
N33 CYCL DEF 5.5 F200 DR-
N34 CYCL CALL  ;;-------------------------aufruf kreistasche
N35 CYCL DEF 4.0 TASCHENFRAESEN  ;;-------def. rechtecktasche auf z-4
N36 CYCL DEF 4.1 ABST 1
N37 CYCL DEF 4.2 TIEFE -4
N38 CYCL DEF 4.3 ZUSTLG 4 F100
N39 CYCL DEF 4.4 X+145
N40 CYCL DEF 4.5 Y+35.065
N41 CYCL DEF 4.6 F200 DR- RADIUS 16
N42 CYCL CALL  ;;------------------------aufruf rechtecktasche
N43 TOOL CALL 3 Z S2000 F200
N44 L X60 Y100 Z1 FMAX M13  ;;----------fräsen der konturtasche oben mitte auf z-10,5
N45 L Z-10.5 FMAX
N46 APPR LCT X40 Y90 R6 RL
N47 L Y80
N48 RND R6
N49 L X50 Y70
N50 RND R6
N51 L X70
N52 RND R6
N53 L X80 Y80
N54 RND R6
N55 L Y90
N56 DEP LCT X60 Y100 R6
N57 L Z1 R0 FMAX  ;;-------------------ende konturtasche oben mitte
N58 L X60 Y85 Z1 FMAX
N59 CYCL DEF 4.0 TASCHENFRAESEN  ;;-------------räumen der konturtasche obem mitte auf z-10,5
N60 CYCL DEF 4.1 ABST 1
N61 CYCL DEF 4.2 TIEFE -10.5
N62 CYCL DEF 4.3 ZUSTLG 5 F100
N63 CYCL DEF 4.4 X+30
N64 CYCL DEF 4.5 Y+20
N65 CYCL DEF 4.6 F200 DR- RADIUS 6
N66 CYCL CALL  ;;-------------------------------räumen fertig
N67 L X14 Y20 Z1 FMAX
N68 CYCL DEF 5.0 KREISTASCHE  ;;---------------def. der passbohrung Ø10H7 vorne links
N69 CYCL DEF 5.1 ABST 1
N70 CYCL DEF 5.2 TIEFE -8.3
N71 CYCL DEF 5.3 ZUSTLG 4.15 F100
N72 CYCL DEF 5.4 RADIUS 5.004
N73 CYCL DEF 5.5 F200 DR-
N74 CYCL CALL  ;;-------------------------aufruf passbohrung Ø10H7 vorne links
N75 L X106 Y20 Z1 FMAX  ;;----------------anfahrt auf passbohrung vorne rechts
N76 CYCL CALL  ;;------------------------aufruf passbohrung Ø10H7 vorne rchts
N77 TOOL CALL 4 Z S2000 F200
N78 L X60 Y45 Z1 FMAX M13
N79 CYCL DEF 200 BOHREN ~  ;;------------def. anbohren in kreistasche
    Q200=+1 ;SICHERHEITS-ABST. ~
    Q201=-10 ;TIEFE ~
    Q206=100 ;VORSCHUB TIEFENZ. ~
    Q202=+10 ;ZUSTELL-TIEFE ~
    Q210=0 ;VERWEILZEIT OBEN ~
    Q203=+0 ;KOOR. OBERFLAECHE ~
    Q204=+1 ;2. SICHERHEITS-ABST. ~
    Q211=0.1 ;VERWEILZEIT UNTEN
N80 LBL 1
N81 CYCL DEF 220 MUSTER KREIS ~
    Q216=+60 ;MITTE 1. ACHSE ~
    Q217=+45 ;MITTE 2. ACHSE ~
    Q244=+48 ;TEILKREIS-DURCHM. ~
    Q245=+0 ;STARTWINKEL ~
    Q246=+180 ;ENDWINKEL ~
    Q247=+180 ;WINKELSCHRITT ~
    Q241=+2 ;ANZAHL BEARBEITUNGEN ~
    Q200=+1 ;SICHERHEITS-ABST. ~
    Q203=+0 ;KOOR. OBERFLAECHE ~
    Q204=+1 ;2. SICHERHEITS-ABST. ~
    Q301=+1 ;FAHREN AUF S. HOEHE ~
    Q365=+0 ;VERFAHRART
N82 LBL 0  ;;-----------------------------aufruf anbohren in kreistasche
N83 TOOL CALL 5 Z S2000 F150
N84 L X60 Y45 Z1 FMAX M13
N85 Q201=-18
N86 CALL LBL 1  ;;-------------------------aufruf durchgangsbohrung in keistasche
N87 TOOL CALL 6 Z S2000 F200
N88 L X60 Y45 Z1 FMAX M4
N89 CYCL DEF 2.0 GEWINDEBOHREN  ;;-----------def. gewindeschneiden in kreistasche
N90 CYCL DEF 2.1 ABST 1
N91 CYCL DEF 2.2 TIEFE -18
N92 CYCL DEF 2.3 V.ZEIT 0.1
N93 CYCL DEF 2.4 F100
N94 CALL LBL 1  ;;---------------------------aufruf gewindeschneiden
N95 TOOL CALL 7 Z S2000 F200
N96 L X60 Y15 Z1 FMAX M13
N97 CYCL DEF 4.0 TASCHENFRAESEN  ;;----def. langlochnut unten mitte auf z-10,7 als passnut 14P9
N98 CYCL DEF 4.1 ABST 1
N99 CYCL DEF 4.2 TIEFE -10.7
N100 CYCL DEF 4.3 ZUSTLG 10.7 F100
N101 CYCL DEF 4.4 X+44
N102 CYCL DEF 4.5 Y+14.039
N103 CYCL DEF 4.6 F200 DR- RADIUS 7.019
N104 CYCL CALL  ;;-------------------------aufruf langloch auf z-10,7
N105 L X60 Y15 Z1 FMAX
N106 CYCL DEF 4.0 TASCHENFRAESEN  ;;-------------def. passnut 8P9 auf durchgang
N107 CYCL DEF 4.1 ABST 1
N108 CYCL DEF 4.2 TIEFE -16.5
N109 CYCL DEF 4.3 ZUSTLG 4.5 F100
N110 CYCL DEF 4.4 X+38
N111 CYCL DEF 4.5 Y+8.033
N112 CYCL DEF 4.6 F200 DR- RADIUS 4.016
N113 CYCL CALL  ;;-----------------------------aufruf passnut 8P9
N114 L X200 Y200 Z100 FMAX
N115 M30
N116 END PGM 02 MM
