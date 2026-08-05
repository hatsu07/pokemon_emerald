	@ data/text/trainers.inc:1046 Route111_Text_BrandenIntro (+1 aliases)
	.globl gText_Rom_25C141
gText_Rom_25C141: @ 0x0825C141
	.string "ぼくに まけて くれたら\nサンドイッチ わけて あげるよ!$"
	.if (. - gText_Rom_25C141) > 0x1e
	.error "gText_Rom_25C141 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C141) < 0x1e
	.space 0x1e - (. - gText_Rom_25C141)
	.endif
