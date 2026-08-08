	@ data/maps/Route110/scripts.inc:927 Route110_Text_SeasideParkingSign
	.globl gText_Rom_1E9EDD
gText_Rom_1E9EDD: @ 0x081E9EDD
	.string "「シーサイド パーキング」$"
	.if (. - gText_Rom_1E9EDD) > 0xe
	.error "gText_Rom_1E9EDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9EDD) < 0xe
	.space 0xe - (. - gText_Rom_1E9EDD)
	.endif
