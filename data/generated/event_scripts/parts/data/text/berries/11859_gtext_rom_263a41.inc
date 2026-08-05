	@ data/text/berries.inc:70 Route120_Text_IllGetMoreBerriesFromBerryMaster
	.globl gText_Rom_263A41
gText_Rom_263A41: @ 0x08263A41
	.string "また きのみめいじんに もらって こようっと$"
	.if (. - gText_Rom_263A41) > 0x17
	.error "gText_Rom_263A41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263A41) < 0x17
	.space 0x17 - (. - gText_Rom_263A41)
	.endif
