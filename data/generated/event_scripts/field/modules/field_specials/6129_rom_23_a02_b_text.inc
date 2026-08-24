	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A00F
gText_Rom_23A00F: @ 0x0823A00F
	.string "キズついた　からだを\nたいりょくの\nはんぶん　かいふく"
	.byte EOS
	.if (. - gText_Rom_23A00F) != 0x1c
	.error "gText_Rom_23A00F must retain its original byte length"
	.endif
	.globl gText_Rom_23A026
	.set gText_Rom_23A026, gText_Rom_23A00F + 0x17
	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	.globl gText_Rom_23A02B
gText_Rom_23A02B: @ 0x0823A02B
	.string "いんりょくを　りよう\nレベル　ぶんの\nダメージを　あたえる"
	.byte EOS
	.if (. - gText_Rom_23A02B) > 0x1e
	.error "gText_Rom_23A02B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A02B) < 0x1e
	.space 0x1e - (. - gText_Rom_23A02B)
	.endif
