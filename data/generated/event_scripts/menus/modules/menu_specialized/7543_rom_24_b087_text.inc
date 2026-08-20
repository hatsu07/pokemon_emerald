	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B087
gText_Rom_24B087: @ 0x0824B087
	.string "それまでの　ポケモンの　アピールと\nおなじくらいの　アピールに　みせる{EOS}"
	.if (. - gText_Rom_24B087) != 0x24
	.error "gText_Rom_24B087 must retain its original byte length"
	.endif
