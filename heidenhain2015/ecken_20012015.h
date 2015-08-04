0  BEGIN PGM ECKEN_20012015 MM 
1  BLK FORM 0.1 Z X+0 Y+0 Z-20
2  BLK FORM 0.2  X+100  Y+100  Z+0
3  ;;----aufruf wkz schaftfräser 32----;;
4  TOOL CALL "SCHFR_DM32_SN4" Z S2785.212 F2450.986
5  ;;----anfahrt links kontur und tiefe----;;
6  L  Z+100 FMAX M13
7  L  X-40  Y+50  Z+2 FMAX
8  L  Z-5 F AUTO
9  ;;----kontur beginnt hier----;;
10 APPR LN  X+10  Y+70 RL F AUTO M13
11 L  X+10  Y+90
12 RND R10
13 L  X+70  Y+90
14 RND R5
15 L  X+90  Y+50
16 RND R5
17 L  Y+10
18 RND R10
19 L  X+50
20 RND R5
21 L  Y+50  X+10
22 RND R5
23 L  X+10  Y+80
24 DEP LCT  X-40 R16
25 ;;----kontur ende----;;
26 L  Z+2 FMAX
27 L  Z+100 FMAX
28 M30
29 END PGM ECKEN_20012015 MM 
