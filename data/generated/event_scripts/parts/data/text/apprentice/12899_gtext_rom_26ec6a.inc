	@ data/text/apprentice.inc:265 gText_ApprenticeThanksHeldItem1
	.globl gText_Rom_26EC6A
gText_Rom_26EC6A: @ 0x0826EC6A
	.string "へええ! {STR_VAR_1}かー\nじゃあ そうするー!\pせんせい ありがと!"
	.byte EOS
	.if (. - gText_Rom_26EC6A) > 0x20
	.error "gText_Rom_26EC6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EC6A) < 0x20
	.space 0x20 - (. - gText_Rom_26EC6A)
	.endif
