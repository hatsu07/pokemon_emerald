	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:72 SootopolisCity_Gym_B1F_Text_DaphneIntro (+1 aliases)
	.globl gText_Rom_20EC6E
gText_Rom_20EC6E: @ 0x0820EC6E
	.string "アダンさまの たたかう すがた……\pその うつくしさに こころ うばわれ\nわたくしも ポケモンを はじめましてよ{EOS}"
	.if (. - gText_Rom_20EC6E) > 0x39
	.error "gText_Rom_20EC6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EC6E) < 0x39
	.space 0x39 - (. - gText_Rom_20EC6E)
	.endif
