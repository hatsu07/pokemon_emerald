	@ asm/battle_interface.s:1227 UpdateLvlInHealthbox
	.globl gText_Rom_5CC4EE
gText_Rom_5CC4EE: @ 0x085CC4EE
	.string "　$"
	.if (. - gText_Rom_5CC4EE) > 0x2
	.error "gText_Rom_5CC4EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4EE) < 0x2
	.space 0x2 - (. - gText_Rom_5CC4EE)
	.endif
