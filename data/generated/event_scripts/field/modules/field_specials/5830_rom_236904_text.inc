	@ asm/field_specials.s:6023 sub_0813AAAC (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_236904
gText_Rom_236904: @ 0x08236904
	.string "ポケモンに　もたせると　せんせい　こうげきが\nたまに　できる"
	.byte EOS
	.if (. - gText_Rom_236904) != 0x1f
	.error "gText_Rom_236904 must retain its original byte length"
	.endif
