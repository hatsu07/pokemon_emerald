	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B0AB
gText_Rom_24B0AB: @ 0x0824B0AB
	.string "1つまえの　ポケモンの　アピールと\nおなじくらい　うまく　できる{EOS}"
	.if (. - gText_Rom_24B0AB) != 0x21
	.error "gText_Rom_24B0AB must retain its original byte length"
	.endif
