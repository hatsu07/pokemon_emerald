	@ src/data/abilities.h:378 abilities_line_378 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574ACE
gText_Rom_574ACE: @ 0x08574ACE
	.string "ほのおのからだ$"
	.if (. - gText_Rom_574ACE) != 0x8
	.error "gText_Rom_574ACE must retain its original byte length"
	.endif
