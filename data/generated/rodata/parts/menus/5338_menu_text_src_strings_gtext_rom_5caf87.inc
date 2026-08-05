	@ src/strings.c:508 gText_Underpowered
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF87
gText_Rom_5CAF87: @ 0x085CAF87
	.string "ちからをはっきできない$"
	.if (. - gText_Rom_5CAF87) != 0xc
	.error "gText_Rom_5CAF87 must retain its original byte length"
	.endif
