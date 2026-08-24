	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:319 RivalsHouse_1F_Text_OhYoureTheNewNeighbor
	.globl gText_Rom_1F0678
gText_Rom_1F0678: @ 0x081F0678
	.string "えーと どなた かしら?\p…… …… ……\n…… …… ……\pそうか あなたが おとなりに\nひっこしてきた {PLAYER}{KUN} ね!\pうちにも あなたと おなじ としごろの\n{STR_VAR_1}が いるのよ!\p「あたらしい おともだちが できる!」\nなんて いって\lとっても たのしみに してたの!{EOS}"
	.if (. - gText_Rom_1F0678) > 0x89
	.error "gText_Rom_1F0678 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0678) < 0x89
	.space 0x89 - (. - gText_Rom_1F0678)
	.endif
	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:331 RivalsHouse_1F_Text_LikeChildLikeFather
	.globl gText_Rom_1F0701
gText_Rom_1F0701: @ 0x081F0701
	.string "おとうさんも あのこに まけず\nポケモンに むちゅう なのよ\pけんきゅうじょに いなければ\nきっと どこかの くさむらにでも\lもぐりに いってるんじゃ ないかしら……{EOS}"
	.if (. - gText_Rom_1F0701) > 0x54
	.error "gText_Rom_1F0701 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0701) < 0x54
	.space 0x54 - (. - gText_Rom_1F0701)
	.endif
	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:338 RivalsHouse_1F_Text_TooBusyToNoticeVisit
	.globl gText_Rom_1F0755
gText_Rom_1F0755: @ 0x081F0755
	.string "{RIVAL}ったら せっかく {PLAYER}{KUN}が\nごあいさつに きてくれたって いうのに\lポケモンに むちゅう みたいね{EOS}"
	.if (. - gText_Rom_1F0755) > 0x35
	.error "gText_Rom_1F0755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0755) < 0x35
	.space 0x35 - (. - gText_Rom_1F0755)
	.endif
	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:343 RivalsHouse_1F_Text_WentOutToRoute103
	.globl gText_Rom_1F078A
gText_Rom_1F078A: @ 0x081F078A
	.string "あら {RIVAL} だったら\nついさっき 103ばんどうろの ほうへ\lでかけて いったわよ!\pまったく おとうさんに にて\nおうちで じっとして いられないのよね{EOS}"
	.if (. - gText_Rom_1F078A) > 0x4e
	.error "gText_Rom_1F078A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F078A) < 0x4e
	.space 0x4e - (. - gText_Rom_1F078A)
	.endif
	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:350 RivalsHouse_1F_Text_ShouldGoHomeEverySoOften
	.globl gText_Rom_1F07D8
gText_Rom_1F07D8: @ 0x081F07D8
	.string "ポケモンと いっしょに\nぼうけん するのも いいけど\pたまには おうちに かえって おかあさんに\nげんきな かおを みせてあげてね!\pこころの なかでは きっと\n{PLAYER}{KUN}の こと\lしんぱい してる はずだから……{EOS}"
	.if (. - gText_Rom_1F07D8) > 0x6b
	.error "gText_Rom_1F07D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F07D8) < 0x6b
	.space 0x6b - (. - gText_Rom_1F07D8)
	.endif
	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:359 RivalsHouse_1F_Text_MayWhoAreYou
	.globl gText_Rom_1F0843
gText_Rom_1F0843: @ 0x081F0843
	.string "あら? あなた……だれ?\p…… …… ……\n…… …… ……\pあなたが {PLAYER}{KUN}……\nそうか きょう ひっこし だったんだ……\pあ あたし ハルカ!\nよ よろしくね\pあたし……\nせかいじゅうの ポケモンと\lともだちに なるのが ゆめ なの……\pで でね\nおとうさん…… オダマキはかせ から\l{PLAYER}{KUN}の おはなし きいて\pあたし {PLAYER}{KUN} とも\nおともだちに なれたらなあ……\lなんて おもってたの……\pあっ あたしったら {PLAYER}{KUN}と\nはじめて おはなし してるのに\lなに いってんだろ……\pてへへ……\pあっ いけない!\pあたし おとうさんの おてつだいで\nやせいの ポケモン\lつかまえに いくところ だったんだ!\pでかける したくを するから\n{PLAYER}{KUN} また あとでね!{EOS}"
	.if (. - gText_Rom_1F0843) > 0x151
	.error "gText_Rom_1F0843 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0843) < 0x151
	.space 0x151 - (. - gText_Rom_1F0843)
	.endif
	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:387 RivalsHouse_1F_Text_BrendanWhoAreYou (+1 aliases)
	.globl gText_Rom_1F0994
