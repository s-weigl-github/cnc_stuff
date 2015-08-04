0  BEGIN PGM PLATTE_1_29072015 MM 
1  BLK FORM 0.1 Z X+0 Y+0 Z-20
2  BLK FORM 0.2  X+100  Y+100  Z+0
3  CYCL DEF 247 BEZUGSPUNKT SETZEN ~
    Q339=+1    ;BEZUGSPUNKT-NUMMER
4  TOOL CALL "SCHFR_DM8_SN2" Z S11140.846 F891.268
5  ;
6  L  Z+100 FMAX M13
7  L  Z+10
8  ;
9  ;
10 CYCL DEF 14.0 KONTUR
11 CYCL DEF 14.1 KONTURLABEL1
12 ;
13 CYCL DEF 20 KONTUR-DATEN ~
    Q1=-5    ;FRAESTIEFE ~
    Q2=+1    ;BAHN-UEBERLAPPUNG ~
    Q3=+0    ;AUFMASS SEITE ~
    Q4=+0    ;AUFMASS TIEFE ~
    Q5=+0    ;KOOR. OBERFLAECHE ~
    Q6=+2    ;SICHERHEITS-ABST. ~
    Q7=+10   ;SICHERE HOEHE ~
    Q8=+0.2  ;RUNDUNGSRADIUS ~
    Q9=-1    ;DREHSINN
14 ;
15 CYCL DEF 22 AUSRAEUMEN ~
    Q10=-5    ;ZUSTELL-TIEFE ~
    Q11= AUTO ;VORSCHUB TIEFENZ. ~
    Q12= AUTO ;VORSCHUB RAEUMEN ~
    Q18=+0    ;VORRAEUM-WERKZEUG ~
    Q19=+0    ;VORSCHUB PENDELN ~
    Q208= MAX ;VORSCHUB RUECKZUG
16 ;
17 * - erstes element-links unten
18 ;
19 CYCL DEF 7.0 NULLPUNKT
20 CYCL DEF 7.1  X+20
21 CYCL DEF 7.2  Y+10
22 ;
23 CYCL CALL
24 ;
25 * - zweites element-rechts unten-scl=1.2
26 ;
27 CYCL DEF 7.0 NULLPUNKT
28 CYCL DEF 7.1  X+60
29 CYCL DEF 7.2  Y+10
30 ;
31 CYCL DEF 11.0 MASSFAKTOR
32 CYCL DEF 11.1 SCL 1.2
33 ;
34 CYCL CALL
35 ;
36 CYCL DEF 11.0 MASSFAKTOR
37 CYCL DEF 11.1 SCL 1
38 ;
39 * - drittes element-rechts oben- mirror X
40 ;
41 CYCL DEF 7.0 NULLPUNKT
42 CYCL DEF 7.1  X+90
43 CYCL DEF 7.2  Y+60
44 ;
45 CYCL DEF 8.0 SPIEGELUNG
46 CYCL DEF 8.1 X
47 ;
48 CYCL CALL
49 ;
50 CYCL DEF 8.0 SPIEGELUNG
51 CYCL DEF 8.1
52 ;
53 * - viertes element-links oben-rot+20
54 ;
55 CYCL DEF 7.0 NULLPUNKT
56 CYCL DEF 7.1  X+20
57 CYCL DEF 7.2  Y+60
58 ;
59 CYCL DEF 10.0 DREHUNG
60 CYCL DEF 10.1  ROT+20
61 ;
62 CYCL CALL
63 ;
64 ;
65 ;
66 L  Z+100 FMAX
67 M30
68 ;
69 ;
70 LBL 1
71 L  Y+10  X+0 RR
72 L IY+10
73 RND R5
74 L IX+20
75 RND R5
76 L IY-20
77 CR IX-10 IY+0 R+5 DR-
78 L IX-10
79 RND R5
80 L IY+10
81 LBL 0
82 END PGM PLATTE_1_29072015 MM 
