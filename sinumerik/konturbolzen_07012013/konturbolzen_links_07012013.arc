{ Einrichtblatt
{   Maschine: "MTS M-TMC-C R3 T16 VDI30"
{   Steuerung: "SINUMERIK 810-840D TURNMILL"
{
{ Allgemeine Informationen
{   Programmierer: "Sebastian Weigl"
{   Erstellungszeit: "18.12.2012 14:08"
{
{ Werkstück
{   Vorgefertigtes Teil: "E:\cnc\drehen_mts\woche15_07-11012013\konturbolzen_07012013\konturbolzen.xwp" umgespannt
{   Werkstoff: "N\Aluminium\AlMg1"
{
{ Werkstück-Einspannung
{   Spannmittel: "DIN55028 A8\KraftspannF\KSF200-3AsB"
{   Spannmittelaufsatz: "AsB40V1.5x60\AufsatzB hart\HB3-B40xL49_24_12xH75_45_15"
{   Spannungsart: Außenspannung außenstufige Backen
{   Einspanntiefe: ET34
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
{     T04: "VDI30A\WendeplattenBo\WPB 28x56(140) L_E1-30 32x75" 808000
{     T08: "VDI30A\Bohrstange nm\DCMT 070204_A12K - SDUCL 07_E2-30 12x60" FF8080
{     T10: "VDI30A\Bohrstange nm\DCMT 070204_A12K - SDUCL 07_E2-30 12x60" 80FF80
{   Aktives Werkzeug: T01
{
{   Werkzeugkorrekturwertliste
{     T01 TC1: KZ+047.000 KX+075.000 Q3 QZ-000.400 QX-000.400 R000.400 Ap052.000 Kr+003.000 DB000.000 SL016.178
{     T02 TC1: KZ+047.000 KX+075.000 Q3 QZ-000.400 QX-000.400 R000.400 Ap052.000 Kr+003.000 DB000.000 SL016.178
{     T03 TC1: KZ+046.550 KX+107.000 Q3 QZ-000.150 QX-000.150 R000.150 Ap000.000 Kr+000.000 DB002.200 SL009.000
{     T03 TC2: KZ+044.350 KX+107.000 Q4 QZ+000.150 QX-000.150 R000.150 Ap000.000 Kr+000.000 DB002.200 SL009.000
{     T04 TC1: KZ+155.000 KX+000.000 Q7 QZ+000.000 QX+000.000 R014.000 Ap000.000 Kr+000.000 DB028.000 SL056.000 NZ02
{     T05 TC1: KZ+063.000 KX+116.200 Q8 QZ+000.000 QX+000.000 R004.000 Ap045.000 Kr+045.000 DB008.000 SL025.000 NZ02
{     T05 TC2: KZ+063.000 KX+116.100 Q8 QZ+000.000 QX+000.000 R004.000 Ap045.000 Kr+045.000 DB008.000 SL025.000 NZ02
{     T05 TC3: KZ+063.000 KX+112.200 Q8 QZ+000.000 QX+000.000 R004.000 Ap045.000 Kr+045.000 DB008.000 SL025.000 NZ02
{     T07 TC1: KZ+063.000 KX+144.000 Q8 QZ+000.000 QX+000.000 R003.400 Ap031.000 Kr+031.000 DB006.800 SL069.000
{     T07 TC2: KZ+063.000 KX+142.008 Q8 QZ+000.000 QX+000.000 R003.400 Ap031.000 Kr+031.000 DB006.800 SL069.000
{     T07 TC3: KZ+063.000 KX+144.051 Q8 QZ+000.000 QX+000.000 R003.400 Ap031.000 Kr+031.000 DB006.800 SL069.000
{     T08 TC1: KZ+134.100 KX-009.000 Q2 QZ-000.400 QX+000.400 R000.400 Ap031.607 Kr+003.046 DB000.000 SL007.340 Dmin015.000
{     T09 TC1: KZ+048.001 KX+095.000 Q8 QZ+000.000 QX-000.216 R000.216 Ap000.000 Kr+000.000 DB000.000 SL000.000
{     T09 TC2: KZ+047.001 KX+095.000 Q8 QZ+000.001 QX-000.213 R000.000 Ap000.000 Kr+000.000 DB000.000 SL000.000
{     T10 TC1: KZ+134.100 KX-009.000 Q2 QZ-000.400 QX+000.400 R000.400 Ap031.607 Kr+003.046 DB000.000 SL007.340 Dmin015.000
{     T11 TC1: KZ+063.000 KX+105.100 Q8 QZ+000.000 QX+000.000 R003.000 Ap000.000 Kr+000.000 DB006.000 SL024.000 NZ03
{
{ Nullpunktregister
{   Nullpunkt G54: Z196 X0 NT13
{   Rechte Fläche des Werkstückes: Z197
{
{ Einrichtblatt-Ende
N10 G54
N15 G96 T01 D1 S200 F0.5 M4
N20 LIMS=3000
N25 L100
N30 CYCLE95("L2",3,,,0.5,,,,1,,,)
N35 L1000
N40 G96 T02 D1 S200 F0.2 M4
N45 G42
N50 L2
N55 G40
N60 L1000
N65 G96 T04 D1 S200 F0.3 M4
N70 G0 X0 Z20
N75 G0 Z1
N80 G17
N85 CYCLE81(1,0,1,-34.7)
N90 G18
N95 L1000
N100 G96 T08 D1 S200 F0.5 M4
N105 G0 X0 Z1
N110 CYCLE95("L3",3,,,0.5,,,,3,,,)
N115 L1000
N120 G96 T10 D1 S200 F0.3 M4
N125 G41
N130 L3
N135 G40
N140 L1000
N145 M30
