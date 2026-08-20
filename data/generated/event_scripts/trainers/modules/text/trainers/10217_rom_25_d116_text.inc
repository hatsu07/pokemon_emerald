	@ data/text/trainers.inc:1439 Route115_Text_TimothyPostBattle
	.globl gText_Rom_25D116
gText_Rom_25D116: @ 0x0825D116
	.string "てんさい など いない\nすべては どりょく!\lわたしは そう しんじている……{EOS}"
	.if (. - gText_Rom_25D116) > 0x28
	.error "gText_Rom_25D116 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D116) < 0x28
	.space 0x28 - (. - gText_Rom_25D116)
	.endif
