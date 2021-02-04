EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L gammy:ProMicro U1
U 1 1 6017995D
P 6125 3400
F 0 "U1" H 6125 4237 60  0000 C CNN
F 1 "ProMicro" H 6125 4131 60  0000 C CNN
F 2 "gammy:ProMicro_v3.5" H 6225 2350 60  0000 C CNN
F 3 "" H 6225 2350 60  0000 C CNN
	1    6125 3400
	1    0    0    -1  
$EndComp
$Comp
L gammy:SW_RESET SW1
U 1 1 6017BB2B
P 4800 2375
F 0 "SW1" H 4800 2720 50  0000 C CNN
F 1 "SW_RESET" H 4800 2629 50  0000 C CNN
F 2 "gammy:mouse_click" H 4800 2538 50  0000 C CNN
F 3 "" H 4800 2375 50  0000 C CNN
	1    4800 2375
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0101
U 1 1 6017D744
P 4025 1225
F 0 "#PWR0101" H 4025 975 50  0001 C CNN
F 1 "GND" H 4030 1052 50  0000 C CNN
F 2 "" H 4025 1225 50  0001 C CNN
F 3 "" H 4025 1225 50  0001 C CNN
	1    4025 1225
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG0101
U 1 1 6017DD16
P 4375 1300
F 0 "#FLG0101" H 4375 1375 50  0001 C CNN
F 1 "PWR_FLAG" H 4375 1473 50  0000 C CNN
F 2 "" H 4375 1300 50  0001 C CNN
F 3 "~" H 4375 1300 50  0001 C CNN
	1    4375 1300
	-1   0    0    1   
$EndComp
$Comp
L power:VCC #PWR0102
U 1 1 6017E16C
P 4375 1025
F 0 "#PWR0102" H 4375 875 50  0001 C CNN
F 1 "VCC" H 4390 1198 50  0000 C CNN
F 2 "" H 4375 1025 50  0001 C CNN
F 3 "" H 4375 1025 50  0001 C CNN
	1    4375 1025
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG0102
U 1 1 60183E41
P 4025 1050
F 0 "#FLG0102" H 4025 1125 50  0001 C CNN
F 1 "PWR_FLAG" H 4025 1223 50  0000 C CNN
F 2 "" H 4025 1050 50  0001 C CNN
F 3 "~" H 4025 1050 50  0001 C CNN
	1    4025 1050
	1    0    0    -1  
$EndComp
Wire Wire Line
	4025 1050 4025 1225
Wire Wire Line
	4375 1300 4375 1025
Wire Wire Line
	4600 2900 4600 3950
Wire Wire Line
	4600 3950 5425 3950
Wire Wire Line
	8150 3950 6825 3950
Wire Wire Line
	7125 3450 6825 3450
$Comp
L gammy:mouse_wheel U3
U 1 1 6017B333
P 7375 3450
F 0 "U3" H 7408 3815 50  0000 C CNN
F 1 "mouse_wheel" H 7408 3724 50  0000 C CNN
F 2 "gammy:mouse_wheel" H 7375 3650 50  0001 C CNN
F 3 "" H 7375 3650 50  0001 C CNN
	1    7375 3450
	-1   0    0    1   
$EndComp
Wire Wire Line
	7125 3350 6925 3350
Wire Wire Line
	6925 3350 6925 3550
Wire Wire Line
	6925 3550 6825 3550
$Comp
L gammy:SW_RESET SW3
U 1 1 6018E482
P 4825 2775
F 0 "SW3" H 4825 3120 50  0000 C CNN
F 1 "SW_RESET" H 4825 3029 50  0000 C CNN
F 2 "gammy:mouse_click" H 4825 2938 50  0000 C CNN
F 3 "" H 4825 2775 50  0000 C CNN
	1    4825 2775
	1    0    0    -1  
$EndComp
Wire Wire Line
	4250 2450 4250 2375
Wire Wire Line
	4250 2375 4500 2375
Wire Wire Line
	4525 2750 4525 2775
NoConn ~ 6825 2850
NoConn ~ 6825 3050
NoConn ~ 6825 3250
NoConn ~ 6825 3350
NoConn ~ 6825 3650
NoConn ~ 6825 3750
NoConn ~ 6825 3850
NoConn ~ 5425 2850
NoConn ~ 5425 2950
NoConn ~ 5425 3250
NoConn ~ 5425 3350
NoConn ~ 5425 3450
NoConn ~ 5425 3550
NoConn ~ 5425 3650
NoConn ~ 5425 3750
NoConn ~ 5425 3850
Wire Wire Line
	3800 2900 4600 2900
