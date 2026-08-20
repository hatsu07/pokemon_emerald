	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B10F
gText_Rom_24B10F: @ 0x0824B10F
	.string "1つまえの　ポケモンの　アピールと\nタイプが　おなじなら　きにいられる{EOS}"
	.if (. - gText_Rom_24B10F) != 0x24
	.error "gText_Rom_24B10F must retain its original byte length"
	.endif
