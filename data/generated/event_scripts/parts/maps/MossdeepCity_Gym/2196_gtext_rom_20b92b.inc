	@ data/maps/MossdeepCity_Gym/scripts.inc:381 MossdeepCity_Gym_Text_PrestonDefeat (+1 aliases)
	.globl gText_Rom_20B92B
gText_Rom_20B92B: @ 0x0820B92B
	.string "まけたか!\nオレも きたえ なおさねばっ!$"
	.if (. - gText_Rom_20B92B) > 0x16
	.error "gText_Rom_20B92B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B92B) < 0x16
	.space 0x16 - (. - gText_Rom_20B92B)
	.endif
