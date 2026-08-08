	@ data/maps/SootopolisCity_House4/scripts.inc:28 SootopolisCity_House4_Text_Azumarill
	.globl gText_Rom_20F64D
gText_Rom_20F64D: @ 0x0820F64D
	.string "マリルリ『まるりー$"
	.if (. - gText_Rom_20F64D) > 0xa
	.error "gText_Rom_20F64D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F64D) < 0xa
	.space 0xa - (. - gText_Rom_20F64D)
	.endif
	@ Replaced baserom.gba range: offset=0x20F657, size=0x13
	.byte 0x00, 0x0F, 0x00, 0x6A, 0xF6, 0x20, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0xB4, 0xF6, 0x20, 0x08
	.byte 0x09, 0x02, 0x02
