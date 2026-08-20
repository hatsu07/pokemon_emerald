	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AD17
gText_Rom_24AD17: @ 0x0824AD17
	.string "つづけて　だしても　しんさいんに\nあきられずに　アピール　できる{EOS}"
	.if (. - gText_Rom_24AD17) != 0x21
	.error "gText_Rom_24AD17 must retain its original byte length"
	.endif
