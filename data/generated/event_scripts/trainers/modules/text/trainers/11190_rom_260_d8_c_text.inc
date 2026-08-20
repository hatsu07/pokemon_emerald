	@ data/text/trainers.inc:2867 Route126_Text_LeonardoDefeat (+1 aliases)
	.globl gText_Rom_260D8C
gText_Rom_260D8C: @ 0x08260D8C
	.string "てへっ よくばりすぎちゃ ダメだよな{EOS}"
	.if (. - gText_Rom_260D8C) > 0x13
	.error "gText_Rom_260D8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260D8C) < 0x13
	.space 0x13 - (. - gText_Rom_260D8C)
	.endif
