	@ src/strings.c:161 gText_NoPokemon
	.globl gText_Rom_5C9472
gText_Rom_5C9472: @ 0x085C9472
	.string "ポケモンが いませんよ!$"
	.if (. - gText_Rom_5C9472) > 0xd
	.error "gText_Rom_5C9472 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9472) < 0xd
	.space 0xd - (. - gText_Rom_5C9472)
	.endif
