	@ data/maps/FortreeCity_Gym/scripts.inc:152 FortreeCity_Gym_Text_JaredIntro (+1 aliases)
	.globl gText_Rom_20461B
gText_Rom_20461B: @ 0x0820461B
	.string "かれいな とりポケモンの たたかいを\nみせて やるぜっ!{EOS}"
	.if (. - gText_Rom_20461B) > 0x1d
	.error "gText_Rom_20461B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20461B) < 0x1d
	.space 0x1d - (. - gText_Rom_20461B)
	.endif
