	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:571 BattleFrontier_BattlePalaceBattleRoom_Text_SpenserComeSeeMeAgain
	.globl gText_Rom_22BCA6
gText_Rom_22BCA6: @ 0x0822BCA6
	.string "ウコン『ぐわはっはっ!\pこれからも ときどき あそびに こいよ!\nわしも きょうだいも まっとる からな!!$"
	.if (. - gText_Rom_22BCA6) > 0x37
	.error "gText_Rom_22BCA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BCA6) < 0x37
	.space 0x37 - (. - gText_Rom_22BCA6)
	.endif
	@ analyzed canonical ROM range 0x0822BCDD-0x0822C4F7
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0822BCDD: @ 0x0822BCDD
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_0822BCFC
	.byte 0x04
	.4byte MapScriptTable_JP_08226DA5
	.byte 0
	.byte 0x01, 0x40, 0x00, 0x00, 0xF2, 0xBC, 0x22, 0x08, 0x00, 0x00, 0x16, 0x01, 0x40, 0x01, 0x00, 0x5B
	.byte 0xFF, 0x00, 0x02, 0x02
MapScriptTable_JP_0822BCFC: @ 0x0822BCFC
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_0822BD26
	.2byte 0x4000, 0x0001
	.4byte EventScript_JP_0822BD2F
	.2byte 0x4000, 0x0002
	.4byte EventScript_JP_0822BE73
	.2byte 0x4000, 0x0003
	.4byte EventScript_JP_0822BD78
	.2byte 0x4000, 0x0004
	.4byte EventScript_JP_0822BE19
	.2byte 0
EventScript_JP_0822BD26: @ 0x0822BD26
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: end
	.byte 0x02
EventScript_JP_0822BD2F: @ 0x0822BD2F
	@ event command: lockall
	.byte 0x69
	@ event command: message
	.byte 0x67
	.4byte 0x0822C956 @ gText_Rom_22C956
	@ event command: waitmessage
	.byte 0x66
	@ event command: playse
	.byte 0x2F
	.2byte 0x005B
	@ event command: waitse
	.byte 0x30
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
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
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
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
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0822BD78: @ 0x0822BD78
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000A
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822BD99 @ EventScript_JP_0822BD99
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C9CE @ gText_Rom_22C9CE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822BDA1 @ EventScript_JP_0822BDA1
EventScript_JP_0822BD99: @ 0x0822BD99
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D2B7 @ gText_Rom_22D2B7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_0822BDA1: @ 0x0822BDA1
	@ event command: special
	.byte 0x25
	.2byte 0x01C0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822C3A2 @ EventScript_JP_0822C3A2
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x4004
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
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
	@ event command: message
	.byte 0x67
	.4byte 0x0822CAEE @ gText_Rom_22CAEE
	@ event command: waitmessage
	.byte 0x66
	@ event command: playse
	.byte 0x2F
	.2byte 0x005B
	@ event command: waitse
	.byte 0x30
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D2EA @ gText_Rom_22D2EA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822189E @ gText_Rom_22189E
	@ event command: callstd
	.byte 0x09
	.byte 0x09
	@ event command: message
	.byte 0x67
	.4byte 0x0822CB38 @ gText_Rom_22CB38
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
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
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CBF4 @ gText_Rom_22CBF4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0822BE19: @ 0x0822BE19
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
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
	@ event command: lockall
	.byte 0x69
	@ event command: message
	.byte 0x67
	.4byte 0x0822CBBD @ gText_Rom_22CBBD
	@ event command: waitmessage
	.byte 0x66
	@ event command: playse
	.byte 0x2F
	.2byte 0x005B
	@ event command: waitse
	.byte 0x30
	@ event command: message
	.byte 0x67
	.4byte 0x0822CB38 @ gText_Rom_22CB38
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
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
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CBF4 @ gText_Rom_22CBF4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0822BE73: @ 0x0822BE73
	@ event command: goto
	.byte 0x05
	.4byte 0x0822BFE8 @ EventScript_JP_0822BFE8
