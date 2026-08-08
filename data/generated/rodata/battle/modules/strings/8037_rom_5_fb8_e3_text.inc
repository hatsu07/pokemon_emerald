	@ src/strings.c:1113 gText_TimeBoard
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5FB8E3
gText_Rom_5FB8E3: @ 0x085FB8E3
	.string "タイムボード$"
	.if (. - gText_Rom_5FB8E3) != 0x7
	.error "gText_Rom_5FB8E3 must retain its original byte length"
	.endif
