	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B133
gText_Rom_24B133: @ 0x0824B133
	.string "1つまえの　ポケモンの　アピールと\nタイプが　ちがうなら　きにいられる{EOS}"
	.if (. - gText_Rom_24B133) != 0x24
	.error "gText_Rom_24B133 must retain its original byte length"
	.endif
