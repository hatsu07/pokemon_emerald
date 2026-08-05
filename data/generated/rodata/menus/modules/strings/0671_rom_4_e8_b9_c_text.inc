	@ src/strings.c:952 gText_BattlePyramidFloor
	.globl gText_Rom_4E8B9C
gText_Rom_4E8B9C: @ 0x084E8B9C
	.string "バトルピラミッド\n{STR_VAR_1}$"
	.if (. - gText_Rom_4E8B9C) > 0xc
	.error "gText_Rom_4E8B9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B9C) < 0xc
	.space 0xc - (. - gText_Rom_4E8B9C)
	.endif
