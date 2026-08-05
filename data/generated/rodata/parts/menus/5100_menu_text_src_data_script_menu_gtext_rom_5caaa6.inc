	@ src/data/script_menu.h:66 script_menu_line_66
	.globl gText_Rom_5CAAA6
gText_Rom_5CAAA6: @ 0x085CAAA6
	.string "ダート$"
	.if (. - gText_Rom_5CAAA6) > 0x4
	.error "gText_Rom_5CAAA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAA6) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAA6)
	.endif
	@ Decoded text from ROM range: offset=0x5CAAAA, size=0x6
	.string "どく$"
	.string "まひ$"

