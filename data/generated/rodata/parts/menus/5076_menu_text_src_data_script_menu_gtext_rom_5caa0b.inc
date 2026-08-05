	@ src/data/script_menu.h:81 script_menu_line_81
	.globl gText_Rom_5CAA0B
gText_Rom_5CAA0B: @ 0x085CAA0B
	.string "ムロ$"
	.if (. - gText_Rom_5CAA0B) > 0x3
	.error "gText_Rom_5CAA0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAA0B) < 0x3
	.space 0x3 - (. - gText_Rom_5CAA0B)
	.endif
	@ Decoded text from ROM range: offset=0x5CAA0E, size=0x1C
	.string "さんか　する$"
	.string "せつめいをきく$"
	.string "ポケモンコンテストって？$"
