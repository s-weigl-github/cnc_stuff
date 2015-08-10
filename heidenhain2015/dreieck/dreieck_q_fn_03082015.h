0  BEGIN PGM DREIECK_Q_FN_03082015 MM 
1  BLK FORM 0.1 Z X+0 Y+0 Z-20
2  BLK FORM 0.2  X+QR1  Y+QR2  Z+0
3  ;
4  CALL PGM TNC:\nc_prog\weigl\dreieck\reset.H
5  ;
6  CYCL DEF 247 BEZUGSPUNKT SETZEN ~
    Q339=+1    ;BEZUGSPUNKT-NUMMER
7  ;
8  TOOL CALL "SCHFR_DM20_SN4" Z S4456.338 F1782.535
9  ;
10 L  Z+100 FMAX M13
11 ;;----vorposition----;;
12 L  X+QR20  Y+QR21 R0 FMAX
13 ;
14 ;;----programmParameter----;;
15 FN 16: F-PRINT TNC:\nc_prog\weigl\dreieck\dreieck_maske.a / TNC:\nc_prog\weigl\dreieck\dreieck_ausgabe.txt
16 ;
17 ;;----rohteilmasse----;;
18 QR1 = 200 ;;----laenge in X----;;
19 QR2 = 200 ;;----laenge in Y----;;
20 QR3 = 180 ;;----hoehe des dreiecks----;;
21 QR12 = 20 ;;----rohteilaufmass----;;
22 QR15 = - 15 ;;----tiefe der kontur----;;
23 ;;---- ----;;
24 ;;----berechnungen----;;
25 ;;----BITTE NICHT VERAENDERN----;;
26 QR4 = QR3 / 2
27 QR5 = QR4 / QR3
28 QR6 = TAN QR5
29 QR7 = SQRT ( ( QR4 ^ 2 ) + ( QR3 ^ 2 ) )
30 QR8 = QR1 / 2 ;;----mittig in X----;;
31 QR9 = ( QR2 - QR3 ) / 2 ;;----mittig in Y----;;
32 FN 1: QR10 =+QR1 + +QR12
33 FN 4: QR11 =+QR10 DIV +2
34 QR13 = QR12 / 2
35 QR14 = QR2 + QR12
36 QR20 = QR1 / 2
37 QR21 = QR2 / 2
38 ;;----ende Parameter Definition----;;
39 ;
40 CYCL DEF 14.0 KONTUR
41 CYCL DEF 14.1 KONTURLABEL1 /2
42 ;
43 CYCL DEF 20 KONTUR-DATEN ~
    Q1=+QR15 ;FRAESTIEFE ~
    Q2=+1    ;BAHN-UEBERLAPPUNG ~
    Q3=+0    ;AUFMASS SEITE ~
    Q4=+0    ;AUFMASS TIEFE ~
    Q5=+0    ;KOOR. OBERFLAECHE ~
    Q6=+2    ;SICHERHEITS-ABST. ~
    Q7=+10   ;SICHERE HOEHE ~
    Q8=+0.2  ;RUNDUNGSRADIUS ~
    Q9=-1    ;DREHSINN
44 ;
45 CYCL DEF 22 AUSRAEUMEN ~
    Q10=-10   ;ZUSTELL-TIEFE ~
    Q11= AUTO ;VORSCHUB TIEFENZ. ~
    Q12= AUTO ;VORSCHUB RAEUMEN ~
    Q18=+0    ;VORRAEUM-WERKZEUG ~
    Q19=+0    ;VORSCHUB PENDELN ~
    Q208= MAX ;VORSCHUB RUECKZUG
46 ;
47 CYCL CALL
48 ;
49 L  X+QR20  Y+QR21 R0 FMAX
50 L  Z+100 R0 FMAX M13
51 M30
52 ;
53 ;;----zapfen als dreieck----;;
54 LBL 1
55 L  X+QR8  Y+QR9 RL
56 L IX-QR4
57 L IX+QR4 IY+QR3
58 L IX+QR4 IY-QR3
59 L IX-QR4
60 LBL 0
61 ;;----rohteil kontur----;;
62 LBL 2
63 L  X-QR13  Y-QR13 RR
64 L IY+QR14
65 L IX+QR10
66 L IY-QR14
67 L IX-QR10
68 LBL 0
69 ;
70 END PGM DREIECK_Q_FN_03082015 MM 
