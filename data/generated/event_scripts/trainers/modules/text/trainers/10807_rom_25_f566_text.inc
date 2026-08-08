	@ data/text/trainers.inc:2294 Route121_Text_KateIntro (+1 aliases)
	.globl gText_Rom_25F566
gText_Rom_25F566: @ 0x0825F566
	.string "マナ『ふたり そろえば こわいもの なし!\nあたしたちの つよさ みせつけちゃうから!$"
	.if (. - gText_Rom_25F566) > 0x2c
	.error "gText_Rom_25F566 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F566) < 0x2c
	.space 0x2c - (. - gText_Rom_25F566)
	.endif
