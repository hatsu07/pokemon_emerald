	@ data/maps/SootopolisCity_House7/scripts.inc:15 SootopolisCity_House7_Text_CaveMadeToKeepSomething
	.globl gText_Rom_20F819
gText_Rom_20F819: @ 0x0820F819
	.string "ルネと そとのせかいを つなぐ どうくつ\pまるで なにかを ここから ださないように\nつくられた みたい だわ……\p……かんがえすぎ かしら?$"
	.if (. - gText_Rom_20F819) > 0x48
	.error "gText_Rom_20F819 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F819) < 0x48
	.space 0x48 - (. - gText_Rom_20F819)
	.endif
	@ analyzed canonical ROM range 0x0820F861-0x0820F99F
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
EventScript_JP_0820F862: @ 0x0820F862
	@ event command: special
	.byte 0x25
	.2byte 0x0077
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F9A0 @ gText_Rom_20F9A0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x009F
	@ event command: waitstate
	.byte 0x27
	@ event command: copyvar
	.byte 0x19
	.2byte 0x800D
	.2byte 0x8004
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x00FF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F8A9 @ EventScript_JP_0820F8A9
	@ event command: special
	.byte 0x25
	.2byte 0x0078
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F8B3 @ EventScript_JP_0820F8B3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F8BD @ EventScript_JP_0820F8BD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F8C7 @ EventScript_JP_0820F8C7
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F8A9: @ 0x0820F8A9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FB14 @ gText_Rom_20FB14
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F8B3: @ 0x0820F8B3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FAF3 @ gText_Rom_20FAF3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F8BD: @ 0x0820F8BD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FAC8 @ gText_Rom_20FAC8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F8C7: @ 0x0820F8C7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FA50 @ gText_Rom_20FA50
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0024
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F8E9 @ EventScript_JP_0820F8E9
	@ event command: closemessage
	.byte 0x68
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F8E9: @ 0x0820F8E9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FAB4 @ gText_Rom_20FAB4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F8F3: @ 0x0820F8F3
	@ event command: special
	.byte 0x25
	.2byte 0x0079
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FB81 @ gText_Rom_20FB81
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x009F
	@ event command: waitstate
	.byte 0x27
	@ event command: copyvar
	.byte 0x19
	.2byte 0x800D
	.2byte 0x8004
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x00FF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F93A @ EventScript_JP_0820F93A
	@ event command: special
	.byte 0x25
	.2byte 0x007A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F944 @ EventScript_JP_0820F944
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F94E @ EventScript_JP_0820F94E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F958 @ EventScript_JP_0820F958
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F93A: @ 0x0820F93A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FCF3 @ gText_Rom_20FCF3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F944: @ 0x0820F944
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FCD2 @ gText_Rom_20FCD2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F94E: @ 0x0820F94E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FCA7 @ gText_Rom_20FCA7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F958: @ 0x0820F958
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FC30 @ gText_Rom_20FC30
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0024
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820F97A @ EventScript_JP_0820F97A
	@ event command: closemessage
	.byte 0x68
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F97A: @ 0x0820F97A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FC93 @ gText_Rom_20FC93
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F984: @ 0x0820F984
	@ event command: special
	.byte 0x25
	.2byte 0x0077
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FB44 @ gText_Rom_20FB44
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820F992: @ 0x0820F992
	@ event command: special
	.byte 0x25
	.2byte 0x0079
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FD23 @ gText_Rom_20FD23
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
