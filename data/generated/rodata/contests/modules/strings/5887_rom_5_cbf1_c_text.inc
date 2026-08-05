	@ src/strings.c:645 gText_ClockHasBeenReset
	.globl gText_Rom_5CBF1C
gText_Rom_5CBF1C: @ 0x085CBF1C
	.string "じかんを さいせってい しました!\nレポートを かいています おまちください$"
	.if (. - gText_Rom_5CBF1C) > 0x27
	.error "gText_Rom_5CBF1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF1C) < 0x27
	.space 0x27 - (. - gText_Rom_5CBF1C)
	.endif
