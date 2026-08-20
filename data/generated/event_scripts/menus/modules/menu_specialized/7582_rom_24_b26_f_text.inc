	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B26F
gText_Rom_24B26F: @ 0x0824B26F
	.string "かいじょうが　もりあがっている　ほど\nアピールが　きにいられる{EOS}"
	.if (. - gText_Rom_24B26F) != 0x20
	.error "gText_Rom_24B26F must retain its original byte length"
	.endif
