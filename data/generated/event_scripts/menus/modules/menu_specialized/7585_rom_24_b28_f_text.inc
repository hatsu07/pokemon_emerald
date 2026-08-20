	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B28F
gText_Rom_24B28F: @ 0x0824B28F
	.string "このアピールのあと　かいじょうが\nしばらく　もりあがらなく　なる{EOS}"
	.if (. - gText_Rom_24B28F) > 0x21
	.error "gText_Rom_24B28F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B28F) < 0x21
	.space 0x21 - (. - gText_Rom_24B28F)
	.endif
