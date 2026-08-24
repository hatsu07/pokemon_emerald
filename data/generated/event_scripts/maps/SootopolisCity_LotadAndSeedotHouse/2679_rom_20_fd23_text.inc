	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:106 SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot
	.globl gText_Rom_20F9A0
gText_Rom_20F9A0: @ 0x0820F9A0
	.string "きみ タネボーって ポケモン しってる?\nルネでは めったに みられないん だけどね\pわし おおきな タネボーが\nめちゃめちゃ だいすき なのよ!\pおとうとは ハスボーの ほうが\nおおきいって いうんだけど\pタネボーの ほうが\nおおきいに きまってる よね!\pん? きみ タネボー もってるの?\nちょ ちょ ちょっと……\lおじさんに みせて おくれ!{EOS}"
	.if (. - gText_Rom_20F9A0) > 0xb0
	.error "gText_Rom_20F9A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F9A0) < 0xb0
	.space 0xb0 - (. - gText_Rom_20F9A0)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:109 SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad
	.globl gText_Rom_20FA50
gText_Rom_20FA50: @ 0x0820FA50
	.string "{STR_VAR_2}cm!!\nおお! こいつは でかい!\pおとうとが みた でかい ハスボーに\nまけない おおきさ かも!\pみせて くれて ありがとう\nおれいに これを あげるよ!{EOS}"
	.if (. - gText_Rom_20FA50) > 0x53
	.error "gText_Rom_20FA50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FA50) < 0x53
	.space 0x53 - (. - gText_Rom_20FA50)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:113 SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion1 (+1 aliases)
	.globl gText_Rom_20FAA3
gText_Rom_20FAA3: @ 0x0820FAA3
	.string "{PLAYER}は\nきずぐすりを もらった!{EOS}"
	.if (. - gText_Rom_20FAA3) > 0x11
	.error "gText_Rom_20FAA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FAA3) < 0x11
	.space 0x11 - (. - gText_Rom_20FAA3)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:116 SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1 (+1 aliases)
	.globl gText_Rom_20FAB4
gText_Rom_20FAB4: @ 0x0820FAB4
	.string "ありゃ?\nきみ もちもの いっぱいだね{EOS}"
	.if (. - gText_Rom_20FAB4) > 0x14
	.error "gText_Rom_20FAB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FAB4) < 0x14
	.space 0x14 - (. - gText_Rom_20FAB4)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:119 SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot
	.globl gText_Rom_20FAC8
gText_Rom_20FAC8: @ 0x0820FAC8
	.string "{STR_VAR_2}cmか……\pううむ わしは これより おおきい\nタネボーを みたこと あるな……{EOS}"
	.if (. - gText_Rom_20FAC8) > 0x2b
	.error "gText_Rom_20FAC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FAC8) < 0x2b
	.space 0x2b - (. - gText_Rom_20FAC8)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:122 SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot
	.globl gText_Rom_20FAF3
gText_Rom_20FAF3: @ 0x0820FAF3
	.string "おお こいつは なかなか…… って\nこれ タネボーじゃ ないよ!{EOS}"
	.if (. - gText_Rom_20FAF3) > 0x21
	.error "gText_Rom_20FAF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FAF3) < 0x21
	.space 0x21 - (. - gText_Rom_20FAF3)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:125 SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot
	.globl gText_Rom_20FB14
gText_Rom_20FB14: @ 0x0820FB14
	.string "おおきい タネボー もってないの?\nそれは ざんねん……\pこんど おおきい タネボー みせてね{EOS}"
	.if (. - gText_Rom_20FB14) > 0x30
	.error "gText_Rom_20FB14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FB14) < 0x30
	.space 0x30 - (. - gText_Rom_20FB14)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:128 SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory
	.globl gText_Rom_20FB44
gText_Rom_20FB44: @ 0x0820FB44
	.string "しじょう さいだいの タネボー!\n{STR_VAR_2}の {STR_VAR_3}cmのやつ!\pハスボーより おおきい タネボー\nいつでも ぼしゅうちゅう!{EOS}"
	.if (. - gText_Rom_20FB44) > 0x3d
	.error "gText_Rom_20FB44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FB44) < 0x3d
	.space 0x3d - (. - gText_Rom_20FB44)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:131 SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad
	.globl gText_Rom_20FB81
gText_Rom_20FB81: @ 0x0820FB81
	.string "きみ ハスボーって ポケモン しってる?\nルネでは めったに みられないん だけどね\pわし おおきな ハスボーが\nめちゃめちゃ だいすき なのよ!\pアニキは タネボーの ほうが\nおおきいって いうんだけど\pハスボーの ほうが\nおおきいに きまってる よね!\pん? きみ ハスボー もってるの?\nちょ ちょ ちょっと……\lおじさんに みせて おくれ!{EOS}"
	.if (. - gText_Rom_20FB81) > 0xaf
	.error "gText_Rom_20FB81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FB81) < 0xaf
	.space 0xaf - (. - gText_Rom_20FB81)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:134 SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot
	.globl gText_Rom_20FC30
