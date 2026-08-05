	@ asm/evolution_scene.s:1937 Task_EvolutionScene
	.globl gText_Rom_5ABB28
gText_Rom_5ABB28: @ 0x085ABB28
	.string "あれ……？\n{0xFD}{0x02}の　へんかが　とまった！\p$"
	.if (. - gText_Rom_5ABB28) > 0x16
	.error "gText_Rom_5ABB28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB28) < 0x16
	.space 0x16 - (. - gText_Rom_5ABB28)
	.endif
	.globl gUnknown_85ABB3E
gUnknown_85ABB3E: @ 0x085ABB3E

	@ asm/evolution_scene.s:1927 Task_EvolutionScene
	.globl gText_Rom_5ABB3E
gText_Rom_5ABB3E: @ 0x085ABB3E
	.string "……？\p$"
	.if (. - gText_Rom_5ABB3E) > 0x5
	.error "gText_Rom_5ABB3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB3E) < 0x5
	.space 0x5 - (. - gText_Rom_5ABB3E)
	.endif
	.globl gUnknown_85ABB43
gUnknown_85ABB43: @ 0x085ABB43
	@ Replaced baserom.gba range: offset=0x5ABB43, size=0xA
	.byte 0xFD, 0x12, 0x1A, 0x00, 0x45, 0x03, 0x0D, 0x29, 0xAC, 0xFF
	.globl gUnknown_85ABB4D
gUnknown_85ABB4D: @ 0x085ABB4D

