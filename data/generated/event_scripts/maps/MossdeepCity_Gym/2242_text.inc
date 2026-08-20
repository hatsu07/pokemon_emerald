	@ data/maps/MossdeepCity_Gym/scripts.inc:450 MossdeepCity_Gym_Text_KathleenIntro (+1 aliases)
	.globl gText_Rom_20BCF5
gText_Rom_20BCF5: @ 0x0820BCF5
	.string "おそろしいめに あわせて やろうかーっ!{EOS}"
	.if (. - gText_Rom_20BCF5) > 0x15
	.error "gText_Rom_20BCF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BCF5) < 0x15
	.space 0x15 - (. - gText_Rom_20BCF5)
	.endif
