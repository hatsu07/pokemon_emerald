	@ data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc:193 LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty
	.globl gText_Rom_20B120
gText_Rom_20B120: @ 0x0820B120
	.string "ああ のどが かわいたなあ{EOS}"
	.if (. - gText_Rom_20B120) > 0xe
	.error "gText_Rom_20B120 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B120) < 0xe
	.space 0xe - (. - gText_Rom_20B120)
	.endif
