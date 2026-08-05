	@ data/text/berries.inc:139 Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries
	.globl gText_Rom_263CC6
gText_Rom_263CC6: @ 0x08263CC6
	.string "{PLAYER}{KUN} きのみの こと しりたい?$"
	.if (. - gText_Rom_263CC6) > 0x13
	.error "gText_Rom_263CC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263CC6) < 0x13
	.space 0x13 - (. - gText_Rom_263CC6)
	.endif
