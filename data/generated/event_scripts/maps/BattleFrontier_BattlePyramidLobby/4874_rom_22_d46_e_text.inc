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
sAnalyzedEventData_0822D4FC: @ 0x0822D4FC
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
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0004
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8007
	.2byte 0x0037
	@ event command: setvar
	.byte 0x16
	.2byte 0x800D
	.2byte 0x0000
EventScript_JP_0822D540: @ 0x0822D540
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: delay
	.byte 0x28
	.2byte 0x0002
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x0822D540 @ EventScript_JP_0822D540
	@ event command: setvar
	.byte 0x16
	.2byte 0x400D
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0822D558: @ 0x0822D558
	@ event command: special
	.byte 0x25
	.2byte 0x0197
	@ event command: setvar
	.byte 0x16
	.2byte 0x400F
	.2byte 0x0000
	@ event command: end
	.byte 0x02
EventScript_JP_0822D561: @ 0x0822D561
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01CD
	.byte 0x00
	@ event command: setvar
	.byte 0x16
	.2byte 0x400E
	.2byte 0x0001
	@ event command: end
	.byte 0x02
EventScript_JP_0822D56B: @ 0x0822D56B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000F
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822D656 @ EventScript_JP_0822D656
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822D62F @ EventScript_JP_0822D62F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822D656 @ EventScript_JP_0822D656
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822D602 @ EventScript_JP_0822D602
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822D602 @ EventScript_JP_0822D602
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822D602 @ EventScript_JP_0822D602
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822D60B @ EventScript_JP_0822D60B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822D60B @ EventScript_JP_0822D60B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0009
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822D60B @ EventScript_JP_0822D60B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000E
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x400D
	.2byte 0x0001
EventScript_JP_0822D602: @ 0x0822D602
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0011
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: end
	.byte 0x02
EventScript_JP_0822D60B: @ 0x0822D60B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x00FF
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
EventScript_JP_0822D62F: @ 0x0822D62F
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000E
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
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x400F
	.2byte 0x0001
	@ event command: end
	.byte 0x02
EventScript_JP_0822D693: @ 0x0822D693
	@ event command: call
	.byte 0x04
	.4byte 0x0822D69E @ EventScript_JP_0822D69E
	@ event command: setvar
	.byte 0x16
	.2byte 0x400F
	.2byte 0x0001
	@ event command: end
	.byte 0x02
EventScript_JP_0822D69E: @ 0x0822D69E
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0020
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: return
	.byte 0x03
