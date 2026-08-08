	@ data/text/trainers.inc:1106 Route112_Text_TrentPostBattle
	.globl gText_Rom_25C360
gText_Rom_25C360: @ 0x0825C360
	.string "なんじゅっキロも ある にもつを せおって\nやまみちを あるき つづけるんだ\lからだが じょうぶに なるぞ!$"
	.if (. - gText_Rom_25C360) > 0x37
	.error "gText_Rom_25C360 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C360) < 0x37
	.space 0x37 - (. - gText_Rom_25C360)
	.endif
