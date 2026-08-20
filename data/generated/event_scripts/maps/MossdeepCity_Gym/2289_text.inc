	@ data/maps/MossdeepCity_Gym/scripts.inc:519 MossdeepCity_Gym_Text_TateAndLizaRematchDefeat (+1 aliases)
	.globl gText_Rom_20C21E
gText_Rom_20C21E: @ 0x0820C21E
	.string "フウ『きみと ポケモンって\nラン『まるで きょうだい みたい!{EOS}"
	.if (. - gText_Rom_20C21E) > 0x20
	.error "gText_Rom_20C21E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C21E) < 0x20
	.space 0x20 - (. - gText_Rom_20C21E)
	.endif
