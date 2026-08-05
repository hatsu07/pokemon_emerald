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
