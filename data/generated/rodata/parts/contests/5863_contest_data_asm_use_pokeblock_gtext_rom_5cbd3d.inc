	@ asm/use_pokeblock.s:1658 Pokeblock_BufferEnhancedStatText
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBD3D
gText_Rom_5CBD3D: @ 0x085CBD3D
	.string "に　みがきが　かかった！$"
	.if (. - gText_Rom_5CBD3D) != 0xd
	.error "gText_Rom_5CBD3D must retain its original byte length"
	.endif
