	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B196
gText_Rom_24B196: @ 0x0824B196
	.string "ちょうしが　いいときに　だすと\nアピールが　とても　うまくいく{EOS}"
	.if (. - gText_Rom_24B196) > 0x20
	.error "gText_Rom_24B196 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B196) < 0x20
	.space 0x20 - (. - gText_Rom_24B196)
	.endif
