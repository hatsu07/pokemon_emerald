	@ src/strings.c:686 gText_WaitingTrainerFinishReading
	.globl gText_Rom_5CC3A7
gText_Rom_5CC3A7: @ 0x085CC3A7
	.string "あいてが カードを みおわるのを\nまっています$"
	.if (. - gText_Rom_5CC3A7) > 0x18
	.error "gText_Rom_5CC3A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC3A7) < 0x18
	.space 0x18 - (. - gText_Rom_5CC3A7)
	.endif
