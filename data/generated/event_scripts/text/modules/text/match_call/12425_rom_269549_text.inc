	@ data/text/match_call.inc:526 MatchCall_BattleDomeText13
	.globl gText_Rom_269549
gText_Rom_269549: @ 0x08269549
	.string "{PLAYER}{KUN} かい?\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2} で\n{STR_VAR_3}かいも ゆうしょう とな?\pげんきで いいことじゃ\nでは またのう"
	.byte EOS
	.if (. - gText_Rom_269549) > 0x40
	.error "gText_Rom_269549 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269549) < 0x40
	.space 0x40 - (. - gText_Rom_269549)
	.endif
