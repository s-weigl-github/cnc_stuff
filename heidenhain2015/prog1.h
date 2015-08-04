0  BEGIN PGM PROG1 MM 
1  BLK FORM 0.1 Z X+0 Y+0 Z-20
2  BLK FORM 0.2  X+150  Y+150  Z+0
3  TOOL CALL 5 Z
4  ;
5  ;
6  QR1 = 150 ;;----laenge in X----;;
7  QR2 = 150 ;;----laenge in Y----;;
8  ;;---- ----;;
9  QR3 = 80
10 QR4 = QR3 / 2
11 QR5 = QR4 / QR3
12 QR6 = TAN QR5
13 QR7 = SQRT ( ( QR4 ^ 2 ) + ( QR3 ^ 2 ) )
14 QR8 = QR1 / 2 ;;----mittig in X----;;
15 QR9 = ( QR2 - QR3 ) / 2 ;;----mittig in Y----;;
16 ;
17 ;
18 FN 1: QR10 =+QR1 + +20
19 FN 4: QR11 =+QR10 DIV +2
20 ;
21 ;
22 FN 16: F-PRINT TNC:\nc_prog\weigl\maske.a / TNC:\nc_prog\weigl\ausgabe.txt
23 ;
24 END PGM PROG1 MM 
