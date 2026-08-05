	@ src/strings.c:797 gText_CollectedSymbols
	.globl gText_Rom_5CCB0A
gText_Rom_5CCB0A: @ 0x085CCB0A
	.string "ここに シンボルを あつめます$"
	.if (. - gText_Rom_5CCB0A) > 0x10
	.error "gText_Rom_5CCB0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCB0A) < 0x10
	.space 0x10 - (. - gText_Rom_5CCB0A)
	.endif
