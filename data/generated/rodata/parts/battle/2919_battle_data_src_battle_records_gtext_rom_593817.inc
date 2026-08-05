	@ src/battle_records.c:90 sText_DashesNoScore
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_593817
gText_Rom_593817: @ 0x08593817
	.string "----$"
	.if (. - gText_Rom_593817) != 0x5
	.error "gText_Rom_593817 must retain its original byte length"
	.endif
