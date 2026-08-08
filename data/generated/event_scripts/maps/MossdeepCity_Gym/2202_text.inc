	@ data/maps/MossdeepCity_Gym/scripts.inc:390 MossdeepCity_Gym_Text_VirgilDefeat (+1 aliases)
	.globl gText_Rom_20B971
gText_Rom_20B971: @ 0x0820B971
	.string "すばらしい さいのうの もちぬしだ!$"
	.if (. - gText_Rom_20B971) > 0x13
	.error "gText_Rom_20B971 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B971) < 0x13
	.space 0x13 - (. - gText_Rom_20B971)
	.endif
