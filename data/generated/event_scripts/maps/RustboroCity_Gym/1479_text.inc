	@ data/maps/RustboroCity_Gym/scripts.inc:267 RustboroCity_Gym_Text_RoxanneRematchDefeat (+1 aliases)
	.globl gText_Rom_202B2A
gText_Rom_202B2A: @ 0x08202B2A
	.string "くうぅ……\nまたしても わたくしの まけ……$"
	.if (. - gText_Rom_202B2A) > 0x17
	.error "gText_Rom_202B2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202B2A) < 0x17
	.space 0x17 - (. - gText_Rom_202B2A)
	.endif
