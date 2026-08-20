	@ data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc:199 LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown
	.globl gText_Rom_20B14A
gText_Rom_20B14A: @ 0x0820B14A
	.string "ガゴン!\p{STR_VAR_1}が でてきた!{EOS}"
	.if (. - gText_Rom_20B14A) > 0xf
	.error "gText_Rom_20B14A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B14A) < 0xf
	.space 0xf - (. - gText_Rom_20B14A)
	.endif
