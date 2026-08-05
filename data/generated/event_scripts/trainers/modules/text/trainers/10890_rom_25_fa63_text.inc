	@ data/text/trainers.inc:2417 Route123_Text_VioletDefeat (+1 aliases)
	.globl gText_Rom_25FA63
gText_Rom_25FA63: @ 0x0825FA63
	.string "あぁ\nかなしみの におい だわ……$"
	.if (. - gText_Rom_25FA63) > 0x12
	.error "gText_Rom_25FA63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA63) < 0x12
	.space 0x12 - (. - gText_Rom_25FA63)
	.endif
