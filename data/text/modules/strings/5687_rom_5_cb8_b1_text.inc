	@ src/strings.c:546 gText_FindWordsThatDescribeYour
	.globl gText_FindWordsThatDescribeYour
gText_FindWordsThatDescribeYour: @ 0x085CB8B1
	.string "いまの きもちに ぴったりあう{EOS}"
	.if (. - gText_FindWordsThatDescribeYour) > 0x10
	.error "gText_FindWordsThatDescribeYour may not grow beyond its original slot"
	.endif
	.if (. - gText_FindWordsThatDescribeYour) < 0x10
	.space 0x10 - (. - gText_FindWordsThatDescribeYour)
	.endif
