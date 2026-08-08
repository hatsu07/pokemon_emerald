	@ src/strings.c:485 gText_LogOff
	.globl gText_Rom_5CAD0D
gText_Rom_5CAD0D: @ 0x085CAD0D
	.string "スイッチをきる$"
	.if (. - gText_Rom_5CAD0D) > 0x8
	.error "gText_Rom_5CAD0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD0D) < 0x8
	.space 0x8 - (. - gText_Rom_5CAD0D)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAD15, size=0x5
	.byte 0x10, 0x02, 0x0E, 0x2E, 0x00
