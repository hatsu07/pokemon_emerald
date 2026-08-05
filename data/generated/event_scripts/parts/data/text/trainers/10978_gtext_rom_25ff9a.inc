	@ data/text/trainers.inc:2552 Route123_Text_AlbertoPostBattle
	.globl gText_Rom_25FF9A
gText_Rom_25FF9A: @ 0x0825FF9A
	.string "しょうぶの あいだに ちらばった\nとりポケモンの ハネを あつめて\lぼうしを つくる つもりなんだ!$"
	.if (. - gText_Rom_25FF9A) > 0x33
	.error "gText_Rom_25FF9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FF9A) < 0x33
	.space 0x33 - (. - gText_Rom_25FF9A)
	.endif
