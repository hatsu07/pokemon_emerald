	@ data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc:190 LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale
	.globl gText_Rom_20B0EA
gText_Rom_20B0EA: @ 0x0820B0EA
	.string "まちに まった ほりだしものいち!\nここでしか かえないもの ばかり!\lよーし たくさん かっちゃうぞお!$"
	.if (. - gText_Rom_20B0EA) > 0x36
	.error "gText_Rom_20B0EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B0EA) < 0x36
	.space 0x36 - (. - gText_Rom_20B0EA)
	.endif
