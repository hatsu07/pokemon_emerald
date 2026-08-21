	@ data/maps/RustboroCity_Flat1_1F/scripts.inc:15 RustboroCity_Flat1_1F_Text_PokemonStrange
	.globl gText_Rom_203755
gText_Rom_203755: @ 0x08203755
	.string "ほんとうに ポケモンって\nふしぎな いきもの なのね{EOS}"
	.if (. - gText_Rom_203755) > 0x1b
	.error "gText_Rom_203755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203755) < 0x1b
	.space 0x1b - (. - gText_Rom_203755)
	.endif
	@ analyzed canonical ROM range 0x08203770-0x08203885
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
.globl EventScript_JP_08203771
EventScript_JP_08203771: @ 0x08203771
	lock
	faceplayer
	specialvar_ 0x800D, 0x01FD
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082037C4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082037E4
EventScript_JP_0820378E: @ 0x0820378E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x01FE
	waitstate
	compare_var_to_value 0x8004, 0x0001
	goto_if 0x01, EventScript_JP_0820380E
	compare_var_to_value 0x8004, 0x0002
	goto_if 0x01, EventScript_JP_08203818
	specialvar_ 0x800D, 0x01FF
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820382F
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08203858
	end
EventScript_JP_082037C4: @ 0x082037C4
	loadword 0x00, gText_Rom_2038E4
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08203804
	loadword 0x00, gText_Rom_2039B9
	callstd 0x04
	goto EventScript_JP_0820378E
EventScript_JP_082037E4: @ 0x082037E4
	loadword 0x00, gText_Rom_20398A
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08203804
	loadword 0x00, gText_Rom_2039B9
	callstd 0x04
	goto EventScript_JP_0820378E
EventScript_JP_08203804: @ 0x08203804
	loadword 0x00, gText_Rom_2039D3
	callstd 0x04
	release
	end
EventScript_JP_0820380E: @ 0x0820380E
	loadword 0x00, gText_Rom_203ABC
	callstd 0x04
	release
	end
EventScript_JP_08203818: @ 0x08203818
	loadword 0x00, gText_Rom_203A63
	callstd 0x04
	call EventScript_JP_0820386F
	loadword 0x00, gText_Rom_203A9D
	callstd 0x04
	release
	end
EventScript_JP_0820382F: @ 0x0820382F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2039FB
	callstd 0x04
	call EventScript_JP_0820386F
	loadword 0x00, gText_Rom_203A10
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_203B01
	callstd 0x04
	release
	end
EventScript_JP_08203858: @ 0x08203858
	loadword 0x00, gText_Rom_203A2F
	callstd 0x04
	call EventScript_JP_0820386F
	loadword 0x00, gText_Rom_203A44
	callstd 0x04
	release
	end
EventScript_JP_0820386F: @ 0x0820386F
	turnobject 0x0006, 0x04
	return
.globl EventScript_JP_08203874
EventScript_JP_08203874: @ 0x08203874
	loadword 0x00, gText_Rom_203886
	callstd 0x02
	end
.globl EventScript_JP_0820387D
EventScript_JP_0820387D: @ 0x0820387D
	loadword 0x00, gText_Rom_203BB9
	callstd 0x03
	end
