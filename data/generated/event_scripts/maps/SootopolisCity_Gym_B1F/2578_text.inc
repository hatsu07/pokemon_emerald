	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:129 SootopolisCity_Gym_B1F_Text_AnnikaDefeat (+1 aliases)
	.globl gText_Rom_20EF0E
gText_Rom_20EF0E: @ 0x0820EF0E
	.string "ちょっと!\nポケモンちゃんも ちゃんと みてくれた?{EOS}"
	.if (. - gText_Rom_20EF0E) > 0x1b
	.error "gText_Rom_20EF0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EF0E) < 0x1b
	.space 0x1b - (. - gText_Rom_20EF0E)
	.endif
