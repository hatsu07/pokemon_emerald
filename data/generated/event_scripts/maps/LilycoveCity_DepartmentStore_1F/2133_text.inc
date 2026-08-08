	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:144 LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings
	.globl gText_Rom_20A799
gText_Rom_20A799: @ 0x0820A799
	.string "デパートに くると たのしくなって\nいろんな ものを かっちゃうのよ$"
	.if (. - gText_Rom_20A799) > 0x23
	.error "gText_Rom_20A799 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A799) < 0x23
	.space 0x23 - (. - gText_Rom_20A799)
	.endif
