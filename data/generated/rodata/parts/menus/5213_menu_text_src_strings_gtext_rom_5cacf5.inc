	@ src/strings.c:481 gText_LanettesPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACF5
gText_Rom_5CACF5: @ 0x085CACF5
	.string "マユミのパソコン$"
	.if (. - gText_Rom_5CACF5) != 0x9
	.error "gText_Rom_5CACF5 must retain its original byte length"
	.endif
