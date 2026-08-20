	@ data/text/trainers.inc:3233 Route132_Text_RonaldDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_261C07
gText_Rom_261C07: @ 0x08261C07
	.string "わーん\nまけて しまった{EOS}"
	.if (. - gText_Rom_261C07) != 0xd
	.error "gText_Rom_261C07 must retain its original byte length"
	.endif
