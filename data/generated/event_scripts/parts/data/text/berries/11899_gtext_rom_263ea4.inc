	@ data/text/berries.inc:183 Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers
	.globl gText_Rom_263EA4
gText_Rom_263EA4: @ 0x08263EA4
	.string "おねーちゃんたちを みならって\nがんばって おはなを そだててるの\pはい! これあげる!$"
	.if (. - gText_Rom_263EA4) > 0x2d
	.error "gText_Rom_263EA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263EA4) < 0x2d
	.space 0x2d - (. - gText_Rom_263EA4)
	.endif
