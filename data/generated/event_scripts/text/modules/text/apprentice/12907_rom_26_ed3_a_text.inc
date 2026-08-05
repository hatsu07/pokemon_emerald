	@ data/text/apprentice.inc:277 gText_ApprenticeThanksNoHeldItem2
	.globl gText_Rom_26ED3A
gText_Rom_26ED3A: @ 0x0826ED3A
	.string "わかりました!\nじゃあ また!"
	.byte EOS
	.if (. - gText_Rom_26ED3A) > 0x10
	.error "gText_Rom_26ED3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ED3A) < 0x10
	.space 0x10 - (. - gText_Rom_26ED3A)
	.endif
