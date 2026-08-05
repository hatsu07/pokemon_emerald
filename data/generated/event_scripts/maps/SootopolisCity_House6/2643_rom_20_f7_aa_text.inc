	@ data/maps/SootopolisCity_House6/scripts.inc:46 SootopolisCity_House6_Text_LovePlushDolls
	.globl gText_Rom_20F7AA
gText_Rom_20F7AA: @ 0x0820F7AA
	.string "あたし ぬいぐるみ だいすき!$"
	.if (. - gText_Rom_20F7AA) > 0x10
	.error "gText_Rom_20F7AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F7AA) < 0x10
	.space 0x10 - (. - gText_Rom_20F7AA)
	.endif
	@ Replaced baserom.gba range: offset=0x20F7BA, size=0x13
	.byte 0x00, 0x0F, 0x00, 0xCD, 0xF7, 0x20, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0x19, 0xF8, 0x20, 0x08
	.byte 0x09, 0x02, 0x02
