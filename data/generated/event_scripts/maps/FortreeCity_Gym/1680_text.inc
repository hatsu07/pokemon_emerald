	@ data/maps/FortreeCity_Gym/scripts.inc:275 FortreeCity_Gym_Text_WinonaPostBattle
	.globl gText_Rom_204A73
gText_Rom_204A73: @ 0x08204A73
	.string "あなたには まけました けど\pわたしは これからも\nとりポケモンに こだわって いきます{EOS}"
	.if (. - gText_Rom_204A73) > 0x2d
	.error "gText_Rom_204A73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204A73) < 0x2d
	.space 0x2d - (. - gText_Rom_204A73)
	.endif
