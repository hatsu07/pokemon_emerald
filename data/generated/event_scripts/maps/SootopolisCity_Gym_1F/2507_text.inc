	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:200 SootopolisCity_Gym_1F_Text_ExplainWaterPulse
	.globl gText_Rom_20E7C1
gText_Rom_20E7C1: @ 0x0820E7C1
	.string "ユーに わたした その わざマシン\nなかみは みずのはどう\pつかうと ときおり ちょうおんぱで\nあいてを こんらん させるのです!\p…… …… ……$"
	.if (. - gText_Rom_20E7C1) > 0x4b
	.error "gText_Rom_20E7C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E7C1) < 0x4b
	.space 0x4b - (. - gText_Rom_20E7C1)
	.endif
