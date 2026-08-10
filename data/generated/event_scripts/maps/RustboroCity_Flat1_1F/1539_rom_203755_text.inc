	@ data/maps/RustboroCity_Flat1_1F/scripts.inc:15 RustboroCity_Flat1_1F_Text_PokemonStrange
	.globl gText_Rom_203755
gText_Rom_203755: @ 0x08203755
	.string "ほんとうに ポケモンって\nふしぎな いきもの なのね$"
	.if (. - gText_Rom_203755) > 0x1b
	.error "gText_Rom_203755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203755) < 0x1b
	.space 0x1b - (. - gText_Rom_203755)
	.endif
	@ analyzed canonical ROM range 0x08203770-0x08203885
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
EventScript_JP_08203771: @ 0x08203771
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x01FD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082037C4 @ EventScript_JP_082037C4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082037E4 @ EventScript_JP_082037E4
EventScript_JP_0820378E: @ 0x0820378E
	@ event command: special
	.byte 0x25
	.2byte 0x01FE
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820380E @ EventScript_JP_0820380E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08203818 @ EventScript_JP_08203818
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x01FF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820382F @ EventScript_JP_0820382F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08203858 @ EventScript_JP_08203858
	@ event command: end
	.byte 0x02
EventScript_JP_082037C4: @ 0x082037C4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082038E4 @ gText_Rom_2038E4
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08203804 @ EventScript_JP_08203804
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082039B9 @ gText_Rom_2039B9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820378E @ EventScript_JP_0820378E
EventScript_JP_082037E4: @ 0x082037E4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820398A @ gText_Rom_20398A
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08203804 @ EventScript_JP_08203804
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082039B9 @ gText_Rom_2039B9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820378E @ EventScript_JP_0820378E
EventScript_JP_08203804: @ 0x08203804
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082039D3 @ gText_Rom_2039D3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820380E: @ 0x0820380E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203ABC @ gText_Rom_203ABC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08203818: @ 0x08203818
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203A63 @ gText_Rom_203A63
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x0820386F @ EventScript_JP_0820386F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203A9D @ gText_Rom_203A9D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820382F: @ 0x0820382F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082039FB @ gText_Rom_2039FB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x0820386F @ EventScript_JP_0820386F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203A10 @ gText_Rom_203A10
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203B01 @ gText_Rom_203B01
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08203858: @ 0x08203858
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203A2F @ gText_Rom_203A2F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x0820386F @ EventScript_JP_0820386F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203A44 @ gText_Rom_203A44
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820386F: @ 0x0820386F
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0006
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08203874: @ 0x08203874
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203886 @ gText_Rom_203886
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820387D: @ 0x0820387D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203BB9 @ gText_Rom_203BB9
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
