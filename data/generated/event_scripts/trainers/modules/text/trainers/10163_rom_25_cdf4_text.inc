	@ data/text/trainers.inc:1349 Route114_Text_BerniePostBattle (+1 aliases)
	.globl gText_Rom_25CDF4
gText_Rom_25CDF4: @ 0x0825CDF4
	.string "ほんと ひのようじん だけは おこたるな!\nひを あまく みるんじゃないぜ!$"
	.if (. - gText_Rom_25CDF4) > 0x27
	.error "gText_Rom_25CDF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CDF4) < 0x27
	.space 0x27 - (. - gText_Rom_25CDF4)
	.endif
