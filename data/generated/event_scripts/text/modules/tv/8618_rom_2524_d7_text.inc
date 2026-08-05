	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+31 aliases)
	.globl gText_Rom_2524D7
gText_Rom_2524D7: @ 0x082524D7
	.string "レポーター『そうです！\nチャレンジは　たいせつです\pテレビの　まえの　みなさんも　なんどでも\nサファリに　チャレンジ　しましょう！\pでは　また！$"
	.if (. - gText_Rom_2524D7) > 0x49
	.error "gText_Rom_2524D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2524D7) < 0x49
	.space 0x49 - (. - gText_Rom_2524D7)
	.endif
