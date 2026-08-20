	@ data/text/trainers.inc:476 Route107_Text_LisaDefeated (+1 aliases)
	.globl gText_Rom_25AA08
gText_Rom_25AA08: @ 0x0825AA08
	.string "ユミ『すごいわ\nつよさの レベルが ちがうのね{EOS}"
	.if (. - gText_Rom_25AA08) > 0x18
	.error "gText_Rom_25AA08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AA08) < 0x18
	.space 0x18 - (. - gText_Rom_25AA08)
	.endif
