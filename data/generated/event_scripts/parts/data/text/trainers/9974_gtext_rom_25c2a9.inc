	@ data/text/trainers.inc:1085 Route111_Text_BiancaDefeat (+1 aliases)
	.globl gText_Rom_25C2A9
gText_Rom_25C2A9: @ 0x0825C2A9
	.string "あらら すごいんだー$"
	.if (. - gText_Rom_25C2A9) > 0xb
	.error "gText_Rom_25C2A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C2A9) < 0xb
	.space 0xb - (. - gText_Rom_25C2A9)
	.endif
