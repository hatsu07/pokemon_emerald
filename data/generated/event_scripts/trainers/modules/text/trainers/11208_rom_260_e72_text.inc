	@ data/text/trainers.inc:2894 Route127_Text_CamdenDefeat (+1 aliases)
	.globl gText_Rom_260E72
gText_Rom_260E72: @ 0x08260E72
	.string "あわわわわ……{EOS}"
	.if (. - gText_Rom_260E72) > 0x8
	.error "gText_Rom_260E72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260E72) < 0x8
	.space 0x8 - (. - gText_Rom_260E72)
	.endif
