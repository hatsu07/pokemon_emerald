	@ src/strings.c:756 gText_WaitForAllChooseBerry
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC8C3
gText_Rom_5CC8C3: @ 0x085CC8C3
	.string " ほかの メンバーが きのみを\nえらぶまで おまちください$"
	.if (. - gText_Rom_5CC8C3) != 0x1e
	.error "gText_Rom_5CC8C3 must retain its original byte length"
	.endif
