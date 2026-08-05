	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+31 aliases)
	.globl gText_Rom_25242B
gText_Rom_25242B: @ 0x0825242B
	.string "いちおう　ポロックは　{0xFD}{0x03}こ\nつかって　いましたけどね\pもう　ちょっと\nうでを　あげて　ほしいですねー$"
	.if (. - gText_Rom_25242B) > 0x34
	.error "gText_Rom_25242B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25242B) < 0x34
	.space 0x34 - (. - gText_Rom_25242B)
	.endif
