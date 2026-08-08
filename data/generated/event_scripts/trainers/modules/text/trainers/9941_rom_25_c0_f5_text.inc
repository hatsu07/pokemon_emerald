	@ data/text/trainers.inc:1037 Route111_Text_BryanIntro (+1 aliases)
	.globl gText_Rom_25C0F5
gText_Rom_25C0F5: @ 0x0825C0F5
	.string "きみの つよさは どのくらいか?\nその ナゾを ときあかそう!$"
	.if (. - gText_Rom_25C0F5) > 0x20
	.error "gText_Rom_25C0F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C0F5) < 0x20
	.space 0x20 - (. - gText_Rom_25C0F5)
	.endif
