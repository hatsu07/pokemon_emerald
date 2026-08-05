	@ src/battle_dome.c:877 battle_dome_line_877
	.globl gText_Rom_273AC9
gText_Rom_273AC9: @ 0x08273AC9
	.string "かんぜん むてきの スーパースター!!$"
	.if (. - gText_Rom_273AC9) > 0x14
	.error "gText_Rom_273AC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273AC9) < 0x14
	.space 0x14 - (. - gText_Rom_273AC9)
	.endif
