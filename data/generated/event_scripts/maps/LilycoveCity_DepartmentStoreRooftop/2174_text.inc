	@ data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc:187 LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales
	.globl gText_Rom_20B0AF
gText_Rom_20B0AF: @ 0x0820B0AF
	.string "ほりだしものいち……\nいつ やるのか きまって ないのかな?\pテレビ みてても\nぜんぜん コマーシャル ないんだよね{EOS}"
	.if (. - gText_Rom_20B0AF) > 0x3b
	.error "gText_Rom_20B0AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B0AF) < 0x3b
	.space 0x3b - (. - gText_Rom_20B0AF)
	.endif
