	@ src/strings.c:276 gText_StopLearningMove2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ADA27
gText_Rom_5ADA27: @ 0x085ADA27
	.string "それでは…… {STR_VAR_2}を\nおぼえるのを あきらめますか?$"
	.if (. - gText_Rom_5ADA27) != 0x1b
	.error "gText_Rom_5ADA27 must retain its original byte length"
	.endif
