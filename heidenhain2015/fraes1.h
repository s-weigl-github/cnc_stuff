0  BEGIN PGM FRAES1 MM 
1  BLK FORM 0.1 Z X+0 Y+0 Z-20
2  BLK FORM 0.2  X+100  Y+100  Z+0
3  TOOL CALL "SCHFR_DM10_SN3" Z S8912.677 F1604.282
4  L  Z+100 R0 FMAX M13
5  L  X-15  Y+30 R0 FMAX
6  L  Z-4 FMAX
7  L  X+35 R0 F AUTO
8  L  X+77  Y+75 R0 F AUTO
9  L  X+115 R0 F AUTO
10 L  Z+2 FMAX
11 L  Z+100 FMAX
12 M30
13 END PGM FRAES1 MM 
