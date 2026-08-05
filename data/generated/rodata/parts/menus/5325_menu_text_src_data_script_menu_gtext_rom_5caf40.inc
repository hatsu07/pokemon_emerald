	@ src/data/script_menu.h:689 gText_BasicRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF40
gText_Rom_5CAF40: @ 0x085CAF40
	.string "きほんルール$"
	.if (. - gText_Rom_5CAF40) != 0x7
	.error "gText_Rom_5CAF40 must retain its original byte length"
	.endif
