	@ src/use_pokeblock.c:161 sText_NothingChanged
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBD4A
gText_Rom_5CBD4A: @ 0x085CBD4A
	.string "なにも かわらなかった!$"
	.if (. - gText_Rom_5CBD4A) != 0xd
	.error "gText_Rom_5CBD4A must retain its original byte length"
	.endif
