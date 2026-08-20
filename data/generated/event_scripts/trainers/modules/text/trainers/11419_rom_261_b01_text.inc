	@ data/text/trainers.inc:3206 Route131_Text_KevinDefeat (+1 aliases)
	.globl gText_Rom_261B01
gText_Rom_261B01: @ 0x08261B01
	.string "あ……っ{EOS}"
	.if (. - gText_Rom_261B01) > 0x5
	.error "gText_Rom_261B01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261B01) < 0x5
	.space 0x5 - (. - gText_Rom_261B01)
	.endif