EventScript_JP_0822BE78: @ 0x0822BE78
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CF
	.2byte 0x0006
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C4F8 @ gText_Rom_22C4F8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_0822BE8F: @ 0x0822BE8F
	@ event command: message
	.byte 0x67
	.4byte 0x0822C53F @ gText_Rom_22C53F
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x17
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822BECB @ EventScript_JP_0822BECB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C02F @ EventScript_JP_0822C02F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C08B @ EventScript_JP_0822C08B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C08B @ EventScript_JP_0822C08B
EventScript_JP_0822BECB: @ 0x0822BECB
	@ event command: message
	.byte 0x67
	.4byte 0x0822C6BD @ gText_Rom_22C6BD
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x18
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C08B @ EventScript_JP_0822C08B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C08B @ EventScript_JP_0822C08B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000F
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C03C @ EventScript_JP_0822C03C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8006
	.2byte 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C6EA @ gText_Rom_22C6EA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: call
	.byte 0x04
	.4byte 0x082202F8
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x800D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00F5
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C088 @ EventScript_JP_0822C088
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C83E @ gText_Rom_22C83E
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C088 @ EventScript_JP_0822C088
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822BF6C @ EventScript_JP_0822BF6C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C088 @ EventScript_JP_0822C088
EventScript_JP_0822BF6C: @ 0x0822BF6C
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
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
	.2byte 0x0001
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
	.2byte 0x0003
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
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x0002
	@ event command: call
	.byte 0x04
	.4byte 0x082423E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C071 @ EventScript_JP_0822C071
EventScript_JP_0822BFE8: @ 0x0822BFE8
	@ event command: special
	.byte 0x25
	.2byte 0x0027
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
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C866 @ gText_Rom_22C866
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x0822C31D @ EventScript_JP_0822C31D
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
	.2byte 0x800D
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x1A
	.byte 0xFF
	.2byte 0x0001
	.2byte 0x0001
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_0822C02F: @ 0x0822C02F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C571 @ gText_Rom_22C571
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822BE8F @ EventScript_JP_0822BE8F
EventScript_JP_0822C03C: @ 0x0822C03C
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C057 @ EventScript_JP_0822C057
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C064 @ EventScript_JP_0822C064
EventScript_JP_0822C057: @ 0x0822C057
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C786 @ gText_Rom_22C786
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C093 @ EventScript_JP_0822C093
EventScript_JP_0822C064: @ 0x0822C064
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C708 @ gText_Rom_22C708
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C093 @ EventScript_JP_0822C093
EventScript_JP_0822C071: @ 0x0822C071
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
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C08B @ EventScript_JP_0822C08B
EventScript_JP_0822C088: @ 0x0822C088
	@ event command: special
	.byte 0x25
	.2byte 0x0028
EventScript_JP_0822C08B: @ 0x0822C08B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C559 @ gText_Rom_22C559
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_0822C093: @ 0x0822C093
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0822C095: @ 0x0822C095
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CC44 @ gText_Rom_22CC44
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x0822C0B7 @ EventScript_JP_0822C0B7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D1C7 @ gText_Rom_22D1C7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0822C0B7: @ 0x0822C0B7
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x18
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C0EF @ EventScript_JP_0822C0EF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C12D @ EventScript_JP_0822C12D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C0EE @ EventScript_JP_0822C0EE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C0EE @ EventScript_JP_0822C0EE
	@ event command: return
	.byte 0x03
EventScript_JP_0822C0EE: @ 0x0822C0EE
	@ event command: return
	.byte 0x03
EventScript_JP_0822C0EF: @ 0x0822C0EF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CC6D @ gText_Rom_22CC6D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
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
	.2byte 0x00F0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x0822C11A @ EventScript_JP_0822C11A
	@ event command: setvar
	.byte 0x16
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C16B @ EventScript_JP_0822C16B
	.byte 0x03
EventScript_JP_0822C11A: @ 0x0822C11A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C16B @ EventScript_JP_0822C16B
	.byte 0x03
EventScript_JP_0822C12D: @ 0x0822C12D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CC6D @ gText_Rom_22CC6D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x0822C158 @ EventScript_JP_0822C158
	@ event command: setvar
	.byte 0x16
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C16B @ EventScript_JP_0822C16B
	.byte 0x03
