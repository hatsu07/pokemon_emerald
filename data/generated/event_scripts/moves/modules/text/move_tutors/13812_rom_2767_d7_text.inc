	@ data/text/move_tutors.inc:225 MoveTutor_Text_ExplosionTaught
	.globl gText_Rom_2767D7
gText_Rom_2767D7: @ 0x082767D7
	.string "いつも ポケモンに ばっか\nだいばくはつを おしえとって\lかんじんの ぼくは いつまでも\lばくはつ できん……\pでも ほんとは\nこのまちに いつまでも いたいから\lかも しれん……{EOS}"
	.if (. - gText_Rom_2767D7) > 0x5b
	.error "gText_Rom_2767D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2767D7) < 0x5b
	.space 0x5b - (. - gText_Rom_2767D7)
	.endif
	@ analyzed canonical ROM range 0x08276832-0x08276CAE
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08276832: @ 0x08276832
.Lbatch81_text_start_EventScript_JP_08276832: @ 0x08276832
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B1
	goto_if 0x01, EventScript_JP_08276890
	loadword 0x00, gText_Rom_275F81
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276886
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276886
	loadword 0x00, gText_Rom_276010
	callstd 0x04
	setvar 0x8005, 0x0017
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276886
	setflag 0x01B1
	goto EventScript_JP_08276890
	.byte 0x02
EventScript_08276886: @ 0x08276886
EventScript_JP_08276886: @ 0x08276886
	loadword 0x00, gText_Rom_275FFE
	callstd 0x04
	release
	end
EventScript_08276890: @ 0x08276890
EventScript_JP_08276890: @ 0x08276890
	loadword 0x00, gText_Rom_276026
	callstd 0x04
	release
	end
.globl EventScript_JP_0827689A
EventScript_JP_0827689A: @ 0x0827689A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B2
	goto_if 0x01, EventScript_JP_082768F8
	loadword 0x00, gText_Rom_276048
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082768EE
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082768EE
	loadword 0x00, gText_Rom_2760CB
	callstd 0x04
	setvar 0x8005, 0x0010
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082768EE
	setflag 0x01B2
	goto EventScript_JP_082768F8
	.byte 0x02
EventScript_JP_082768EE: @ 0x082768EE
	loadword 0x00, gText_Rom_2760B8
	callstd 0x04
	release
	end
EventScript_JP_082768F8: @ 0x082768F8
	loadword 0x00, gText_Rom_2760E8
	callstd 0x04
	release
	end
.globl EventScript_JP_08276902
EventScript_JP_08276902: @ 0x08276902
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B3
	goto_if 0x01, EventScript_JP_08276960
	loadword 0x00, gText_Rom_276101
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276956
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276956
	loadword 0x00, gText_Rom_276163
	callstd 0x04
	setvar 0x8005, 0x001D
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276956
	setflag 0x01B3
	goto EventScript_JP_08276960
	.byte 0x02
EventScript_JP_08276956: @ 0x08276956
	loadword 0x00, gText_Rom_276159
	callstd 0x04
	release
	end
EventScript_JP_08276960: @ 0x08276960
	loadword 0x00, gText_Rom_27617E
	callstd 0x04
	release
	end
.globl EventScript_JP_0827696A
EventScript_JP_0827696A: @ 0x0827696A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B4
	goto_if 0x01, EventScript_JP_082769C8
	loadword 0x00, gText_Rom_27619E
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082769BE
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082769BE
	loadword 0x00, gText_Rom_276226
	callstd 0x04
	setvar 0x8005, 0x0007
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082769BE
	setflag 0x01B4
	goto EventScript_JP_082769C8
	.byte 0x02
EventScript_JP_082769BE: @ 0x082769BE
	loadword 0x00, gText_Rom_27620A
	callstd 0x04
	release
	end
EventScript_JP_082769C8: @ 0x082769C8
	loadword 0x00, gText_Rom_276248
	callstd 0x04
	release
	end
.globl EventScript_JP_082769D2
EventScript_JP_082769D2: @ 0x082769D2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B5
	goto_if 0x01, EventScript_JP_08276A30
	loadword 0x00, gText_Rom_276272
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A26
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A26
	loadword 0x00, gText_Rom_276302
	callstd 0x04
	setvar 0x8005, 0x0008
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A26
	setflag 0x01B5
	goto EventScript_JP_08276A30
	.byte 0x02
EventScript_JP_08276A26: @ 0x08276A26
	loadword 0x00, gText_Rom_2762EE
	callstd 0x04
	release
	end
EventScript_JP_08276A30: @ 0x08276A30
	loadword 0x00, gText_Rom_27631B
	callstd 0x04
	release
	end
.globl EventScript_JP_08276A3A
EventScript_JP_08276A3A: @ 0x08276A3A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B6
	goto_if 0x01, EventScript_JP_08276A98
	loadword 0x00, gText_Rom_27634D
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A8E
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A8E
	loadword 0x00, gText_Rom_2763DB
	callstd 0x04
	setvar 0x8005, 0x0018
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A8E
	setflag 0x01B6
	goto EventScript_JP_08276A98
	.byte 0x02
