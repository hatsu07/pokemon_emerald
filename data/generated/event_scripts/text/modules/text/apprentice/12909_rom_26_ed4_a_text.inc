	@ data/text/apprentice.inc:280 gText_ApprenticeThanksHeldItem2
	.globl gText_Rom_26ED4A
gText_Rom_26ED4A: @ 0x0826ED4A
	.string "{STR_VAR_1} ですか!\nわかりました!\pがんばって さがしてきます!\nじゃあ また!"
	.byte EOS
	.if (. - gText_Rom_26ED4A) > 0x27
	.error "gText_Rom_26ED4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ED4A) < 0x27
	.space 0x27 - (. - gText_Rom_26ED4A)
	.endif
