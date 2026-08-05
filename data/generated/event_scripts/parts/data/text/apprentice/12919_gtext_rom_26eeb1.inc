	@ data/text/apprentice.inc:295 gText_ApprenticeThanksHeldItem3
	.globl gText_Rom_26EEB1
gText_Rom_26EEB1: @ 0x0826EEB1
	.string "{STR_VAR_1} ですか!\nあたしに みつけられるか……\lいえ! がんばって みます\pありがとう ございます!"
	.byte EOS
	.if (. - gText_Rom_26EEB1) > 0x32
	.error "gText_Rom_26EEB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EEB1) < 0x32
	.space 0x32 - (. - gText_Rom_26EEB1)
	.endif
