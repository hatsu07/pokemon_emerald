	@ data/text/trainers.inc:1427 Route114_Text_AngelinaDefeat (+1 aliases)
	.globl gText_Rom_25D0A8
gText_Rom_25D0A8: @ 0x0825D0A8
	.string "ふーん\nなるほどね$"
	.if (. - gText_Rom_25D0A8) > 0xa
	.error "gText_Rom_25D0A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D0A8) < 0xa
	.space 0xa - (. - gText_Rom_25D0A8)
	.endif
