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