gText_Rom_1F0994: @ 0x081F0994
	.string "おまえ……\pだれ?\pあっ おまえが となりに\nひっこして きた {PLAYER}か……\pふうん\nおんなのこ だったんだ……\pとうさん…… オダマキはかせ から\nとなりに ひっこして くるのは\lジムリーダーの こども って きいてたから\lかってに おとこ だと おもってたよ\pオレは ユウキ\nまあ おとなりさんに なったことだし\lこれから よろしくな\pおや? {PLAYER}は\nポケモン もってないのか?\pよかったら オレが\nつかまえてきて やろうか?\pって わすれてた……\pオレ とうさんの てつだいで\nやせいの ポケモン\lつかまえに いく ところ だったんだ\pでかける したくを するから\n{PLAYER} また こんどな!{EOS}"
	.if (. - gText_Rom_1F0994) > 0x129
	.error "gText_Rom_1F0994 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0994) < 0x129
	.space 0x129 - (. - gText_Rom_1F0994)
	.endif
	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:412 RivalsHouse_1F_Text_DoYouHavePokemon
	.globl gText_Rom_1F0ABD
gText_Rom_1F0ABD: @ 0x081F0ABD
	.string "わーい おとなりさんだ!\p{STR_VAR_1}は もう\nじぶんの ポケモン もってるの?{EOS}"
	.if (. - gText_Rom_1F0ABD) > 0x25
	.error "gText_Rom_1F0ABD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0ABD) < 0x25
	.space 0x25 - (. - gText_Rom_1F0ABD)
	.endif
	@ analyzed canonical ROM range 0x081F0AE2-0x081F0DE7
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LittlerootTown_MaysHouse_2F_OnTransition_OnWarpIntoMap: @ 0x081F0AE2
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F0AED
	.byte 0x04
	.4byte gMapScriptConditionTable_LittlerootTown_MaysHouse_2F_OnWarpIntoMap
	.byte 0
EventScript_JP_081F0AED: @ 0x081F0AED
	compare_var_to_value 0x408D, 0x0002
	call_if 0x00, EventScript_JP_081F0B56
	compare_var_to_value 0x408D, 0x0003
	call_if 0x04, EventScript_JP_081F0B19
	compare_var_to_value 0x4092, 0x0004
	call_if 0x01, EventScript_JP_08257EE8
	call 0x08245D90
	setvar 0x4089, 0x0000
	end
EventScript_JP_081F0B19: @ 0x081F0B19
	checkflag 0x0124
	goto_if 0x01, EventScript_JP_081F0B32
	compare_var_to_value 0x4084, 0x0002
	goto_if 0x04, EventScript_JP_081F0B55
	goto EventScript_JP_081F0B32
EventScript_JP_081F0B32: @ 0x081F0B32
	checkplayergender
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F0B55
	compare_var_to_value 0x40D3, 0x0002
	goto_if 0x04, EventScript_JP_081F0B55
	setobjectxyperm 0x0001, 0x0008, 0x0002
	setobjectmovementtype 0x0001, 0x07
	return
EventScript_JP_081F0B55: @ 0x081F0B55
	return
EventScript_JP_081F0B56: @ 0x081F0B56
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F0B63
	return
EventScript_JP_081F0B63: @ 0x081F0B63
	setvar 0x408D, 0x0002
	return
gMapScriptConditionTable_LittlerootTown_MaysHouse_2F_OnWarpIntoMap: @ 0x081F0B69
	@ conditional map script table
	.2byte 0x4089, 0x0000
	.4byte EventScript_JP_081F0B73
	.2byte 0
EventScript_JP_081F0B73: @ 0x081F0B73
	checkplayergender
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08245DBB
	end
.globl EventScript_JP_081F0B80
EventScript_JP_081F0B80: @ 0x081F0B80
	lockall
	compare_var_to_value 0x408D, 0x0002
	goto_if 0x01, EventScript_JP_081F0B96
	loadword 0x00, gText_Rom_1F10B0
	callstd 0x04
	releaseall
	end
EventScript_JP_081F0B96: @ 0x081F0B96
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	delay 0x000A
	@ event command: addobject
	addobject 0x0001
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkDownX2_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x000A
	playbgm 0x019F, 0x01
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081F0C06
	compare_var_to_value 0x800C, 0x0001
	call_if 0x01, EventScript_JP_081F0C35
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_081F0C64
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_081F0C8C
	setvar 0x408D, 0x0003
	setflag 0x0332
	clearflag 0x02D2
	setvar 0x4050, 0x0001
	savebgm 0x0000
	fadedefaultbgm
	releaseall
	end
