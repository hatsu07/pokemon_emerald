	@ data/maps/RustboroCity/scripts.inc:1088 RustboroCity_Text_OutOfTheWay
	.globl gText_Rom_1DF5AE
gText_Rom_1DF5AE: @ 0x081DF5AE
	.string "どけー! どけどけー!!{EOS}"
	.if (. - gText_Rom_1DF5AE) > 0xd
	.error "gText_Rom_1DF5AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF5AE) < 0xd
	.space 0xd - (. - gText_Rom_1DF5AE)
	.endif
