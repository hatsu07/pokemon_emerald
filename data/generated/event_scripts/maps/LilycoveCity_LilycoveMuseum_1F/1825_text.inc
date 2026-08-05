	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:218 LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable
	.globl gText_Rom_2060B6
gText_Rom_2060B6: @ 0x082060B6
	.string "この ポケモン かわいいわ!\nうちの ぼうや みたい!$"
	.if (. - gText_Rom_2060B6) > 0x1c
	.error "gText_Rom_2060B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2060B6) < 0x1c
	.space 0x1c - (. - gText_Rom_2060B6)
	.endif
