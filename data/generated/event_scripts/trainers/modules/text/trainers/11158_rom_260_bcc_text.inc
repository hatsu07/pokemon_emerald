	@ data/text/trainers.inc:2819 Route126_Text_DeanDefeat (+1 aliases)
	.globl gText_Rom_260BCC
gText_Rom_260BCC: @ 0x08260BCC
	.string "やられたか!?$"
	.if (. - gText_Rom_260BCC) > 0x8
	.error "gText_Rom_260BCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260BCC) < 0x8
	.space 0x8 - (. - gText_Rom_260BCC)
	.endif