EventScript_JP_0822C158: @ 0x0822C158
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C16B @ EventScript_JP_0822C16B
	.byte 0x03
EventScript_JP_0822C16B: @ 0x0822C16B
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x0201
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C255 @ EventScript_JP_0822C255
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C25E @ EventScript_JP_0822C25E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C267 @ EventScript_JP_0822C267
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C270 @ EventScript_JP_0822C270
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C279 @ EventScript_JP_0822C279
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C282 @ EventScript_JP_0822C282
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C28B @ EventScript_JP_0822C28B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C294 @ EventScript_JP_0822C294
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0008
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C29D @ EventScript_JP_0822C29D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0009
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C2A6 @ EventScript_JP_0822C2A6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x000A
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C2AF @ EventScript_JP_0822C2AF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x000B
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C2B8 @ EventScript_JP_0822C2B8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x000C
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C2C1 @ EventScript_JP_0822C2C1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x000D
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C2CA @ EventScript_JP_0822C2CA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x000E
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C2D3 @ EventScript_JP_0822C2D3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x000F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C2DC @ EventScript_JP_0822C2DC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0010
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C2E5 @ EventScript_JP_0822C2E5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0011
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C2EE @ EventScript_JP_0822C2EE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0012
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C2F7 @ EventScript_JP_0822C2F7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0013
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C300 @ EventScript_JP_0822C300
	@ event command: return
	.byte 0x03
EventScript_JP_0822C255: @ 0x0822C255
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CCA1 @ gText_Rom_22CCA1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C25E: @ 0x0822C25E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CCDC @ gText_Rom_22CCDC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C267: @ 0x0822C267
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CD0D @ gText_Rom_22CD0D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C270: @ 0x0822C270
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CD44 @ gText_Rom_22CD44
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C279: @ 0x0822C279
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CD9A @ gText_Rom_22CD9A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C282: @ 0x0822C282
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CDE1 @ gText_Rom_22CDE1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C28B: @ 0x0822C28B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CE26 @ gText_Rom_22CE26
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C294: @ 0x0822C294
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CE63 @ gText_Rom_22CE63
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C29D: @ 0x0822C29D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CEA5 @ gText_Rom_22CEA5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C2A6: @ 0x0822C2A6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CEE4 @ gText_Rom_22CEE4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C2AF: @ 0x0822C2AF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CF1F @ gText_Rom_22CF1F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C2B8: @ 0x0822C2B8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CF5E @ gText_Rom_22CF5E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C2C1: @ 0x0822C2C1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CFC1 @ gText_Rom_22CFC1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C2CA: @ 0x0822C2CA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D000 @ gText_Rom_22D000
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C2D3: @ 0x0822C2D3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D03C @ gText_Rom_22D03C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C2DC: @ 0x0822C2DC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D077 @ gText_Rom_22D077
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C2E5: @ 0x0822C2E5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D0B6 @ gText_Rom_22D0B6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C2EE: @ 0x0822C2EE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D0F5 @ gText_Rom_22D0F5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C2F7: @ 0x0822C2F7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D132 @ gText_Rom_22D132
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C300: @ 0x0822C300
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D187 @ gText_Rom_22D187
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C309: @ 0x0822C309
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: special
	.byte 0x25
	.2byte 0x0209
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0822C31D: @ 0x0822C31D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822C38B @ Movement_JP_0822C38B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0822C394 @ Movement_JP_0822C394
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C882 @ gText_Rom_22C882
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C35B @ EventScript_JP_0822C35B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C8A8 @ gText_Rom_22C8A8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C363 @ EventScript_JP_0822C363
EventScript_JP_0822C35B: @ 0x0822C35B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C8CF @ gText_Rom_22C8CF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_0822C363: @ 0x0822C363
	@ event command: message
	.byte 0x67
	.4byte 0x0822C8EA @ gText_Rom_22C8EA
	@ event command: waitmessage
	.byte 0x66
	@ event command: playse
	.byte 0x2F
	.2byte 0x005B
	@ event command: waitse
	.byte 0x30
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C907 @ gText_Rom_22C907
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822C39C @ Movement_JP_0822C39C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0822C39F @ Movement_JP_0822C39F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_0822C38B: @ 0x0822C38B
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x00 @ face_down
	.byte 0xFE @ step_end
