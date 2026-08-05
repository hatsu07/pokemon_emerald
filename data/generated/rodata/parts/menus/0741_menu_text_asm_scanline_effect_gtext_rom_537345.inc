	@ asm/scanline_effect.s:2188 sub_080BA834
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_537345
gText_Rom_537345: @ 0x08537345
	.string "ボタンの　モード$"
	.if (. - gText_Rom_537345) != 0x9
	.error "gText_Rom_537345 must retain its original byte length"
	.endif
