	@ src/strings.c:546 gText_FindWordsThatDescribeYour
	.globl gText_Rom_5CB8B1
gText_Rom_5CB8B1: @ 0x085CB8B1
	.string "いまの きもちに ぴったりあう{EOS}"
	.if (. - gText_Rom_5CB8B1) > 0x10
	.error "gText_Rom_5CB8B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8B1) < 0x10
	.space 0x10 - (. - gText_Rom_5CB8B1)
	.endif
