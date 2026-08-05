	@ src/strings.c:642 gText_PresentTime
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBEE9
gText_Rom_5CBEE9: @ 0x085CBEE9
	.string "げんざいの ゲームない じかん$"
	.if (. - gText_Rom_5CBEE9) != 0x10
	.error "gText_Rom_5CBEE9 must retain its original byte length"
	.endif
