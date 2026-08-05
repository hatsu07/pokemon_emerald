	@ data/text/berries.inc:162 Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness
	.globl gText_Rom_263DCA
gText_Rom_263DCA: @ 0x08263DCA
	.string "おはなって とっても しあわせな きぶんに\nしてくれるよね$"
	.if (. - gText_Rom_263DCA) > 0x1e
	.error "gText_Rom_263DCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263DCA) < 0x1e
	.space 0x1e - (. - gText_Rom_263DCA)
	.endif
