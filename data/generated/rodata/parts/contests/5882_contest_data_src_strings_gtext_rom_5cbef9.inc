	@ src/strings.c:643 gText_PreviousTime
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBEF9
gText_Rom_5CBEF9: @ 0x085CBEF9
	.string "ぜんかいの ゲームない じかん$"
	.if (. - gText_Rom_5CBEF9) != 0x10
	.error "gText_Rom_5CBEF9 must retain its original byte length"
	.endif
