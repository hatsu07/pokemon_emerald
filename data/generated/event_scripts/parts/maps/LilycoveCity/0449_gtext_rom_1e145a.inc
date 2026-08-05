	@ data/maps/LilycoveCity/scripts.inc:737 LilycoveCity_Text_SawTallTowerOnRoute131
	.globl gText_Rom_1E145A
gText_Rom_1E145A: @ 0x081E145A
	.string "オレな 131ばん すいどうの あたりで\nたかーい とうを みたんだけど\lもしかして それって……?$"
	.if (. - gText_Rom_1E145A) > 0x33
	.error "gText_Rom_1E145A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E145A) < 0x33
	.space 0x33 - (. - gText_Rom_1E145A)
	.endif
