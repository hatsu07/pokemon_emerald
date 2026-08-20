	@ data/maps/Route110/scripts.inc:913 Route110_Text_CyclingRoadSign
	.globl gText_Rom_1E9E5D
gText_Rom_1E9E5D: @ 0x081E9E5D
	.string "「シーサイド サイクリング ロード」{EOS}"
	.if (. - gText_Rom_1E9E5D) > 0x13
	.error "gText_Rom_1E9E5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9E5D) < 0x13
	.space 0x13 - (. - gText_Rom_1E9E5D)
	.endif
