	@ src/data/script_menu.h:652 script_menu_line_652
	.globl gText_Rom_5CAEC7
gText_Rom_5CAEC7: @ 0x085CAEC7
	.string "シンボル$"
	.if (. - gText_Rom_5CAEC7) > 0x5
	.error "gText_Rom_5CAEC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEC7) < 0x5
	.space 0x5 - (. - gText_Rom_5CAEC7)
	.endif
	@ analyzed canonical ROM range 0x085CAECC-0x085CAED0
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x10, 0x02, 0x0E, 0x2E, 0x19
	.globl gText_Rom_5CAED1
gText_Rom_5CAED1: @ 0x085CAED1
	.string "きろく$"
	.if (. - gText_Rom_5CAED1) > 0x4
	.error "gText_Rom_5CAED1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAED1) < 0x4
	.space 0x4 - (. - gText_Rom_5CAED1)
	.endif

	@ src/data/script_menu.h:654 script_menu_line_654 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAED5
gText_Rom_5CAED5: @ 0x085CAED5
	.string "バトルポイント$"
	.if (. - gText_Rom_5CAED5) != 0x8
	.error "gText_Rom_5CAED5 must retain its original byte length"
	.endif
