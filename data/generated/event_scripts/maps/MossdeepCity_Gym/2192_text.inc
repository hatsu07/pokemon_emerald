	@ data/maps/MossdeepCity_Gym/scripts.inc:375 MossdeepCity_Gym_Text_GymGuidePostVictory
	.globl gText_Rom_20B8E9
gText_Rom_20B8E9: @ 0x0820B8E9
	.string "こりゃあ たまげた!!\nきみは すごか トレーナーだ!{EOS}"
	.if (. - gText_Rom_20B8E9) > 0x1c
	.error "gText_Rom_20B8E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B8E9) < 0x1c
	.space 0x1c - (. - gText_Rom_20B8E9)
	.endif
