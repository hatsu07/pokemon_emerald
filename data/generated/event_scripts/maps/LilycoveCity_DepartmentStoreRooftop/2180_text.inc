	@ data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc:196 LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
	.globl gText_Rom_20B12E
gText_Rom_20B12E: @ 0x0820B12E
	.string "じどう はんばいき がある!\nほしい のみもの は……{EOS}"
	.if (. - gText_Rom_20B12E) > 0x1c
	.error "gText_Rom_20B12E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B12E) < 0x1c
	.space 0x1c - (. - gText_Rom_20B12E)
	.endif
