	@ asm/field_specials.s:6023 sub_0813AAAC (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2369AA
gText_Rom_2369AA: @ 0x082369AA
	.string "ポケモンに　もたせると　たまに\nひんしを　ふせぐことが　できる"
	.byte EOS
	.if (. - gText_Rom_2369AA) != 0x20
	.error "gText_Rom_2369AA must retain its original byte length"
	.endif
