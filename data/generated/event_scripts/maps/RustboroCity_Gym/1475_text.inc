	@ data/maps/RustboroCity_Gym/scripts.inc:255 RustboroCity_Gym_Text_RegisteredRoxanne
	.globl gText_Rom_202AB0
gText_Rom_202AB0: @ 0x08202AB0
	.string "ジムリーダー ツツジを\nポケナビに とうろく した!$"
	.if (. - gText_Rom_202AB0) > 0x1b
	.error "gText_Rom_202AB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202AB0) < 0x1b
	.space 0x1b - (. - gText_Rom_202AB0)
	.endif
