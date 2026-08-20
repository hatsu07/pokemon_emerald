	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:203 SootopolisCity_Gym_1F_Text_RegisteredJuan
	.globl gText_Rom_20E80C
gText_Rom_20E80C: @ 0x0820E80C
	.string "ジムリーダー アダンを\nポケナビに とうろく した!{EOS}"
	.if (. - gText_Rom_20E80C) > 0x1b
	.error "gText_Rom_20E80C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E80C) < 0x1b
	.space 0x1b - (. - gText_Rom_20E80C)
	.endif
