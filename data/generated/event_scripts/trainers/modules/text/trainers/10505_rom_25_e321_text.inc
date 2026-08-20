	@ data/text/trainers.inc:1850 Route118_Text_RoseIntro (+1 aliases)
	.globl gText_Rom_25E321
gText_Rom_25E321: @ 0x0825E321
	.string "はなの かおりは ふしぎな ちから\nからだも こころも きれいに なるわ{EOS}"
	.if (. - gText_Rom_25E321) > 0x25
	.error "gText_Rom_25E321 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E321) < 0x25
	.space 0x25 - (. - gText_Rom_25E321)
	.endif
