	@ src/strings.c:756 gText_WaitForAllChooseBerry
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_WaitForAllChooseBerry
gText_WaitForAllChooseBerry: @ 0x085CC8C3
	.string " ほかの メンバーが きのみを\nえらぶまで おまちください{EOS}"
	.if (. - gText_WaitForAllChooseBerry) != 0x1e
	.error "gText_WaitForAllChooseBerry must retain its original byte length"
	.endif
