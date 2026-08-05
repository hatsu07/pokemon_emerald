	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A00F
gText_Rom_23A00F: @ 0x0823A00F
	.string "キズついた　からだを\nたいりょくの\nはんぶん　かいふく"
	.byte EOS
	.if (. - gText_Rom_23A00F) != 0x1c
	.error "gText_Rom_23A00F must retain its original byte length"
	.endif
