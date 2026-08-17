	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:726 BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules
	.globl gText_Rom_22D46E
gText_Rom_22D46E: @ 0x0822D46E
	.string "バトルバッグは ピラミッドに いる あいだ\nつかうことが できます\pレベル50と オープンレベルの\nバッグが それぞれ ようい されていて\l10しゅるいの どうぐを\l99こ まで いれることが できます\pまた バッグの なかみは ぼうけんに\nしっぱい すると なくなって しまいます$"
	.if (. - gText_Rom_22D46E) > 0x8e
	.error "gText_Rom_22D46E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D46E) < 0x8e
	.space 0x8e - (. - gText_Rom_22D46E)
	.endif
	@ analyzed canonical ROM range 0x0822D4FC-0x0822D6B0
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0822D4FC: @ 0x0822D4FC
	@ map script dispatch table
	.byte 0x05
	.4byte EventScript_JP_0822D56B
	.byte 0x02
	.4byte MapScriptTable_JP_0822D50C
	.byte 0x03
	.4byte EventScript_JP_0822D693
	.byte 0
MapScriptTable_JP_0822D50C: @ 0x0822D50C
	@ conditional map script table
	.2byte 0x400D, 0x0001
	.4byte EventScript_JP_0822D526
	.2byte 0x400E, 0x0000
	.4byte EventScript_JP_0822D561
	.2byte 0x400F, 0x0001
	.4byte EventScript_JP_0822D558
	.2byte 0
EventScript_JP_0822D526: @ 0x0822D526
	lockall
	setvar 0x8004, 0x000D
	setvar 0x8005, 0x0004
	setvar 0x8006, 0x0001
	setvar 0x8007, 0x0037
	setvar 0x800D, 0x0000
EventScript_JP_0822D540: @ 0x0822D540
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	delay 0x0002
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x05, EventScript_JP_0822D540
	setvar 0x400D, 0x0000
	releaseall
	end
EventScript_JP_0822D558: @ 0x0822D558
	@ event command: special
	.byte 0x25
	.2byte 0x0197
	setvar 0x400F, 0x0000
	end
EventScript_JP_0822D561: @ 0x0822D561
	playbgm 0x01CD, 0x00
	setvar 0x400E, 0x0001
	end
EventScript_JP_0822D56B: @ 0x0822D56B
	setvar 0x8004, 0x000F
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	setvar 0x8004, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	copyvar 0x8000, 0x4000
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822D656
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822D62F
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822D656
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0004
	goto_if 0x01, EventScript_JP_0822D602
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_0822D602
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822D602
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_0822D60B
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, EventScript_JP_0822D60B
	compare_var_to_value 0x800D, 0x0009
	goto_if 0x01, EventScript_JP_0822D60B
	setvar 0x8004, 0x000E
	setvar 0x8005, 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x400D, 0x0001
EventScript_JP_0822D602: @ 0x0822D602
	setvar 0x8004, 0x0011
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	end
	.globl EventScript_JP_0822D60B
EventScript_JP_0822D60B: @ 0x0822D60B
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0007
	setvar 0x8006, 0x00FF
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
EventScript_JP_0822D62F: @ 0x0822D62F
	setvar 0x8004, 0x000D
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	setvar 0x8004, 0x000E
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: warpsilent
	.byte 0x3A
	.byte 0x1A
	.byte 0x19
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x000D
	.byte 0x27, 0x02
EventScript_JP_0822D656: @ 0x0822D656
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x8004, 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x400F, 0x0001
	end
EventScript_JP_0822D693: @ 0x0822D693
	call EventScript_JP_0822D69E
	setvar 0x400F, 0x0001
	end
EventScript_JP_0822D69E: @ 0x0822D69E
	setvar 0x8004, 0x000D
	setvar 0x8005, 0x0020
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	return
