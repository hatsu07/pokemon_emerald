	@ src/battle_dome.c:869 battle_dome_line_869
	.globl gText_Rom_273A0D
gText_Rom_273A0D: @ 0x08273A0D
	.string "へいきん レベルの ちからを もった チーム。$"
	.if (. - gText_Rom_273A0D) > 0x18
	.error "gText_Rom_273A0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A0D) < 0x18
	.space 0x18 - (. - gText_Rom_273A0D)
	.endif
