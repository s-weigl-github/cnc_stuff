0  BEGIN PGM KREISINSEL MM 
1  BLK FORM 0.1 Z X-50 Y-50 Z-20
2  BLK FORM 0.2  X+50  Y+50  Z+0
3  TOOL CALL "SCHFR_DM24_SN4" Z S3713.615 F1782.535
4  ;;----vorposition----;;
5  L  Z+100 FMAX
6  L  Z+2
7  L  X+0  Y-80 M13
8  L  Z-5 F AUTO
9  ;;----start der kontur----;;
10 APPR LT  Y-40 RL
11 CC  X+0  Y+0
12 CP IPA-180 DR-
13 CP IPA-180 DR-
14 DEP LCT  X+0  Y-80 R10
15 ;;----ende der kontur----;;
16 L  Z+2
17 L  Z+100 FMAX
18 M30
19 END PGM KREISINSEL MM 
