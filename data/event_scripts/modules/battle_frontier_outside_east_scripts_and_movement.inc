
	.globl EventScript_JP_08222A99
	@ ANALYSIS: SOURCE_RANGE offset=0x222A99, size=0x2B
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_08222A99: @ 0x08222A99
	lock
	faceplayer
	@ event command: special
	special DoWateringBerryTreeAnim
	waitstate
	waitse
	playse 0x010D
	@ event command: applymovement
	applymovement 0x000E, BattleFrontier_BattleTowerBattleRoom_Movement_FaceRight_Delay8_FaceDown_Delay8_Then15Actions_FaceLeft_Delay8_FaceDown
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, FieldScriptText_243DC6
	callstd 0x04
	waitse
	playmoncry 0x00B9, 0x0002
	delay 0x0028
	waitmoncry
	setvar 0x800F, 0x000E

	setwildbattle SPECIES_SUDOWOODO, 40, ITEM_NONE

	@ ANALYSIS: SOURCE_RANGE offset=0x222ACA, size=0xE3
	@ semantic recovery: script_data; byte-verified against linked ROM
	setflag 0x08C1
	dowildbattle
	clearflag 0x08C1
	specialvar_ 0x800D, 0x00B4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08222AFC
	compare_var_to_value 0x800D, 0x0004
	goto_if 0x01, EventScript_JP_08222AFC
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_08222AFC
	setflag 0x01C6
	release
	end
EventScript_JP_08222AFC: @ 0x08222AFC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setflag 0x01C6
	goto 0x08244197
	.byte 0x02
BattleFrontier_BattleTowerBattleRoom_Movement_FaceRight_Delay8_FaceDown_Delay8_Then15Actions_FaceLeft_Delay8_FaceDown: @ 0x08222B05
	@ object movement sequence
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	step_end
.globl EventScript_JP_08222B15
EventScript_JP_08222B15: @ 0x08222B15
	loadword 0x00, BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena
	callstd 0x02
	end
.globl EventScript_JP_08222B1E
EventScript_JP_08222B1E: @ 0x08222B1E
	loadword 0x00, BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere
	callstd 0x02
	end
.globl EventScript_JP_08222B27
EventScript_JP_08222B27: @ 0x08222B27
	loadword 0x00, BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid
	callstd 0x02
	end
.globl EventScript_JP_08222B30
EventScript_JP_08222B30: @ 0x08222B30
	loadword 0x00, BattleFrontier_OutsideEast_Text_GotWipedOut
	callstd 0x02
	end
.globl EventScript_JP_08222B39
EventScript_JP_08222B39: @ 0x08222B39
	loadword 0x00, BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower
	callstd 0x02
	end
.globl EventScript_JP_08222B42
EventScript_JP_08222B42: @ 0x08222B42
	loadword 0x00, BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll
	callstd 0x02
	end
.globl EventScript_JP_08222B4B
EventScript_JP_08222B4B: @ 0x08222B4B
	loadword 0x00, BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere
	callstd 0x02
	end
.globl EventScript_JP_08222B54
EventScript_JP_08222B54: @ 0x08222B54
	lock
	loadword 0x00, BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou
	callstd 0x04
	release
	end
.globl EventScript_JP_08222B5F
EventScript_JP_08222B5F: @ 0x08222B5F
	lock
	loadword 0x00, BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome
	callstd 0x04
	release
	end
.globl EventScript_JP_08222B6A
EventScript_JP_08222B6A: @ 0x08222B6A
	loadword 0x00, FieldScriptText_222C23
	callstd 0x03
	end
.globl EventScript_JP_08222B73
EventScript_JP_08222B73: @ 0x08222B73
	loadword 0x00, FieldScriptText_222C46
	callstd 0x03
	end
.globl EventScript_JP_08222B7C
EventScript_JP_08222B7C: @ 0x08222B7C
	loadword 0x00, BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers
	callstd 0x02
	end
.globl EventScript_JP_08222B85
EventScript_JP_08222B85: @ 0x08222B85
	lock
	faceplayer
	checkflag 0x01C6
	goto_if 0x01, EventScript_JP_08222B9A
	loadword 0x00, BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle
	callstd 0x04
	release
	end
EventScript_JP_08222B9A: @ 0x08222B9A
	loadword 0x00, BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere
	callstd 0x04
	release
	end
.globl EventScript_JP_08222BA4
EventScript_JP_08222BA4: @ 0x08222BA4
	loadword 0x00, BattleFrontier_OutsideEast_Text_StickyMonWithLongTail
	callstd 0x02
	end

