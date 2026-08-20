	@ data/maps/LittlerootTown/scripts.inc:970 LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut
	.globl gText_Rom_1E45BC
gText_Rom_1E45BC: @ 0x081E45BC
	.string "あの あの あのね!\pここから さきの どうろ\nくさむらに はいると\lやせいの ポケモンが でてくるの!{EOS}"
	.if (. - gText_Rom_1E45BC) > 0x35
	.error "gText_Rom_1E45BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E45BC) < 0x35
	.space 0x35 - (. - gText_Rom_1E45BC)
	.endif
