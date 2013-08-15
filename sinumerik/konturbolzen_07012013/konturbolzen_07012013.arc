{ Einrichtblatt
{   Maschine: "MTS M-TMC-C R3 T16 VDI30"
{   Steuerung: "SINUMERIK 810-840D TURNMILL"
{
{ Allgemeine Informationen
{   Programmierer: "Sebastian Weigl"
{   Erstellungszeit: "07.01.2013 10:22"
{
{ Werkstück
{   Zylinder: L72 DA100
{   Werkstoff: "P\Automatenstahl\44SMn28"
{
{ Werkstück-Einspannung
{   Spannmittel: "DIN55028 A8\KraftspannF\KSF200-3AsB"
{   Spannmittelaufsatz: "AsB40V1.5x60\AufsatzB hart\HB3-B40xL49_24_12xH75_45_15"
{   Spannungsart: Außenspannung außenstufige Backen
{   Einspanntiefe: ET5
{
{ Reitstock
{   Reitstockspitze: "MK4\Reitstockspitze\KSMK4-60-60-25_44"
{   Reitstockposition: ZR1100 M10
{
{ Werkzeugsystem
{   Werkzeugsatz: leer
{   Werkzeugliste
{     T01: "VDI30A\Linker EckDm\VBMW 160404_SVJBL 2020 H 16_B1-30 2022" FF8080
{     T02: "VDI30A\Linker EckDm\VBMW 160404_SVJBL 2020 H 16_B1-30 2022" 80FF80
{     T04: "VDI30A-Mill\SchlichtF HSS l-G17\schlichtF 11.8x53" FF0000
{     T06: "VDI30A-Mill\SchlitzF-G17\schlitzF 20x8,2" FF00FF
{     T08: "VDI30A\Axialer EinstechM\SE-4.00-0700-02NR_FFS-4.00-2020-J20-B 42-70R_C1-30 2070" 8000FF
{     T10: "VDI30A-Mill\WinkelF Form B-G17\WF-B45 16x4(60) R_AWK-30ER 25x63" 0000FF
{   Aktives Werkzeug: T01
{
{   Werkzeugkorrekturwertliste
{     T01 TC1: KZ+047.000 KX+075.000 Q3 QZ-000.400 QX-000.400 R000.400 Ap052.000 Kr+003.000 DB000.000 SL016.178
{     T02 TC1: KZ+047.000 KX+075.000 Q3 QZ-000.400 QX-000.400 R000.400 Ap052.000 Kr+003.000 DB000.000 SL016.178
{     T03 TC1: KZ+046.550 KX+107.000 Q3 QZ-000.150 QX-000.150 R000.150 Ap000.000 Kr+000.000 DB002.200 SL009.000
{     T03 TC2: KZ+044.350 KX+107.000 Q4 QZ+000.150 QX-000.150 R000.150 Ap000.000 Kr+000.000 DB002.200 SL009.000
{     T04 TC1: KZ+170.100 KX+000.000 Q7 QZ+000.000 QX+000.000 R005.900 Ap000.000 Kr+000.000 DB011.800 SL053.000 NZ04
{     T05 TC1: KZ+063.000 KX+177.200 Q8 QZ+000.000 QX+000.000 R004.000 Ap045.000 Kr+045.000 DB008.000 SL025.000 NZ02
{     T05 TC2: KZ+063.000 KX+177.100 Q8 QZ+000.000 QX+000.000 R004.000 Ap045.000 Kr+045.000 DB008.000 SL025.000 NZ02
{     T05 TC3: KZ+063.000 KX+173.200 Q8 QZ+000.000 QX+000.000 R004.000 Ap045.000 Kr+045.000 DB008.000 SL025.000 NZ02
{     T06 TC1: KZ+123.100 KX+000.000 Q7 QZ+000.000 QX+000.000 R010.000 Ap000.000 Kr+000.000 DB020.000 SL008.200 NZ10
{     T07 TC1: KZ+063.000 KX+177.000 Q8 QZ+000.000 QX+000.000 R003.400 Ap031.000 Kr+031.000 DB006.800 SL102.000
{     T07 TC2: KZ+063.000 KX+175.008 Q8 QZ+000.000 QX+000.000 R003.400 Ap031.000 Kr+031.000 DB006.800 SL102.000
{     T07 TC3: KZ+063.000 KX+177.051 Q8 QZ+000.000 QX+000.000 R003.400 Ap031.000 Kr+031.000 DB006.800 SL102.000
{     T08 TC1: KZ+110.000 KX+034.000 Q2 QZ-000.200 QX+000.200 R000.200 Ap000.000 Kr+000.000 DB004.000 SL011.000 Dmin042.000 Dmax070.000
{     T08 TC2: KZ+110.000 KX+038.000 Q3 QZ-000.200 QX-000.200 R000.200 Ap000.000 Kr+000.000 DB004.000 SL011.000 Dmin042.000 Dmax070.000
{     T09 TC1: KZ+048.001 KX+095.000 Q8 QZ+000.000 QX-000.216 R000.216 Ap000.000 Kr+000.000 DB000.000 SL000.000
{     T09 TC2: KZ+047.001 KX+095.000 Q8 QZ+000.001 QX-000.213 R000.000 Ap000.000 Kr+000.000 DB000.000 SL000.000
{     T10 TC1: KZ+120.100 KX+000.000 Q7 QZ+000.000 QX+000.000 R004.000 Ap045.000 Kr+045.000 DB016.000 SL004.000 NZ06
{     T11 TC1: KZ+063.000 KX+105.100 Q8 QZ+000.000 QX+000.000 R003.000 Ap000.000 Kr+000.000 DB006.000 SL024.000 NZ03
{
{ Nullpunktregister
{   Nullpunkt G54: Z228 X0 NT13
{   Rechte Fläche des Werkstückes: Z229
{
{ Einrichtblatt-Ende
N10 G54
N15 G96 T01 D1 S200 F0.5 M4
N20 LIMS=3000
N25 L100
N30 CYCLE95("L1",3,,,0.5,,,,1,,,)
N35 L1000
N40 T02 D1 S200 F0.2 M4
N45 G0 X-5 Z1
N50 G42
N55 L1
N60 G40
N65 L1000
N70 T08 D1 S200 F0.3 M4
N75 G0 X80 Z-40
N80 CYCLE93(75.05,-48.05,9.8,13.5,0,0,0,0,0,0,0,0.2,0.2,1,0.1,6,1)
N85 L1000
N90 TRAFOOF
N95 SPOS=0
N100 DIAMOF
N105 TRANSMIT
N110 G54
N115 T04 D1
N120 G94 F200
N125 M2=3 S2=3000
N130 G0 X22.9 Y25 Z1
N135 G1 Z-18.25
N140 G1 Y-25
N145 G0 C180
N150 G0 X-22.9 Y-25 Z1
N155 G1 Z-18.25
N160 G1 Y25
N165 G0 Z1
N170 G0 C0
N175 G0 X25 Y0 Z-18.25
N180 G1 X-25
N185 G0 Z1
N190 T10 D1
N195 G94 F200
N200 M2=3 S2=3000
N205 G0 X25 Y27 Z1
N210 G1 Z-22.25
N215 G1 Y-27
N220 G0 C180
N225 G0 X-25 Y-27 Z1
N230 G1 Z-22.25
N235 G1 Y27
N240 G0 Z1
N245 G0 C0
N250 T06 D1
N255 G94 F200
N260 M2=3 S2=3000
N265 G0 X30 Y0
N270 G0 Z-18.25
N275 G1 X-30
N280 G0 Z1
N285 G0 X50 Z150
N290 L1000
N295 G18
N300 L1000
N300 M30
