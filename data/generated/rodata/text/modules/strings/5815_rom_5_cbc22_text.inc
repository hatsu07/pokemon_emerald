	@ src/strings.c:609 gText_Questionnaire
	.globl gText_Rom_5CBC22
gText_Rom_5CBC22: @ 0x085CBC22
	.string "アンケート$"
	.if (. - gText_Rom_5CBC22) > 0x6
	.error "gText_Rom_5CBC22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC22) < 0x6
	.space 0x6 - (. - gText_Rom_5CBC22)
	.endif
	@ analyzed canonical ROM range 0x085CBC28-0x085CBC4F
sAnalyzedData_085CBC28: @ 0x085CBC28
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0201, 0x0403, 0x0005, 0x1615, 0x1817, 0x0019, 0x2524, 0x0026
	.2byte 0xFF2C, 0x0706, 0x0908, 0x000A, 0x1B1A, 0x1D1C, 0x001E, 0x190F
	.2byte 0xFF10, 0x0C0B, 0x0E0D, 0x000F
