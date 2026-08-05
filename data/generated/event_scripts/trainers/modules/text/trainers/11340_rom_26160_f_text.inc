	@ data/text/trainers.inc:3089 Route129_Text_TishaIntro (+1 aliases)
	.globl gText_Rom_26160F
gText_Rom_26160F: @ 0x0826160F
	.string "のーんびり のーんびり やりましょうか?$"
	.if (. - gText_Rom_26160F) > 0x15
	.error "gText_Rom_26160F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26160F) < 0x15
	.space 0x15 - (. - gText_Rom_26160F)
	.endif
