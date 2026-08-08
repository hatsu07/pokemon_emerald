	@ data/maps/LilycoveCity_DepartmentStore_4F/scripts.inc:52 LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM
	.globl gText_Rom_20ABB4
gText_Rom_20ABB4: @ 0x0820ABB4
	.string "うむむ……\pこうげきの わざ か……\nまもりの わざ か……\pどの わざマシンを\nポケモンに おぼえさせるか なやむ……$"
	.if (. - gText_Rom_20ABB4) > 0x3d
	.error "gText_Rom_20ABB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ABB4) < 0x3d
	.space 0x3d - (. - gText_Rom_20ABB4)
	.endif
