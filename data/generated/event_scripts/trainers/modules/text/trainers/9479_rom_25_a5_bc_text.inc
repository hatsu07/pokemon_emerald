	@ data/text/trainers.inc:374 Route105_Text_JosuePostBattle
	.globl gText_Rom_25A5BC
gText_Rom_25A5BC: @ 0x0825A5BC
	.string "やっぱりさ おれには\nうみより そらが にあってるんだよ$"
	.if (. - gText_Rom_25A5BC) > 0x1d
	.error "gText_Rom_25A5BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A5BC) < 0x1d
	.space 0x1d - (. - gText_Rom_25A5BC)
	.endif
