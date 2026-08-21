	@ asm/evolution_scene.s:1937 Task_EvolutionScene
	.globl gText_Rom_5ABB28
gText_Rom_5ABB28: @ 0x085ABB28
	.string "あれ……？\n{0xFD}{0x02}の　へんかが　とまった！\p{EOS}"
	.if (. - gText_Rom_5ABB28) > 0x16
	.error "gText_Rom_5ABB28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB28) < 0x16
	.space 0x16 - (. - gText_Rom_5ABB28)
	.endif

	@ asm/evolution_scene.s:1927 Task_EvolutionScene
	.globl gText_Rom_5ABB3E
gText_Rom_5ABB3E: @ 0x085ABB3E
	.string "……？\p{EOS}"
	.if (. - gText_Rom_5ABB3E) > 0x5
	.error "gText_Rom_5ABB3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB3E) < 0x5
	.space 0x5 - (. - gText_Rom_5ABB3E)
	.endif
