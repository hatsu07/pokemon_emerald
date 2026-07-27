	@ src/data/script_menu.h:637 script_menu_line_637 (+3 aliases)
	.globl gText_Rom_5CAADB
gText_Rom_5CAADB: @ 0x085CAADB
	.string "いいえ$"
	.if (. - gText_Rom_5CAADB) > 0x4
	.error "gText_Rom_5CAADB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAADB) < 0x4
	.space 0x4 - (. - gText_Rom_5CAADB)
	.endif

	@ src/data/script_menu.h:9 gText_Info2 (+3 aliases)
	.globl gText_Rom_5CAADF
gText_Rom_5CAADF: @ 0x085CAADF
	.string "せつめい$"
	.if (. - gText_Rom_5CAADF) > 0x5
	.error "gText_Rom_5CAADF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAADF) < 0x5
	.space 0x5 - (. - gText_Rom_5CAADF)
	.endif

	@ src/data/script_menu.h:500 script_menu_line_500 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAAE4
gText_Rom_5CAAE4: @ 0x085CAAE4
	.string "シングルバトル$"
	.if (. - gText_Rom_5CAAE4) != 0x8
	.error "gText_Rom_5CAAE4 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAAE8
	.set gText_Rom_5CAAE8, gText_Rom_5CAAE4 + 0x4

