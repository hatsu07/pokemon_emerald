	@ data/maps/MossdeepCity_Gym/scripts.inc:378 MossdeepCity_Gym_Text_PrestonIntro (+1 aliases)
	.globl gText_Rom_20B905
gText_Rom_20B905: @ 0x0820B905
	.string "しょうぶは こころの つよさで きまる\nこころ よわき ものは かてない!{EOS}"
	.if (. - gText_Rom_20B905) > 0x26
	.error "gText_Rom_20B905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B905) < 0x26
	.space 0x26 - (. - gText_Rom_20B905)
	.endif
