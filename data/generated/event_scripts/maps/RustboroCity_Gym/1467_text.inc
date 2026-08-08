	@ data/maps/RustboroCity_Gym/scripts.inc:223 RustboroCity_Gym_Text_RoxannePostBattle
	.globl gText_Rom_20295A
gText_Rom_20295A: @ 0x0820295A
	.string "それだけ つよいなら\nほかの ポケモンジムにも\lちょうせん したら どうかしら?\pおおくの トレーナーと\nしょうぶを することで\lさまざまなこと まなべるはずよ$"
	.if (. - gText_Rom_20295A) > 0x51
	.error "gText_Rom_20295A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20295A) < 0x51
	.space 0x51 - (. - gText_Rom_20295A)
	.endif
