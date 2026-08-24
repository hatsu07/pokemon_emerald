	@ src/strings.c:1113 gText_TimeBoard
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_TimeBoard
gText_TimeBoard: @ 0x085FB8E3
	.string "タイムボード{EOS}"
	.if (. - gText_TimeBoard) != 0x7
	.error "gText_TimeBoard must retain its original byte length"
	.endif
