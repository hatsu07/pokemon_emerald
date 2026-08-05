	@ data/text/apprentice.inc:337 gText_ApprenticeThanksNoHeldItem6
	.globl gText_Rom_26F2C4
gText_Rom_26F2C4: @ 0x0826F2C4
	.string "じゃ そうするね!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_Rom_26F2C4) > 0x32
	.error "gText_Rom_26F2C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F2C4) < 0x32
	.space 0x32 - (. - gText_Rom_26F2C4)
	.endif
