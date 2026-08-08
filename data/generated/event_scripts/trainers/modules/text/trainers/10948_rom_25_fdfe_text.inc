	@ data/text/trainers.inc:2507 Route123_Text_FernandoRegister
	.globl gText_Rom_25FDFE
gText_Rom_25FDFE: @ 0x0825FDFE
	.string "こんど あった ときには\nフルコーラス きいて くれヨ!$"
	.if (. - gText_Rom_25FDFE) > 0x1d
	.error "gText_Rom_25FDFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FDFE) < 0x1d
	.space 0x1d - (. - gText_Rom_25FDFE)
	.endif
