	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:147 LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture
	.globl gText_Rom_20A7BC
gText_Rom_20A7BC: @ 0x0820A7BC
	.string "きょうは すてきな かぐを\nおかあさんに かって もらうの{EOS}"
	.if (. - gText_Rom_20A7BC) > 0x1e
	.error "gText_Rom_20A7BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A7BC) < 0x1e
	.space 0x1e - (. - gText_Rom_20A7BC)
	.endif
