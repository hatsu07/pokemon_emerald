	@ data/text/match_call.inc:610 MatchCall_BattlePyramidText13
	.globl gText_Rom_269D07
gText_Rom_269D07: @ 0x08269D07
	.string "{PLAYER}{KUN} かい?\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2}で\n{STR_VAR_3}だんも のぼったとな?\pげんきで いいことじゃ\nでは またのう"
	.byte EOS
	.if (. - gText_Rom_269D07) > 0x3d
	.error "gText_Rom_269D07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269D07) < 0x3d
	.space 0x3d - (. - gText_Rom_269D07)
	.endif
