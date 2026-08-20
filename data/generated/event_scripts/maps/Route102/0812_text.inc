	@ data/maps/Route102/scripts.inc:79 Route102_Text_WallyIDidIt
	.globl gText_Rom_1E6992
gText_Rom_1E6992: @ 0x081E6992
	.string "ミツル『やった…… ぼくの……\nぼくの ポケモンだ……!!{EOS}"
	.if (. - gText_Rom_1E6992) > 0x1e
	.error "gText_Rom_1E6992 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6992) < 0x1e
	.space 0x1e - (. - gText_Rom_1E6992)
	.endif
