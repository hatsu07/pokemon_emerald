	@ data/text/trainers.inc:2978 Route128_Text_IsaiahDefeat (+1 aliases)
	.globl gText_Rom_2611A9
gText_Rom_2611A9: @ 0x082611A9
	.string "ボクの はつしょうりも とおい……$"
	.if (. - gText_Rom_2611A9) > 0x12
	.error "gText_Rom_2611A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2611A9) < 0x12
	.space 0x12 - (. - gText_Rom_2611A9)
	.endif
