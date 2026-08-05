	@ src/strings.c:37 gText_Controls
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8E37
gText_Rom_5C8E37: @ 0x085C8E37
	.string " そうさ せつめい$"
	.if (. - gText_Rom_5C8E37) != 0xa
	.error "gText_Rom_5C8E37 must retain its original byte length"
	.endif
