	@ data/maps/LilycoveCity_DepartmentStore_2F/scripts.inc:68 LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband
	.globl gText_Rom_20A9C7
gText_Rom_20A9C7: @ 0x0820A9C7
	.string "いえで まってる ダンナの\nおみやげ なんだけど どれが いいかしら?{EOS}"
	.if (. - gText_Rom_20A9C7) > 0x24
	.error "gText_Rom_20A9C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A9C7) < 0x24
	.space 0x24 - (. - gText_Rom_20A9C7)
	.endif
