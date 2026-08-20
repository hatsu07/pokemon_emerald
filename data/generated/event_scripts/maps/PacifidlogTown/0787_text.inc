	@ data/maps/PacifidlogTown/scripts.inc:33 PacifidlogTown_Text_NeatHousesOnWater
	.globl gText_Rom_1E63F7
gText_Rom_1E63F7: @ 0x081E63F7
	.string "ね! ね! すごいでしょ!\nみずの うえに おうちが たってるの!\pぼく ここで うまれたんだよ!{EOS}"
	.if (. - gText_Rom_1E63F7) > 0x32
	.error "gText_Rom_1E63F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E63F7) < 0x32
	.space 0x32 - (. - gText_Rom_1E63F7)
	.endif
