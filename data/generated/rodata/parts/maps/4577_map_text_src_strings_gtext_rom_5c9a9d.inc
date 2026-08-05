	@ src/strings.c:243 gText_PokedollarVar1
	.globl gText_Rom_5C9A9D
gText_Rom_5C9A9D: @ 0x085C9A9D
	.string "{STR_VAR_1}円$"
	.if (. - gText_Rom_5C9A9D) > 0x4
	.error "gText_Rom_5C9A9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A9D) < 0x4
	.space 0x4 - (. - gText_Rom_5C9A9D)
	.endif

