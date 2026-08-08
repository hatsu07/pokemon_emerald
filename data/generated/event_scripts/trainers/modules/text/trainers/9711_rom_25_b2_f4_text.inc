	@ data/text/trainers.inc:713 Route109_Text_HaileyDefeated (+1 aliases)
	.globl gText_Rom_25B2F4
gText_Rom_25B2F4: @ 0x0825B2F4
	.string "やっぱね!\nかてないって おもってたんだ$"
	.if (. - gText_Rom_25B2F4) > 0x15
	.error "gText_Rom_25B2F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B2F4) < 0x15
	.space 0x15 - (. - gText_Rom_25B2F4)
	.endif
