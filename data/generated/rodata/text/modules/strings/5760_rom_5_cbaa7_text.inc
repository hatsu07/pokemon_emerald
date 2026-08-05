	@ src/strings.c:582 gText_AllTextBeingEditedWill
	.globl gText_Rom_5CBAA7
gText_Rom_5CBAA7: @ 0x085CBAA7
	.string "へんしゅうちゅうの ことばを$"
	.if (. - gText_Rom_5CBAA7) > 0xf
	.error "gText_Rom_5CBAA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAA7) < 0xf
	.space 0xf - (. - gText_Rom_5CBAA7)
	.endif
