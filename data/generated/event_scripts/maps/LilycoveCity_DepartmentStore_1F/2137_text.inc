	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:150 LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill
	.globl gText_Rom_20A7DA
gText_Rom_20A7DA: @ 0x0820A7DA
	.string "コンテストで ゆうしょうした ごほうびに\nマリルリに なにか かって あげるんだよ！$"
	.if (. - gText_Rom_20A7DA) > 0x2b
	.error "gText_Rom_20A7DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A7DA) < 0x2b
	.space 0x2b - (. - gText_Rom_20A7DA)
	.endif
