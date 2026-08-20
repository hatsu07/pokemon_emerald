	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AEA9
gText_Rom_24AEA9: @ 0x0824AEA9
	.string "しんさいんの　ほかの　ポケモンへの\nちゅうもくを　そらすことが　できる{EOS}"
	.if (. - gText_Rom_24AEA9) != 0x24
	.error "gText_Rom_24AEA9 must retain its original byte length"
	.endif
