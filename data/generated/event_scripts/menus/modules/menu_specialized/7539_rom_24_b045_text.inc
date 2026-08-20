	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B045
gText_Rom_24B045: @ 0x0824B045
	.string "1ばん　はじめに　アピールすると\nアピールが　すごく　うまくいく{EOS}"
	.if (. - gText_Rom_24B045) > 0x21
	.error "gText_Rom_24B045 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B045) < 0x21
	.space 0x21 - (. - gText_Rom_24B045)
	.endif
