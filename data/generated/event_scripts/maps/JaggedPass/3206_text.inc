	@ data/maps/JaggedPass/scripts.inc:259 JaggedPass_Text_AutumnDefeat (+1 aliases)
	.globl gText_Rom_2160CF
gText_Rom_2160CF: @ 0x082160CF
	.string "んー おっかしいな……$"
	.if (. - gText_Rom_2160CF) > 0xc
	.error "gText_Rom_2160CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2160CF) < 0xc
	.space 0xc - (. - gText_Rom_2160CF)
	.endif
