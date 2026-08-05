	@ asm/field_specials.s:111 DetermineCyclingRoadResults
	.globl gText_Rom_5CB025
gText_Rom_5CB025: @ 0x085CB025
	.string "かい$"
	.if (. - gText_Rom_5CB025) > 0x3
	.error "gText_Rom_5CB025 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB025) < 0x3
	.space 0x3 - (. - gText_Rom_5CB025)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB028, size=0x2
	.byte 0xB8, 0xFF
