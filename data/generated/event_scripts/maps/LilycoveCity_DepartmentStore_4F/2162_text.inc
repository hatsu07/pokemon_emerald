	@ data/maps/LilycoveCity_DepartmentStore_4F/scripts.inc:55 LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs
	.globl gText_Rom_20ABF1
gText_Rom_20ABF1: @ 0x0820ABF1
	.string "わざマシンって たくさん あるのね!\pなにかの カタログには\nぜんぶで 50しゅるい って\lかいて あったわ{EOS}"
	.if (. - gText_Rom_20ABF1) > 0x37
	.error "gText_Rom_20ABF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ABF1) < 0x37
	.space 0x37 - (. - gText_Rom_20ABF1)
	.endif
