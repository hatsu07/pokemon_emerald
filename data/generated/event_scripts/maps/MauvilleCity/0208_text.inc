	@ data/maps/MauvilleCity/scripts.inc:633 MauvilleCity_Text_PokemonCanJumpYouOnBike
	.globl gText_Rom_1DE578
gText_Rom_1DE578: @ 0x081DE578
	.string "じてんしゃに のっていても\nやせいの ポケモンは とびだしてくるよ!{EOS}"
	.if (. - gText_Rom_1DE578) > 0x23
	.error "gText_Rom_1DE578 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE578) < 0x23
	.space 0x23 - (. - gText_Rom_1DE578)
	.endif
