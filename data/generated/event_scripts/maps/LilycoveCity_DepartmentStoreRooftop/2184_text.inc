	@ data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc:202 LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown
	.globl gText_Rom_20B159
gText_Rom_20B159: @ 0x0820B159
	.string "ガゴン!\pあたりだ! もういっぽん\n{STR_VAR_1}が でてきた!$"
	.if (. - gText_Rom_20B159) > 0x1c
	.error "gText_Rom_20B159 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B159) < 0x1c
	.space 0x1c - (. - gText_Rom_20B159)
	.endif
