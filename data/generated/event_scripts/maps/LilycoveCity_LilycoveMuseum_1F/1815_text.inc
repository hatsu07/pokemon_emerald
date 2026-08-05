	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:203 LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText
	.globl gText_Rom_205FE8
gText_Rom_205FE8: @ 0x08205FE8
	.string "ポケモンの すがたと しらない もじが\nこまかく ほられてある せきばんだ!$"
	.if (. - gText_Rom_205FE8) > 0x27
	.error "gText_Rom_205FE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205FE8) < 0x27
	.space 0x27 - (. - gText_Rom_205FE8)
	.endif
