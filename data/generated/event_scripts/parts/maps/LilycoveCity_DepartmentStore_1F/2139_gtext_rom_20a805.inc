	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:153 LilycoveCity_DepartmentStore_1F_Text_Azumarill
	.globl gText_Rom_20A805
gText_Rom_20A805: @ 0x0820A805
	.string "マリルリ『まりりるぅー！$"
	.if (. - gText_Rom_20A805) > 0xd
	.error "gText_Rom_20A805 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A805) < 0xd
	.space 0xd - (. - gText_Rom_20A805)
	.endif
