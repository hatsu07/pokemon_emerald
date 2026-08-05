	@ data/text/trainers.inc:836 Route110_Text_DaleIntro (+1 aliases)
	.globl gText_Rom_25B7EC
gText_Rom_25B7EC: @ 0x0825B7EC
	.string "ええーい!\nうしろから はなしかけるなー!$"
	.if (. - gText_Rom_25B7EC) > 0x16
	.error "gText_Rom_25B7EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B7EC) < 0x16
	.space 0x16 - (. - gText_Rom_25B7EC)
	.endif
