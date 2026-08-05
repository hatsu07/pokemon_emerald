	@ data/text/apprentice.inc:364 gText_ApprenticeHoldNothing8
	.globl gText_Rom_26F56C
gText_Rom_26F56C: @ 0x0826F56C
	.string "うわあぁっ いがいな おこたえだあ!\nつまり なにも いらないの ですねっ?"
	.byte EOS
	.if (. - gText_Rom_26F56C) > 0x27
	.error "gText_Rom_26F56C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F56C) < 0x27
	.space 0x27 - (. - gText_Rom_26F56C)
	.endif
