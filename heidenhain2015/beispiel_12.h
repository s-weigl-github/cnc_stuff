0  BEGIN PGM BEISPIEL_12 MM 
1  BLK FORM 0.1 Z X+0 Y+0 Z-15
2  BLK FORM 0.2  X+100  Y+80  Z+0
3  CYCL DEF 247 BEZUGSPUNKT SETZEN ~
    Q339=+1    ;BEZUGSPUNKT-NUMMER
4  TOOL CALL "SCHFR_DM8_SN2" Z S11140.847 F891.268
5  L  Z+100 FMAX M13
6  L  Z+2
7  CYCL DEF 14.0 KONTUR
8  CYCL DEF 14.1 KONTURLABEL1 /2 /3
9  CYCL DEF 20 KONTUR-DATEN ~
    Q1=-10   ;FRAESTIEFE ~
    Q2=+1    ;BAHN-UEBERLAPPUNG ~
    Q3=+0    ;AUFMASS SEITE ~
    Q4=+0    ;AUFMASS TIEFE ~
    Q5=+0    ;KOOR. OBERFLAECHE ~
    Q6=+2    ;SICHERHEITS-ABST. ~
    Q7=+10   ;SICHERE HOEHE ~
    Q8=+0.5  ;RUNDUNGSRADIUS ~
    Q9=-1    ;DREHSINN
10 CYCL DEF 22 AUSRAEUMEN ~
    Q10=-10   ;ZUSTELL-TIEFE ~
    Q11= AUTO ;VORSCHUB TIEFENZ. ~
    Q12= AUTO ;VORSCHUB RAEUMEN ~
    Q18=+0    ;VORRAEUM-WERKZEUG ~
    Q19= AUTO ;VORSCHUB PENDELN ~
    Q208= AUTO ;VORSCHUB RUECKZUG
11 M99
12 L  Z+100
13 M30
14 ;;----konturtasche----;;
15 LBL 1
16 L  X+15  Y+5 RR
17 L  X+5
18 RND R6
19 L  Y+75
20 RND R6
21 L  X+65
22 RND R6
23 L  X+95  Y+60
24 RND R6
25 L  Y+5
26 RND R6
27 L  X+65
28 RND R6
29 CC  X+50  Y+5
30 C  X+35 DR+
31 RND R6
32 L  X+15
33 LBL 0
34 ;;----kreiszapfen in konturtasche----;;
35 LBL 2
36 L  X+15  Y+40 RL
37 CC  X+30  Y+40
38 CR IX+30 IY+0 R+15 DR-
39 CR IX-30 IY+0 R+15 DR-
40 LBL 0
41 ;;----zapfen in konturtasche----;;
42 LBL 3
43 L  X+70  Y+37.5 RL
44 L IY+12.5
45 CR IX+10 IY+0 R+5 DR-
46 L IY-25
47 CR IX-10 IY+0 R+5 DR-
48 L  Y+37.5
49 LBL 0
50 END PGM BEISPIEL_12 MM 
