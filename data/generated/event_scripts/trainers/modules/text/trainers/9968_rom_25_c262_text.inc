	@ data/text/trainers.inc:1076 Route111_Text_HaydenDefeat (+1 aliases)
	.globl gText_Rom_25C262
gText_Rom_25C262: @ 0x0825C262
	.string "ぐうぅ……{EOS}"
	.if (. - gText_Rom_25C262) > 0x6
	.error "gText_Rom_25C262 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C262) < 0x6
	.space 0x6 - (. - gText_Rom_25C262)
	.endif
