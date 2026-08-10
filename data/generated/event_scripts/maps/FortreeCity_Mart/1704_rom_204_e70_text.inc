	@ data/maps/FortreeCity_Mart/scripts.inc:46 FortreeCity_Mart_Text_RareCandyMakesMonGrow
	.globl gText_Rom_204E70
gText_Rom_204E70: @ 0x08204E70
	.string "ふしぎなアメを あげると\nポケモン いっきに そだって\lレベルが あがっちゃうんだ!$"
	.if (. - gText_Rom_204E70) > 0x2b
	.error "gText_Rom_204E70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204E70) < 0x2b
	.space 0x2b - (. - gText_Rom_204E70)
	.endif
	@ analyzed canonical ROM range 0x08204E9B-0x08204F52
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08204E9B: @ 0x08204E9B
	.byte 0x00
EventScript_JP_08204E9C: @ 0x08204E9C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0108
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08204F3F @ EventScript_JP_08204F3F
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0076
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x08204F33 @ EventScript_JP_08204F33
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204F7F @ gText_Rom_204F7F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: multichoice
	.byte 0x6F
	.byte 0x15
	.byte 0x08
	.byte 0x36
	.byte 0x01
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08204F49 @ EventScript_JP_08204F49
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204FD5 @ gText_Rom_204FD5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: multichoice
	.byte 0x6F
	.byte 0x15
	.byte 0x08
	.byte 0x36
	.byte 0x01
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08204F49 @ EventScript_JP_08204F49
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205013 @ gText_Rom_205013
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: multichoice
	.byte 0x6F
	.byte 0x15
	.byte 0x08
	.byte 0x36
	.byte 0x01
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
	.4byte 0x08204F49 @ EventScript_JP_08204F49
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205051 @ gText_Rom_205051
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x012A
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
	.4byte 0x082430E0
	@ event command: setflag
	.byte 0x29
	.2byte 0x0108
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820509A @ gText_Rom_20509A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_08204F33: @ 0x08204F33
EventScript_JP_08204F33: @ 0x08204F33
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204F53 @ gText_Rom_204F53
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0076
	@ event command: return
	.byte 0x03
EventScript_08204F3F: @ 0x08204F3F
EventScript_JP_08204F3F: @ 0x08204F3F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820509A @ gText_Rom_20509A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_08204F49: @ 0x08204F49
EventScript_JP_08204F49: @ 0x08204F49
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082050C0 @ gText_Rom_2050C0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
