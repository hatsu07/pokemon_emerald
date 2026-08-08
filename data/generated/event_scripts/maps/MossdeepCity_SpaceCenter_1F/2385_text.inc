	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:314 MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind
	.globl gText_Rom_20D357
gText_Rom_20D357: @ 0x0820D357
	.string "でっかい てつの かたまりが\nおおぞらを つきぬけ\lうちゅうまで とんで いく……\pたまげた もん だわい$"
	.if (. - gText_Rom_20D357) > 0x36
	.error "gText_Rom_20D357 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D357) < 0x36
	.space 0x36 - (. - gText_Rom_20D357)
	.endif
