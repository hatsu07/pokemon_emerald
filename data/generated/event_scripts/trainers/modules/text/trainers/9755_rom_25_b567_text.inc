	@ data/text/trainers.inc:776 Route110_Text_AbigailRegister
	.globl gText_Rom_25B567
gText_Rom_25B567: @ 0x0825B567
	.string "あなた きにいったわ!\nまた サイクリングロードで たたかいましょ{EOS}"
	.if (. - gText_Rom_25B567) > 0x22
	.error "gText_Rom_25B567 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B567) < 0x22
	.space 0x22 - (. - gText_Rom_25B567)
	.endif
