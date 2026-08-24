	@ src/strings.c:605 gText_GoodSaying
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_GoodSaying
gText_GoodSaying: @ 0x085CBBFD
	.string "いい ことば{EOS}"
	.if (. - gText_GoodSaying) != 0x7
	.error "gText_GoodSaying must retain its original byte length"
	.endif
