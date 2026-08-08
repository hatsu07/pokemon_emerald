	@ data/maps/RustboroCity_House3/scripts.inc:23 RustboroCity_House3_Text_IGivePerfectlySuitedNicknames
	.globl gText_Rom_20413D
gText_Rom_20413D: @ 0x0820413D
	.string "じぶんの ポケモンには\nぴったりの ニックネームを つけるんじゃ\lいわゆる おりじなりてぃ じゃ!$"
	.if (. - gText_Rom_20413D) > 0x32
	.error "gText_Rom_20413D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20413D) < 0x32
	.space 0x32 - (. - gText_Rom_20413D)
	.endif
