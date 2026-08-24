	@ src/strings.c:582 gText_AllTextBeingEditedWill
	.globl gText_AllTextBeingEditedWill
gText_AllTextBeingEditedWill: @ 0x085CBAA7
	.string "へんしゅうちゅうの ことばを{EOS}"
	.if (. - gText_AllTextBeingEditedWill) > 0xf
	.error "gText_AllTextBeingEditedWill may not grow beyond its original slot"
	.endif
	.if (. - gText_AllTextBeingEditedWill) < 0xf
	.space 0xf - (. - gText_AllTextBeingEditedWill)
	.endif