Wire Wire Line
	3800 2750 4525 2750
Wire Wire Line
	3800 2450 4250 2450
NoConn ~ 3800 2300
Wire Wire Line
	8150 2150 8150 3950
$Comp
L gammy:trackpoint_R61 U2
U 1 1 6017AAC0
P 3450 2650
F 0 "U2" H 3508 3415 50  0000 C CNN
F 1 "trackpoint_R61" H 3508 3324 50  0000 C CNN
F 2 "gammy:trackpoint_R61" H 3400 3400 50  0001 C CNN
F 3 "" H 3400 3400 50  0001 C CNN
	1    3450 2650
	1    0    0    -1  
$EndComp
Wire Wire Line
	3800 2150 8150 2150
NoConn ~ 3800 2600
$Comp
L power:GND #PWR0103
U 1 1 60195FD1
P 5100 2375
F 0 "#PWR0103" H 5100 2125 50  0001 C CNN
F 1 "GND" H 5105 2202 50  0000 C CNN
F 2 "" H 5100 2375 50  0001 C CNN
F 3 "" H 5100 2375 50  0001 C CNN
	1    5100 2375
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR0104
U 1 1 601975B9
P 5125 2775
F 0 "#PWR0104" H 5125 2525 50  0001 C CNN
F 1 "GND" H 5130 2602 50  0000 C CNN
F 2 "" H 5125 2775 50  0001 C CNN
F 3 "" H 5125 2775 50  0001 C CNN
	1    5125 2775
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR0105
U 1 1 60197A52
P 5425 3150
F 0 "#PWR0105" H 5425 2900 50  0001 C CNN
F 1 "GND" H 5430 2977 50  0000 C CNN
F 2 "" H 5425 3150 50  0001 C CNN
F 3 "" H 5425 3150 50  0001 C CNN
	1    5425 3150
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0106
U 1 1 60198033
P 5425 3050
F 0 "#PWR0106" H 5425 2800 50  0001 C CNN
F 1 "GND" H 5430 2877 50  0000 C CNN
F 2 "" H 5425 3050 50  0001 C CNN
F 3 "" H 5425 3050 50  0001 C CNN
	1    5425 3050
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0107
U 1 1 601981B5
P 3800 3050
F 0 "#PWR0107" H 3800 2800 50  0001 C CNN
F 1 "GND" H 3805 2877 50  0000 C CNN
F 2 "" H 3800 3050 50  0001 C CNN
F 3 "" H 3800 3050 50  0001 C CNN
	1    3800 3050
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR0108
U 1 1 6019C579
P 7125 3550
F 0 "#PWR0108" H 7125 3300 50  0001 C CNN
F 1 "GND" H 7130 3377 50  0000 C CNN
F 2 "" H 7125 3550 50  0001 C CNN
F 3 "" H 7125 3550 50  0001 C CNN
	1    7125 3550
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0109
U 1 1 6019CA86
P 6825 2950
F 0 "#PWR0109" H 6825 2700 50  0001 C CNN
F 1 "GND" H 6830 2777 50  0000 C CNN
F 2 "" H 6825 2950 50  0001 C CNN
F 3 "" H 6825 2950 50  0001 C CNN
	1    6825 2950
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR0110
U 1 1 6019D247
P 3800 3200
F 0 "#PWR0110" H 3800 3050 50  0001 C CNN
F 1 "VCC" H 3815 3373 50  0000 C CNN
F 2 "" H 3800 3200 50  0001 C CNN
F 3 "" H 3800 3200 50  0001 C CNN
	1    3800 3200
	0    1    1    0   
$EndComp
$Comp
L power:VCC #PWR0111
U 1 1 6019DC5A
P 6825 3150
F 0 "#PWR0111" H 6825 3000 50  0001 C CNN
F 1 "VCC" H 6840 3323 50  0000 C CNN
F 2 "" H 6825 3150 50  0001 C CNN
F 3 "" H 6825 3150 50  0001 C CNN
	1    6825 3150
	0    1    1    0   
$EndComp
$EndSCHEMATC
