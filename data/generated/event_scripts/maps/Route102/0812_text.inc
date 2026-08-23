	@ data/maps/Route102/scripts.inc:79 Route102_Text_WallyIDidIt
.Lbatch81_text_start_gText_Rom_1E6992: @ 0x081E6992
	.string "ミツル『やった…… ぼくの……\nぼくの ポケモンだ……!!{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_1E6992) > 0x1e
	.error ".Lbatch81_text_start_gText_Rom_1E6992 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_1E6992) < 0x1e
	.space 0x1e - (. - .Lbatch81_text_start_gText_Rom_1E6992)
	.endif
