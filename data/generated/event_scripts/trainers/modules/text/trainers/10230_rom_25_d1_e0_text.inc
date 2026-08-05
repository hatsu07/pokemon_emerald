	@ data/text/trainers.inc:1457 Route115_Text_KoichiDefeat (+1 aliases)
	.globl gText_Rom_25D1E0
gText_Rom_25D1E0: @ 0x0825D1E0
	.string "いててててっ!$"
	.if (. - gText_Rom_25D1E0) > 0x8
	.error "gText_Rom_25D1E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D1E0) < 0x8
	.space 0x8 - (. - gText_Rom_25D1E0)
	.endif
