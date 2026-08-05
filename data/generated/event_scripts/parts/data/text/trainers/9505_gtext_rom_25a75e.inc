	@ data/text/trainers.inc:413 Route106_Text_DouglasPostBattle
	.globl gText_Rom_25A75E
gText_Rom_25A75E: @ 0x0825A75E
	.string "すいえいの きょうそうなら まけないのに……$"
	.if (. - gText_Rom_25A75E) > 0x17
	.error "gText_Rom_25A75E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A75E) < 0x17
	.space 0x17 - (. - gText_Rom_25A75E)
	.endif
