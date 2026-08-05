	@ data/text/trainers.inc:1970 Route119_Text_DougPostBattle
	.globl gText_Rom_25E7CF
gText_Rom_25E7CF: @ 0x0825E7CF
	.string "ボクらは モノマネサークル!\nたのしんで もらえたかな?$"
	.if (. - gText_Rom_25E7CF) > 0x1d
	.error "gText_Rom_25E7CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E7CF) < 0x1d
	.space 0x1d - (. - gText_Rom_25E7CF)
	.endif
