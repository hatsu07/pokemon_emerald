	@ src/data/script_menu.h:480 gText_Colosseum
	.globl gText_Rom_5CAE53
gText_Rom_5CAE53: @ 0x085CAE53
	.string "コロシアム$"
	.if (. - gText_Rom_5CAE53) > 0x6
	.error "gText_Rom_5CAE53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE53) < 0x6
	.space 0x6 - (. - gText_Rom_5CAE53)
	.endif
	@ Decoded text from ROM range: offset=0x5CAE59, size=0x9
	.string "レコードコーナー$"