Movement_JP_0822C394: @ 0x0822C394
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0822C39C: @ 0x0822C39C
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x02 @ face_left
	.byte 0xFE @ step_end
Movement_JP_0822C39F: @ 0x0822C39F
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_0822C3A2: @ 0x0822C3A2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822C9F4 @ gText_Rom_22C9F4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x4004
	@ event command: special
	.byte 0x25
	.2byte 0x01BE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C3C7 @ EventScript_JP_0822C3C7
	@ event command: message
	.byte 0x67
	.4byte 0x0822CA67 @ gText_Rom_22CA67
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C3D0 @ EventScript_JP_0822C3D0
	.byte 0x02
EventScript_JP_0822C3C7: @ 0x0822C3C7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CA3F @ gText_Rom_22CA3F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822C3D0: @ 0x0822C3D0
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x53
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C407 @ EventScript_JP_0822C407
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C417 @ EventScript_JP_0822C417
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C427 @ EventScript_JP_0822C427
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C427 @ EventScript_JP_0822C427
	@ event command: end
	.byte 0x02
EventScript_JP_0822C407: @ 0x0822C407
	@ event command: special
	.byte 0x25
	.2byte 0x01BF
	@ event command: waitstate
	.byte 0x27
	@ event command: message
	.byte 0x67
	.4byte 0x0822CAB5 @ gText_Rom_22CAB5
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C3D0 @ EventScript_JP_0822C3D0
	.byte 0x02
EventScript_JP_0822C417: @ 0x0822C417
	@ event command: special
	.byte 0x25
	.2byte 0x01C1
	@ event command: waitstate
	.byte 0x27
	@ event command: message
	.byte 0x67
	.4byte 0x0822CAB5 @ gText_Rom_22CAB5
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C3D0 @ EventScript_JP_0822C3D0
	.byte 0x02
EventScript_JP_0822C427: @ 0x0822C427
	@ event command: special
	.byte 0x25
	.2byte 0x01C0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C436 @ EventScript_JP_0822C436
	@ event command: return
	.byte 0x03
EventScript_JP_0822C436: @ 0x0822C436
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822CA9D @ gText_Rom_22CA9D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: message
	.byte 0x67
	.4byte 0x0822CAB5 @ gText_Rom_22CAB5
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C3D0 @ EventScript_JP_0822C3D0
	.byte 0x02
EventScript_JP_0822C44A: @ 0x0822C44A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D202 @ gText_Rom_22D202
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0822C453: @ 0x0822C453
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D276 @ gText_Rom_22D276
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0822C45C: @ 0x0822C45C
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D31A @ gText_Rom_22D31A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C46B @ EventScript_JP_0822C46B
	.byte 0x02
EventScript_JP_0822C46B: @ 0x0822C46B
	@ event command: message
	.byte 0x67
	.4byte 0x0822D333 @ gText_Rom_22D333
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x0F
	.byte 0x02
	.byte 0x65
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C4BE @ EventScript_JP_0822C4BE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C4CC @ EventScript_JP_0822C4CC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C4DA @ EventScript_JP_0822C4DA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C4E8 @ EventScript_JP_0822C4E8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C4F6 @ EventScript_JP_0822C4F6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822C4F6 @ EventScript_JP_0822C4F6
	@ event command: end
	.byte 0x02
EventScript_JP_0822C4BE: @ 0x0822C4BE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D343 @ gText_Rom_22D343
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C46B @ EventScript_JP_0822C46B
	.byte 0x02
EventScript_JP_0822C4CC: @ 0x0822C4CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D398 @ gText_Rom_22D398
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C46B @ EventScript_JP_0822C46B
	.byte 0x02
EventScript_JP_0822C4DA: @ 0x0822C4DA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D3FE @ gText_Rom_22D3FE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C46B @ EventScript_JP_0822C46B
	.byte 0x02
EventScript_JP_0822C4E8: @ 0x0822C4E8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822D46E @ gText_Rom_22D46E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822C46B @ EventScript_JP_0822C46B
	.byte 0x02
EventScript_JP_0822C4F6: @ 0x0822C4F6
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
