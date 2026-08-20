	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B157
gText_Rom_24B157: @ 0x0824B157
	.string "1つまえの　ポケモンの　アピールの\nうまさに　えいきょう　される{EOS}"
	.if (. - gText_Rom_24B157) > 0x21
	.error "gText_Rom_24B157 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B157) < 0x21
	.space 0x21 - (. - gText_Rom_24B157)
	.endif
