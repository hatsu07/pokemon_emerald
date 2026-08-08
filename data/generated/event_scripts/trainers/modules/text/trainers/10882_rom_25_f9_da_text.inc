	@ data/text/trainers.inc:2405 Route123_Text_BraxtonIntro (+1 aliases)
	.globl gText_Rom_25F9DA
gText_Rom_25F9DA: @ 0x0825F9DA
	.string "たくさん ジムの バッジを\nもっている みたいだね!\pほんとうに それだけの ちからが あるか\nたしかめさせて もらうよ!$"
	.if (. - gText_Rom_25F9DA) > 0x3e
	.error "gText_Rom_25F9DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F9DA) < 0x3e
	.space 0x3e - (. - gText_Rom_25F9DA)
	.endif
