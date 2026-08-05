	@ src/strings.c:899 gText_Championships
	.globl gText_Rom_5DD44D
gText_Rom_5DD44D: @ 0x085DD44D
	.string "{STR_VAR_1}かい ゆうしょう$"
	.if (. - gText_Rom_5DD44D) > 0xb
	.error "gText_Rom_5DD44D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD44D) < 0xb
	.space 0xb - (. - gText_Rom_5DD44D)
	.endif
