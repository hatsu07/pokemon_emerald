	@ data/text/trainers.inc:3281 Route132_Text_DarcyPostBattle
	.globl gText_Rom_261DEE
gText_Rom_261DEE: @ 0x08261DEE
	.string "とりあえず そこの おじいさんと くんで\nむこうの チームに いどんで みようかな?$"
	.if (. - gText_Rom_261DEE) > 0x2b
	.error "gText_Rom_261DEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261DEE) < 0x2b
	.space 0x2b - (. - gText_Rom_261DEE)
	.endif
