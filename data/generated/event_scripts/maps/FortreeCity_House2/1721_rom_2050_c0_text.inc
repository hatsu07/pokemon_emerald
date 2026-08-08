	@ data/maps/FortreeCity_House2/scripts.inc:62 FortreeCity_House2_Text_YouGuessedWrong
	.globl gText_Rom_2050C0
gText_Rom_2050C0: @ 0x082050C0
	.string "ざんねん……\nはずれ じゃ……$"
	.if (. - gText_Rom_2050C0) > 0x10
	.error "gText_Rom_2050C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2050C0) < 0x10
	.space 0x10 - (. - gText_Rom_2050C0)
	.endif
	@ Replaced baserom.gba range: offset=0x2050D0, size=0x13
	.byte 0x00, 0x0F, 0x00, 0xE3, 0x50, 0x20, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0x6E, 0x51, 0x20, 0x08
	.byte 0x09, 0x02, 0x02
