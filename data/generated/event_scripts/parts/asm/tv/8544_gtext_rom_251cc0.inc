	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251CC0
gText_Rom_251CC0: @ 0x08251CC0
	.string "ガラスのオブジェを　みています……\pあっ！\pさわっちゃいました……\pしもんを　ペタペタ　つけています$"
	.if (. - gText_Rom_251CC0) > 0x33
	.error "gText_Rom_251CC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251CC0) < 0x33
	.space 0x33 - (. - gText_Rom_251CC0)
	.endif
