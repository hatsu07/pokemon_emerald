	@ data/maps/SlateportCity/scripts.inc:1221 SlateportCity_Text_OceanicMuseumSign
	.globl gText_Rom_1DD4F1
gText_Rom_1DD4F1: @ 0x081DD4F1
	.string "はてしない うみ……\nそれは いのちの みなもと……\p「うみの かがく はくぶつかん」$"
	.if (. - gText_Rom_1DD4F1) > 0x2c
	.error "gText_Rom_1DD4F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD4F1) < 0x2c
	.space 0x2c - (. - gText_Rom_1DD4F1)
	.endif
