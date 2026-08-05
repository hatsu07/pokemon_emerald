	@ data/maps/RustboroCity_Gym/scripts.inc:159 RustboroCity_Gym_Text_TommyPostBattle
	.globl gText_Rom_20269A
gText_Rom_20269A: @ 0x0820269A
	.string "ツツジさんは ボクの すうばい つよい!\nゆだん しない ほうが いいよ!$"
	.if (. - gText_Rom_20269A) > 0x26
	.error "gText_Rom_20269A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20269A) < 0x26
	.space 0x26 - (. - gText_Rom_20269A)
	.endif
