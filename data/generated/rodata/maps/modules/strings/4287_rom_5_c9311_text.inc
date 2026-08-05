	@ src/strings.c:118 gText_HOFCorrupted
	.globl gText_Rom_5C9311
gText_Rom_5C9311: @ 0x085C9311
	.string "でんどういりの きろくが こわれています!$"
	.if (. - gText_Rom_5C9311) > 0x16
	.error "gText_Rom_5C9311 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9311) < 0x16
	.space 0x16 - (. - gText_Rom_5C9311)
	.endif
	.space 0x1, 0x00
