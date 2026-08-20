	@ data/maps/MossdeepCity_Gym/scripts.inc:387 MossdeepCity_Gym_Text_VirgilIntro (+1 aliases)
	.globl gText_Rom_20B95C
gText_Rom_20B95C: @ 0x0820B95C
	.string "キミの さいのうを みせて もらおうか!{EOS}"
	.if (. - gText_Rom_20B95C) > 0x15
	.error "gText_Rom_20B95C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B95C) < 0x15
	.space 0x15 - (. - gText_Rom_20B95C)
	.endif
