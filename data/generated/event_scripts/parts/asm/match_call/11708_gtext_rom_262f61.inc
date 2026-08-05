	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262F61
gText_Rom_262F61: @ 0x08262F61
	.string "すばらしい　ポケモンずかんに　なりそうだ\nそんな　よかんが　して　たまらないね！$"
	.if (. - gText_Rom_262F61) > 0x29
	.error "gText_Rom_262F61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262F61) < 0x29
	.space 0x29 - (. - gText_Rom_262F61)
	.endif
