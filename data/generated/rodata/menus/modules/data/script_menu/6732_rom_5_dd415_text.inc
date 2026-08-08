	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DD415
gText_Rom_5DD415: @ 0x085DD415
	.string "オープンレベル$"
	.if (. - gText_Rom_5DD415) != 0x8
	.error "gText_Rom_5DD415 must retain its original byte length"
	.endif