EventScript_JP_08276A8E: @ 0x08276A8E
	loadword 0x00, gText_Rom_2763BB
	callstd 0x04
	release
	end
EventScript_JP_08276A98: @ 0x08276A98
	loadword 0x00, gText_Rom_276404
	callstd 0x04
	release
	end
.globl EventScript_JP_08276AA2
EventScript_JP_08276AA2: @ 0x08276AA2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B7
	goto_if 0x01, EventScript_JP_08276B00
	loadword 0x00, gText_Rom_276436
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276AF6
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276AF6
	loadword 0x00, gText_Rom_2764E1
	callstd 0x04
	setvar 0x8005, 0x000E
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276AF6
	setflag 0x01B7
	goto EventScript_JP_08276B00
	.byte 0x02
EventScript_JP_08276AF6: @ 0x08276AF6
	loadword 0x00, gText_Rom_2764BA
	callstd 0x04
	release
	end
EventScript_JP_08276B00: @ 0x08276B00
	loadword 0x00, gText_Rom_2764F8
	callstd 0x04
	release
	end
.globl EventScript_JP_08276B0A
EventScript_JP_08276B0A: @ 0x08276B0A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B8
	goto_if 0x01, EventScript_JP_08276B68
	loadword 0x00, gText_Rom_276534
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276B5E
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276B5E
	loadword 0x00, gText_Rom_2765F3
	callstd 0x04
	setvar 0x8005, 0x000F
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276B5E
	setflag 0x01B8
	goto EventScript_JP_08276B68
	.byte 0x02
EventScript_JP_08276B5E: @ 0x08276B5E
	loadword 0x00, gText_Rom_2765D1
	callstd 0x04
	release
	end
EventScript_JP_08276B68: @ 0x08276B68
	loadword 0x00, gText_Rom_276618
	callstd 0x04
	release
	end
.globl EventScript_JP_08276B72
EventScript_JP_08276B72: @ 0x08276B72
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B9
	goto_if 0x01, EventScript_JP_08276BD0
	loadword 0x00, gText_Rom_27663B
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276BC6
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276BC6
	loadword 0x00, gText_Rom_2766DC
	callstd 0x04
	setvar 0x8005, 0x0004
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276BC6
	setflag 0x01B9
	goto EventScript_JP_08276BD0
	.byte 0x02
EventScript_JP_08276BC6: @ 0x08276BC6
	loadword 0x00, gText_Rom_2766C4
	callstd 0x04
	release
	end
EventScript_JP_08276BD0: @ 0x08276BD0
	loadword 0x00, gText_Rom_2766F4
	callstd 0x04
	release
	end
.globl EventScript_JP_08276BDA
EventScript_JP_08276BDA: @ 0x08276BDA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01BA
	goto_if 0x01, EventScript_JP_08276C38
	loadword 0x00, gText_Rom_27671B
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276C2E
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276C2E
	loadword 0x00, gText_Rom_2767B0
	callstd 0x04
	setvar 0x8005, 0x000C
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276C2E
	setflag 0x01BA
	goto EventScript_JP_08276C38
	.byte 0x02
EventScript_JP_08276C2E: @ 0x08276C2E
	loadword 0x00, gText_Rom_276797
	callstd 0x04
	release
	end
EventScript_JP_08276C38: @ 0x08276C38
	loadword 0x00, gText_Rom_2767D7
	callstd 0x04
	release
	end
EventScript_JP_08276C42: @ 0x08276C42
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x01DA
	waitstate
	lock
	faceplayer
	return
EventScript_08276C49: @ 0x08276C49
EventScript_JP_08276C49: @ 0x08276C49
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_275F5D
	callstd 0x05
	return
	.byte 0x16, 0x02, 0x40, 0x00, 0x00, 0x16, 0x04, 0x80, 0x04, 0x00, 0x25, 0xF8, 0x01, 0x16, 0x04, 0x80
	.byte 0x01, 0x00, 0x16, 0x05, 0x80, 0x05, 0x00, 0x25, 0xE7, 0x00, 0x21, 0x0D, 0x80, 0x02, 0x00, 0x06
	.byte 0x01, 0xE5, 0x6C, 0x27, 0x08, 0x21, 0x0D, 0x80, 0x03, 0x00, 0x06, 0x01, 0xE5, 0x6C, 0x27, 0x08
	.byte 0x21, 0x0D, 0x80, 0x09, 0x00, 0x06, 0x01, 0xE5, 0x6C, 0x27, 0x08, 0x02, 0x03, 0x40, 0x00, 0x00
	.byte 0x98, 0x6C, 0x27, 0x08, 0x00, 0x00, 0x16, 0x03, 0x40, 0x01, 0x00, 0x02, 0x40, 0x00, 0x00, 0xC2
	.byte 0x6C, 0x27, 0x08, 0x01, 0x40, 0x01, 0x00, 0xFB, 0x6C, 0x27, 0x08, 0x00, 0x00
