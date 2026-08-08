	@ data/maps/FortreeCity_Gym/scripts.inc:207 FortreeCity_Gym_Text_HumbertoIntro (+1 aliases)
	.globl gText_Rom_2047EA
gText_Rom_2047EA: @ 0x082047EA
	.string "ナギさまが たたかわれる ときの\nあの りりしい おかお……\pおまえ なんかにゃ みせられないぜ!$"
	.if (. - gText_Rom_2047EA) > 0x32
	.error "gText_Rom_2047EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2047EA) < 0x32
	.space 0x32 - (. - gText_Rom_2047EA)
	.endif
