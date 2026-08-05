	@ src/strings.c:90 gText_DexSearchAlphaVWX
	.globl gText_Rom_5CBC5C
gText_Rom_5CBC5C: @ 0x085CBC5C
	.string "らりるれろ$"
	.if (. - gText_Rom_5CBC5C) > 0x6
	.error "gText_Rom_5CBC5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC5C) < 0x6
	.space 0x6 - (. - gText_Rom_5CBC5C)
	.endif
