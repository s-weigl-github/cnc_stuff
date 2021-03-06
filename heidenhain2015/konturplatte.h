0  BEGIN PGM KONTURPLATTE MM 
1  BLK FORM 0.1 Z X+0 Y+0 Z-24
2  BLK FORM 0.2  X+149  Y+149  Z+0
3  ;
4  CYCL DEF 247 BEZUGSPUNKT SETZEN ~
    Q339=+1    ;BEZUGSPUNKT-NUMMER
5  ;
6  TOOL CALL "SCHFR_DM10_SN3" Z S8912.677 F1604.282
7  ;
8  ;
9  L  Z+100 FMAX M13
10 ;
11 CYCL DEF 14.0 KONTUR
12 CYCL DEF 14.1 KONTURLABEL1 /2
13 ;
14 CYCL DEF 20 KONTUR-DATEN ~
    Q1=-5    ;FRAESTIEFE ~
    Q2=+1    ;BAHN-UEBERLAPPUNG ~
    Q3=+0    ;AUFMASS SEITE ~
    Q4=+0    ;AUFMASS TIEFE ~
    Q5=+0    ;KOOR. OBERFLAECHE ~
    Q6=+2    ;SICHERHEITS-ABST. ~
    Q7=+10   ;SICHERE HOEHE ~
    Q8=+0.2  ;RUNDUNGSRADIUS ~
    Q9=-1    ;DREHSINN
15 ;
16 CYCL DEF 22 AUSRAEUMEN ~
    Q10=-5    ;ZUSTELL-TIEFE ~
    Q11= AUTO ;VORSCHUB TIEFENZ. ~
    Q12= AUTO ;VORSCHUB RAEUMEN ~
    Q18=+0    ;VORRAEUM-WERKZEUG ~
    Q19=+0    ;VORSCHUB PENDELN ~
    Q208= MAX ;VORSCHUB RUECKZUG
17 ;
18 CYCL CALL
19 ;
20 ;
21 ;;----kreistasche 24H7----;;
22 ;
23 L  X+110  Y+39.5 FMAX M13
24 ;
25 CYCL DEF 252 KREISTASCHE ~
    Q215=+0    ;BEARBEITUNGS-UMFANG ~
    Q223=+24.0105 ;KREISDURCHMESSER ~
    Q368=+0    ;AUFMASS SEITE ~
    Q207= AUTO ;VORSCHUB FRAESEN ~
    Q351=+1    ;FRAESART ~
    Q201=-8    ;TIEFE ~
    Q202=+4    ;ZUSTELL-TIEFE ~
    Q369=+0    ;AUFMASS TIEFE ~
    Q206= AUTO ;VORSCHUB TIEFENZ. ~
    Q338=+0    ;ZUST. SCHLICHTEN ~
    Q200=+2    ;SICHERHEITS-ABST. ~
    Q203=+0    ;KOOR. OBERFLAECHE ~
    Q204=+10   ;2. SICHERHEITS-ABST. ~
    Q370=+1    ;BAHN-UEBERLAPPUNG ~
    Q366=+1    ;EINTAUCHEN ~
    Q385= AUTO ;VORSCHUB SCHLICHTEN
26 ;
27 CYCL CALL
28 ;
29 ;
30 ;;----langlochnut t=5 b=12.5 l=36----;;
31 ;
32 L  X+116.5  Y+119 FMAX M13
33 ;
34 CYCL DEF 253 NUTENFRAESEN ~
    Q215=+0    ;BEARBEITUNGS-UMFANG ~
    Q218=+48.5 ;NUTLAENGE ~
    Q219=+12.5 ;NUTBREITE ~
    Q368=+0    ;AUFMASS SEITE ~
    Q374=+0    ;DREHLAGE ~
    Q367=+0    ;NUTLAGE ~
    Q207= AUTO ;VORSCHUB FRAESEN ~
    Q351=+1    ;FRAESART ~
    Q201=-5    ;TIEFE ~
    Q202=+5    ;ZUSTELL-TIEFE ~
    Q369=+0    ;AUFMASS TIEFE ~
    Q206= AUTO ;VORSCHUB TIEFENZ. ~
    Q338=+0    ;ZUST. SCHLICHTEN ~
    Q200=+2    ;SICHERHEITS-ABST. ~
    Q203=-5    ;KOOR. OBERFLAECHE ~
    Q204=+10   ;2. SICHERHEITS-ABST. ~
    Q366=+2    ;EINTAUCHEN ~
    Q385= AUTO ;VORSCHUB SCHLICHTEN
35 ;
36 CYCL CALL
37 ;
38 ;
39 ;;----bohrkreis r=20 dm=8----;;
40 ;
41 TOOL CALL "SPIBO_DM8" Z S7957.747 F2228.169
42 ;
43 L  X+42.5  Y+59.5 FMAX M13
44 ;
45 CYCL DEF 200 BOHREN ~
    Q200=+2    ;SICHERHEITS-ABST. ~
    Q201=-8    ;TIEFE ~
    Q206= AUTO ;VORSCHUB TIEFENZ. ~
    Q202=+8    ;ZUSTELL-TIEFE ~
    Q210=+0    ;VERWEILZEIT OBEN ~
    Q203=+0    ;KOOR. OBERFLAECHE ~
    Q204=+10   ;2. SICHERHEITS-ABST. ~
    Q211=+0.02 ;VERWEILZEIT UNTEN ~
    Q395=+1    ;BEZUG TIEFE
46 ;
47 CYCL DEF 220 MUSTER KREIS ~
    Q216=+42.5 ;MITTE 1. ACHSE ~
    Q217=+59.5 ;MITTE 2. ACHSE ~
    Q244=+40   ;TEILKREIS-DURCHM. ~
    Q245=+0    ;STARTWINKEL ~
    Q246=+360  ;ENDWINKEL ~
    Q247=+60   ;WINKELSCHRITT ~
    Q241=+6    ;ANZAHL BEARBEITUNGEN ~
    Q200=+2    ;SICHERHEITS-ABST. ~
    Q203=+0    ;KOOR. OBERFLAECHE ~
    Q204=+10   ;2. SICHERHEITS-ABST. ~
    Q301=+1    ;FAHREN AUF S. HOEHE ~
    Q365=+1    ;VERFAHRART
48 ;
49 CYCL CALL
50 ;
51 ;
52 L  Z+100 FMAX
53 M30
54 ;
55 ;
56 LBL 1
57 L  X+50  Y+14.5 RL
58 L  X+14.5
59 CHF 12.5
60 L  Y+134
61 RND R20
62 L  X+48.206
63 FL  X+65  AN-15
64 L  Y+90
65 RND R15
66 L  X+98.5
67 FL  X+134.5  AN-23.962
68 L  Y+14.5
69 RND R20
70 L  X+50
71 LBL 0
72 ;
73 LBL 2
74 L  X-10  Y-10 RR
75 L IY+170
76 L IX+170
77 L IY-170
78 L IX-170
79 LBL 0
80 ;
81 ;
82 CYCL DEF 240 ZENTRIEREN ~
    Q200=+2    ;SICHERHEITS-ABST. ~
    Q343=+1    ;AUSWAHL DURCHM/TIEFE ~
    Q201=-1    ;TIEFE ~
    Q344=-9    ;DURCHMESSER ~
    Q206= AUTO ;VORSCHUB TIEFENZ. ~
    Q211=+0.05 ;VERWEILZEIT UNTEN ~
    Q203=+0    ;KOOR. OBERFLAECHE ~
    Q204=+10   ;2. SICHERHEITS-ABST.
83 ;
84 END PGM KONTURPLATTE MM 
