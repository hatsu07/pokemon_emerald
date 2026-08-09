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
	@ analyzed canonical ROM range 0x085CAD15-0x085CAD19
sAnalyzedData_085CAD15: @ 0x085CAD15
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x10, 0x02, 0x0E, 0x2E, 0x00
