	@ asm/contest.s:16369 ContestDebugPrintBitStrings
	.globl gText_Rom_5CC4A0
gText_Rom_5CC4A0: @ 0x085CC4A0
	.string "B,{EOS}"
	.if (. - gText_Rom_5CC4A0) > 0x3
	.error "gText_Rom_5CC4A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4A0) < 0x3
	.space 0x3 - (. - gText_Rom_5CC4A0)
	.endif
