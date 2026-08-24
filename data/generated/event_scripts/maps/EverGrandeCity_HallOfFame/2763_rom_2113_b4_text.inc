	@ data/maps/EverGrandeCity_HallOfFame/scripts.inc:82 EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions
	.globl gText_Rom_211369
gText_Rom_211369: @ 0x08211369
	.string "ミクリ『ここは……\pはげしい たたかいを かちぬいた\nポケモンを きろくする ばしょ\pリーグ チャンピオンの\nえいこうを たたえる ための へやさ!{EOS}"
	.if (. - gText_Rom_211369) > 0x4b
	.error "gText_Rom_211369 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211369) < 0x4b
	.space 0x4b - (. - gText_Rom_211369)
	.endif
	@ data/maps/EverGrandeCity_HallOfFame/scripts.inc:85 EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames
	.globl gText_Rom_2113B4
gText_Rom_2113B4: @ 0x082113B4
	.string "ミクリ『さあ! ポケモン リーグを\nかちぬいた きみの なまえと\pともに たたかった きみの パートナーを\nこの マシンに きろく するのだ!{EOS}"
	.if (. - gText_Rom_2113B4) > 0x48
	.error "gText_Rom_2113B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2113B4) < 0x48
	.space 0x48 - (. - gText_Rom_2113B4)
	.endif
	@ analyzed canonical ROM range 0x082113FC-0x082114A1
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_EverGrandeCity_PokemonCenter_1F_OnTransition_OnResume: @ 0x082113FC
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08211407
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_08211407: @ 0x08211407
	setrespawn 0x000B
	checkflag 0x01CF
	call_if 0x00, EventScript_JP_08211414
	end
EventScript_JP_08211414: @ 0x08211414
	checkflag 0x086C
	goto_if 0x00, 0x08244178
	clearflag 0x0319
	return
.globl EventScript_JP_08211421
EventScript_JP_08211421: @ 0x08211421
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_0821142F
EventScript_JP_0821142F: @ 0x0821142F
	loadword 0x00, gText_Rom_2114A2
	callstd 0x02
	end
.globl EventScript_JP_08211438
EventScript_JP_08211438: @ 0x08211438
	loadword 0x00, gText_Rom_2114D6
	callstd 0x02
	end
.globl EventScript_JP_08211441
EventScript_JP_08211441: @ 0x08211441
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	loadword 0x00, gText_Rom_211531
	callstd 0x04
	closemessage
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_0821147E
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_08211489
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_08211489
	addvar 0x40D1, 0x0001
	setflag 0x01CF
	playse 0x0009
	waitse
	@ event command: removeobject
	removeobject 0x0004
	release
	end
EventScript_JP_0821147E: @ 0x0821147E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0004, EverGrandeCity_HallOfFame_Movement_WalkLeft_WalkDownX2_WalkLeft_WalkDownX2
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08211489: @ 0x08211489
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0004, EverGrandeCity_HallOfFame_Movement_WalkDownX2_WalkLeftX2_WalkDownX2
	@ event command: waitmovement
	waitmovement 0x0000
	return
EverGrandeCity_HallOfFame_Movement_WalkLeft_WalkDownX2_WalkLeft_WalkDownX2: @ 0x08211494
	@ object movement sequence
	walk_left
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	step_end
EverGrandeCity_HallOfFame_Movement_WalkDownX2_WalkLeftX2_WalkDownX2: @ 0x0821149B
	@ object movement sequence
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	step_end
