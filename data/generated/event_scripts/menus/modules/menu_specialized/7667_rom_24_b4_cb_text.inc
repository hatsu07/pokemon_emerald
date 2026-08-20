	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B4CB
gText_Rom_24B4CB: @ 0x0824B4CB
	.string "{0xFD}{0x02}は\nアピール　していない！{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_24B4CB) > 0x12
	.error "gText_Rom_24B4CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B4CB) < 0x12
	.space 0x12 - (. - gText_Rom_24B4CB)
	.endif
	@ analyzed canonical ROM range 0x0824B4DD-0x0824B4F7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_0824B4DD: @ 0x0824B4DD
	.string "つぎの　{STR_VAR_1}の　アピールに\nきたいが　たかまった!{EOS}"
EventText_JP_0824B4F7: @ 0x0824B4F7
	.string "{EOS}"
