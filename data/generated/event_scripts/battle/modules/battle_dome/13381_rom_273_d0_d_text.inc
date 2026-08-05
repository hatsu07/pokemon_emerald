	@ src/battle_dome.c:907 battle_dome_line_907
	.globl gText_Rom_273D0D
gText_Rom_273D0D: @ 0x08273D0D
	.string "せめるより まもりを だいじに する。$"
	.if (. - gText_Rom_273D0D) > 0x14
	.error "gText_Rom_273D0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D0D) < 0x14
	.space 0x14 - (. - gText_Rom_273D0D)
	.endif
