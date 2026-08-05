	@ data/maps/RustboroCity/scripts.inc:1082 RustboroCity_Text_TradePokemonGrowFast
	.globl gText_Rom_1DF56D
gText_Rom_1DF56D: @ 0x081DF56D
	.string "ひとと こうかんした ポケモンは\nそだつのが はやい!\p……でも ジムバッジを もっていないと\nいうことを きいて くれないんだ$"
	.if (. - gText_Rom_1DF56D) > 0x41
	.error "gText_Rom_1DF56D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF56D) < 0x41
	.space 0x41 - (. - gText_Rom_1DF56D)
	.endif
