	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:108 SootopolisCity_Gym_B1F_Text_TiffanyIntro (+1 aliases)
	.globl gText_Rom_20EE44
gText_Rom_20EE44: @ 0x0820EE44
	.string "こおりの うえでの ひとふでがき\pそれが できる トレーナーは\nエレガントに うつくしいのよ!$"
	.if (. - gText_Rom_20EE44) > 0x30
	.error "gText_Rom_20EE44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EE44) < 0x30
	.space 0x30 - (. - gText_Rom_20EE44)
	.endif
