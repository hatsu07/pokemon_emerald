	@ src/field_specials.c:180 sText_1MinutePlus
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB018
gText_Rom_5CB018: @ 0x085CB018
	.string "1ぷん いじょう$"
	.if (. - gText_Rom_5CB018) != 0x9
	.error "gText_Rom_5CB018 must retain its original byte length"
	.endif