gText_Rom_20FC30: @ 0x0820FC30
	.string "{STR_VAR_2}cm!!\nおお! こいつは でかい!\pあにきが みた でかい タネボーに\nまけない おおきさ かも!\pみせて くれて ありがとう\nおれいに これを あげるよ!{EOS}"
	.if (. - gText_Rom_20FC30) > 0x52
	.error "gText_Rom_20FC30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FC30) < 0x52
	.space 0x52 - (. - gText_Rom_20FC30)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:113 SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion1 (+1 aliases)
	.globl gText_Rom_20FC82
gText_Rom_20FC82: @ 0x0820FC82
	.string "{PLAYER}は\nきずぐすりを もらった!{EOS}"
	.if (. - gText_Rom_20FC82) > 0x11
	.error "gText_Rom_20FC82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FC82) < 0x11
	.space 0x11 - (. - gText_Rom_20FC82)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:116 SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1 (+1 aliases)
	.globl gText_Rom_20FC93
gText_Rom_20FC93: @ 0x0820FC93
	.string "ありゃ?\nきみ もちもの いっぱいだね{EOS}"
	.if (. - gText_Rom_20FC93) > 0x14
	.error "gText_Rom_20FC93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FC93) < 0x14
	.space 0x14 - (. - gText_Rom_20FC93)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:144 SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad
	.globl gText_Rom_20FCA7
gText_Rom_20FCA7: @ 0x0820FCA7
	.string "{STR_VAR_2}cmか……\pううむ わしは これより おおきい\nハスボーを みたこと あるな……{EOS}"
	.if (. - gText_Rom_20FCA7) > 0x2b
	.error "gText_Rom_20FCA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FCA7) < 0x2b
	.space 0x2b - (. - gText_Rom_20FCA7)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:147 SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad
	.globl gText_Rom_20FCD2
gText_Rom_20FCD2: @ 0x0820FCD2
	.string "おお こいつは なかなか…… って\nこれ ハスボーじゃ ないよ!{EOS}"
	.if (. - gText_Rom_20FCD2) > 0x21
	.error "gText_Rom_20FCD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FCD2) < 0x21
	.space 0x21 - (. - gText_Rom_20FCD2)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:150 SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad
	.globl gText_Rom_20FCF3
gText_Rom_20FCF3: @ 0x0820FCF3
	.string "おおきい ハスボー もってないの?\nそれは ざんねん……\pこんど おおきい ハスボー みせてね{EOS}"
	.if (. - gText_Rom_20FCF3) > 0x30
	.error "gText_Rom_20FCF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FCF3) < 0x30
	.space 0x30 - (. - gText_Rom_20FCF3)
	.endif
	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:153 SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory
	.globl gText_Rom_20FD23
gText_Rom_20FD23: @ 0x0820FD23
	.string "しじょう さいだいの ハスボー!\n{STR_VAR_2}の {STR_VAR_3}cmのやつ!\pタネボーより おおきい ハスボー\nいつでも ぼしゅうちゅう!{EOS}"
	.if (. - gText_Rom_20FD23) > 0x3d
	.error "gText_Rom_20FD23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FD23) < 0x3d
	.space 0x3d - (. - gText_Rom_20FD23)
	.endif
	@ analyzed canonical ROM range 0x0820FD60-0x0820FF52
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_SootopolisCity_MysteryEventsHouse_1F_OnTransition_OnFrame: @ 0x0820FD60
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820FD6B
	.byte 0x02
	.4byte gMapScriptConditionTable_SootopolisCity_MysteryEventsHouse_1F_OnFrame
	.byte 0
EventScript_JP_0820FD6B: @ 0x0820FD6B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0010
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0820FD8A
	compare_var_to_value 0x40C0, 0x0000
	call_if 0x05, EventScript_JP_0820FD9E
	end
EventScript_JP_0820FD8A: @ 0x0820FD8A
	setvar 0x4001, 0x0001
	setobjectxyperm 0x0001, 0x0003, 0x0002
	setobjectmovementtype 0x0001, 0x08
	setmaplayoutindex 0x01B9
	return
EventScript_JP_0820FD9E: @ 0x0820FD9E
	setobjectxyperm 0x0001, 0x0002, 0x0002
	setobjectmovementtype 0x0001, 0x0A
	return
gMapScriptConditionTable_SootopolisCity_MysteryEventsHouse_1F_OnFrame: @ 0x0820FDAA
	@ conditional map script table
	.2byte 0x40C0, 0x0001
	.4byte EventScript_JP_0820FDC4
	.2byte 0x40C0, 0x0002
	.4byte EventScript_JP_0820FDC4
	.2byte 0x40C0, 0x0003
	.4byte EventScript_JP_0820FDC4
	.2byte 0