EventScript_JP_081F0C06: @ 0x081F0C06
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkRightX2_WalkDownX2_WalkRight
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F0DE8
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X4_WalkInPlaceFastestRight
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkUpX3_WalkInPlaceFastestRight_WalkRightX4_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F0C35: @ 0x081F0C35
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkRightX3
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F0DE8
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X2_WalkInPlaceFastestRight_1
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkUp_WalkInPlaceFastestRight_WalkRightX4_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F0C64: @ 0x081F0C64
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkRightX5_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F0DE8
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkUp_WalkRightX2_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F0C8C: @ 0x081F0C8C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkRightX2_WalkDown_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F0DE8
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X2_WalkInPlaceFastestRight_2
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_1F_Movement_WalkUpX2_WalkRightX5_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
LittlerootTown_MaysHouse_1F_Movement_WalkDownX2_WalkInPlaceFastestRight: @ 0x081F0CBB
	@ object movement sequence
	walk_down
	walk_down
	walk_in_place_fastest_right
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkRightX2_WalkDownX2_WalkRight: @ 0x081F0CBF
	@ object movement sequence
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkUpX3_WalkInPlaceFastestRight_WalkRightX4_WalkInPlaceFastestUp: @ 0x081F0CC5
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
LittlerootTown_MaysHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X4_WalkInPlaceFastestRight: @ 0x081F0CCF
	@ object movement sequence
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_right
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkRightX3: @ 0x081F0CD7
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkUp_WalkInPlaceFastestRight_WalkRightX4_WalkInPlaceFastestUp: @ 0x081F0CDB
	@ object movement sequence
	walk_up
	walk_in_place_fastest_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
LittlerootTown_MaysHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X2_WalkInPlaceFastestRight_1: @ 0x081F0CE3
	@ object movement sequence
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_right
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkRightX5_WalkInPlaceFastestDown: @ 0x081F0CE9
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkUp_WalkRightX2_WalkInPlaceFastestUp: @ 0x081F0CF0
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
	.globl LittlerootTown_MaysHouse_1F_Movement_Delay16X2_WalkInPlaceFastestRight
LittlerootTown_MaysHouse_1F_Movement_Delay16X2_WalkInPlaceFastestRight: @ 0x081F0CF5
	.byte 0x14, 0x14, 0x28, 0xFE
LittlerootTown_MaysHouse_1F_Movement_WalkRightX2_WalkDown_WalkInPlaceFastestRight: @ 0x081F0CF9
	@ object movement sequence
	walk_right
	walk_right
	walk_down
	walk_in_place_fastest_right
	step_end
LittlerootTown_MaysHouse_1F_Movement_WalkUpX2_WalkRightX5_WalkInPlaceFastestUp: @ 0x081F0CFE
	@ object movement sequence
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
LittlerootTown_MaysHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X2_WalkInPlaceFastestRight_2: @ 0x081F0D07
	@ object movement sequence
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_right
	step_end
.globl EventScript_JP_081F0D0D
EventScript_JP_081F0D0D: @ 0x081F0D0D
	lockall
	checkflag 0x0124
	goto_if 0x01, EventScript_JP_081F0D43
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F0D2F
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F0D39
	end
EventScript_JP_081F0D2F: @ 0x081F0D2F
	loadword 0x00, gText_Rom_1F0F40
	callstd 0x04
	releaseall
	end
EventScript_JP_081F0D39: @ 0x081F0D39
	loadword 0x00, gText_Rom_1F108B
	callstd 0x04
	releaseall
	end
EventScript_JP_081F0D43: @ 0x081F0D43
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081F0D69
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081F0D7B
	setflag 0x0125
	releaseall
	end
EventScript_JP_081F0D69: @ 0x081F0D69
	checkflag 0x0125
	goto_if 0x01, EventScript_JP_081F0D8D
	loadword 0x00, gText_Rom_1F10CD
	callstd 0x04
	return
EventScript_JP_081F0D7B: @ 0x081F0D7B
	checkflag 0x0125
	goto_if 0x01, EventScript_JP_081F0D96
	loadword 0x00, gText_Rom_1F117C
	callstd 0x04
	return
EventScript_JP_081F0D8D: @ 0x081F0D8D
	loadword 0x00, gText_Rom_1F1142
	callstd 0x04
	return
EventScript_JP_081F0D96: @ 0x081F0D96
	loadword 0x00, gText_Rom_1F11E3
	callstd 0x04
	return
.globl EventScript_JP_081F0D9F
EventScript_JP_081F0D9F: @ 0x081F0D9F
	lockall
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F0DB8
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F0DC2
	end
EventScript_JP_081F0DB8: @ 0x081F0DB8
	loadword 0x00, gText_Rom_243AA2
	callstd 0x04
	releaseall
	end
EventScript_JP_081F0DC2: @ 0x081F0DC2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	@ event command: special
	special DoLotteryCornerComputerEffect
	playse 0x0004
	loadword 0x00, gText_Rom_243B10
	callstd 0x04
	@ event command: special
	special BedroomPC
	waitstate
	releaseall
	end
EventScript_JP_081F0DDB: @ 0x081F0DDB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	playse 0x0003
	@ event command: special
	special DoPCTurnOffEffect
	releaseall
	end
