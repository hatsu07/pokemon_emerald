	@ data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc:205 LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney
	.globl gText_Rom_20B175
gText_Rom_20B175: @ 0x0820B175
	.string "おかねが たりない!$"
	.if (. - gText_Rom_20B175) > 0xb
	.error "gText_Rom_20B175 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B175) < 0xb
	.space 0xb - (. - gText_Rom_20B175)
	.endif
