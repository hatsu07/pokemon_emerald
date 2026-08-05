	@ src/strings.c:60 gText_PokedexRegistration
	.globl gText_Rom_5C8FE7
gText_Rom_5C8FE7: @ 0x085C8FE7
	.string "ポケモンずかんの とうろく かんりょう!$"
	.if (. - gText_Rom_5C8FE7) > 0x15
	.error "gText_Rom_5C8FE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FE7) < 0x15
	.space 0x15 - (. - gText_Rom_5C8FE7)
	.endif
