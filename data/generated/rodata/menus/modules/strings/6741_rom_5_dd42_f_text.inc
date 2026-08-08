	@ src/strings.c:895 gText_Prev
	.globl gText_Rom_5DD42F
gText_Rom_5DD42F: @ 0x085DD42F
	.string "ぜんかい$"
	.if (. - gText_Rom_5DD42F) > 0x5
	.error "gText_Rom_5DD42F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD42F) < 0x5
	.space 0x5 - (. - gText_Rom_5DD42F)
	.endif

