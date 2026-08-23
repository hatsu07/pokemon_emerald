	.globl BattlePyramid_WarpToNextFloor
	@ analyzed canonical ROM range 0x0822D6B1-0x0822D717
	@ semantic recovery: script_data; byte-verified against linked ROM
BattlePyramid_WarpToNextFloor: @ 0x0822D6B1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call 0x08221FB3
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	addvar 0x800D, 0x0001
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	copyvar 0x8006, 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0007
	goto_if 0x01, BattlePyramid_WarpToTop
	setvar 0x8004, 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x800D, 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x1A
	.byte 0xFF
	.2byte 0x0001
	.2byte 0x0001
	.byte 0x27, 0x02
BattlePyramid_WarpToTop: @ 0x0822D70E
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x1B
	.byte 0xFF
	.2byte 0x0011
	.2byte 0x0011
	.byte 0x27, 0x02
	.globl BattlePyramid_TrainerBattle
	@ analyzed canonical ROM range 0x0822D718-0x0822D732
	@ semantic recovery: script_data; byte-verified against linked ROM
.globl BattlePyramid_TrainerBattle
BattlePyramid_TrainerBattle: @ 0x0822D718
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x09
	.2byte 0x01EE
	.2byte 0x0000
	.4byte gText_Rom_22D756 @ gText_Rom_22D756
	.4byte gText_Rom_22D756 @ gText_Rom_22D756
	setvar 0x8004, 0x000A
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end
	.globl BattlePyramid_FindItemBall
	@ analyzed canonical ROM range 0x0822D733-0x0822D750
	@ semantic recovery: script_data; byte-verified against linked ROM
.globl BattlePyramid_FindItemBall
BattlePyramid_FindItemBall: @ 0x0822D733
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	callstd 0x01
	compare_var_to_value 0x8007, 0x0000
	goto_if 0x01, BattlePyramid_FindItemBallEnd
	setvar 0x8004, 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
BattlePyramid_FindItemBallEnd: @ 0x0822D750
	end
	.globl BattlePyramid_Retire
	@ analyzed canonical ROM range 0x0822D751-0x0822D755
	@ semantic recovery: script_data; byte-verified against linked ROM
BattlePyramid_Retire: @ 0x0822D751
	goto EventScript_JP_0822D60B