EventScript_JP_0820FDC4: @ 0x0820FDC4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x00FF, SootopolisCity_LotadAndSeedotHouse_Movement_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, SootopolisCity_LotadAndSeedotHouse_Movement_WalkRight_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	moveobjectoffscreen 0x0001
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x40C0, 0x0001
	call_if 0x01, EventScript_JP_0820FE11
	compare_var_to_value 0x40C0, 0x0002
	call_if 0x01, EventScript_JP_0820FE1A
	compare_var_to_value 0x40C0, 0x0003
	call_if 0x01, EventScript_JP_0820FE23
	@ event command: special
	special LoadPlayerParty
	setvar 0x40C0, 0x0000
	releaseall
	end
EventScript_JP_0820FE11: @ 0x0820FE11
	loadword 0x00, gText_Rom_2100DA
	callstd 0x04
	return
EventScript_JP_0820FE1A: @ 0x0820FE1A
	loadword 0x00, gText_Rom_210105
	callstd 0x04
	return
EventScript_JP_0820FE23: @ 0x0820FE23
	loadword 0x00, gText_Rom_2100AA
	callstd 0x04
	return
SootopolisCity_LotadAndSeedotHouse_Movement_WalkDown: @ 0x0820FE2C
	@ object movement sequence
	walk_down
	step_end
SootopolisCity_LotadAndSeedotHouse_Movement_WalkRight_WalkInPlaceFastestDown: @ 0x0820FE2E
	@ object movement sequence
	walk_right
	walk_in_place_fastest_down
	step_end
.globl EventScript_JP_0820FE31
EventScript_JP_0820FE31: @ 0x0820FE31
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8004, 0x0010
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820FE5B
	compare_var_to_value 0x4001, 0x0001
	goto_if 0x01, EventScript_JP_0820FE65
	loadword 0x00, gText_Rom_20FF53
	callstd 0x04
	release
	end
EventScript_JP_0820FE5B: @ 0x0820FE5B
	loadword 0x00, gText_Rom_20FF53
	callstd 0x04
	release
	end
EventScript_JP_0820FE65: @ 0x0820FE65
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special SavePlayerParty
	@ event command: special
	special BufferEReaderTrainerName
	loadword 0x00, gText_Rom_20FFC6
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820FEEF
	call EventScript_JP_0820FEFC
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820FEEF
	loadword 0x00, gText_Rom_21005E
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820FEEF
	@ event command: special
	special LoadPlayerParty
	call 0x082423E9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820FEEF
	@ event command: special
	special SavePlayerParty
	@ event command: special
	special ReducePlayerPartyToSelectedMons
	loadword 0x00, gText_Rom_210081
	callstd 0x04
	closemessage
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_0820FF0B
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_0820FF1D
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_0820FF2F
	@ event command: warp
	warp MAP_ID_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_B1F, 0xFF, 0x0003, 0x0001
	.byte 0x27, 0x6C, 0x02
EventScript_JP_0820FEEF: @ 0x0820FEEF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special LoadPlayerParty
	loadword 0x00, gText_Rom_20FFFA
	callstd 0x04
	release
	end
EventScript_JP_0820FEFC: @ 0x0820FEFC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_21001A
	callstd 0x04
	fadescreen 0x01
	@ event command: special
	special ChooseHalfPartyForBattle
	waitstate
	return
EventScript_JP_0820FF0B: @ 0x0820FF0B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, SootopolisCity_LotadAndSeedotHouse_Movement_WalkLeft_WalkInPlaceFastestRight
	@ event command: applymovement
	applymovement 0x00FF, SootopolisCity_LotadAndSeedotHouse_Movement_Delay16_WalkUpX2
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_0820FF1D: @ 0x0820FF1D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, SootopolisCity_LotadAndSeedotHouse_Movement_WalkRight_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x00FF, SootopolisCity_LotadAndSeedotHouse_Movement_Delay16_WalkRight_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_0820FF2F: @ 0x0820FF2F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, SootopolisCity_LotadAndSeedotHouse_Movement_WalkLeft_WalkInPlaceFastestRight
	@ event command: applymovement
	applymovement 0x00FF, SootopolisCity_LotadAndSeedotHouse_Movement_Delay16_WalkLeft_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
SootopolisCity_LotadAndSeedotHouse_Movement_Delay16_WalkUpX2: @ 0x0820FF41
	@ object movement sequence
	delay_16
	walk_up
	walk_up
	step_end
SootopolisCity_LotadAndSeedotHouse_Movement_Delay16_WalkRight_WalkUp: @ 0x0820FF45
	@ object movement sequence
	delay_16
	walk_right
	walk_up
	step_end
SootopolisCity_LotadAndSeedotHouse_Movement_Delay16_WalkLeft_WalkUp: @ 0x0820FF49
	@ object movement sequence
	delay_16
	walk_left
	walk_up
	step_end
SootopolisCity_LotadAndSeedotHouse_Movement_WalkLeft_WalkInPlaceFastestRight: @ 0x0820FF4D
	@ object movement sequence
	walk_left
	walk_in_place_fastest_right
	step_end
SootopolisCity_LotadAndSeedotHouse_Movement_WalkRight_WalkInPlaceFastestLeft: @ 0x0820FF50
	@ object movement sequence
	walk_right
	walk_in_place_fastest_left
	step_end
