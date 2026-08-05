	@ src/strings.c:509 gText_WhenInDanger
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF93
gText_Rom_5CAF93: @ 0x085CAF93
	.string "ピンチになったら$"
	.if (. - gText_Rom_5CAF93) != 0x9
	.error "gText_Rom_5CAF93 must retain its original byte length"
	.endif
