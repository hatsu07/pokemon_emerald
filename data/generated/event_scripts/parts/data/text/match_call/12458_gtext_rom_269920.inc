	@ data/text/match_call.inc:568 MatchCall_BattlePikeText13
	.globl gText_Rom_269920
gText_Rom_269920: @ 0x08269920
	.string "{PLAYER}{KUN} かい?\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2}で\n{STR_VAR_3}へやも とっぱした とな?\pげんきで いいことじゃ\nでは またのう"
	.byte EOS
	.if (. - gText_Rom_269920) > 0x3f
	.error "gText_Rom_269920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269920) < 0x3f
	.space 0x3f - (. - gText_Rom_269920)
	.endif
