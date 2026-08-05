	@ src/data/script_menu.h:5 script_menu_line_5
	.globl gText_Rom_5CA9FF
gText_Rom_5CA9FF: @ 0x085CA9FF
	.string "カイナ$"
	.if (. - gText_Rom_5CA9FF) > 0x4
	.error "gText_Rom_5CA9FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9FF) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9FF)
	.endif
	@ Decoded text from ROM range: offset=0x5CAA03, size=0x8
	.string "ミシロ$"
	.string "ミナモ$"
