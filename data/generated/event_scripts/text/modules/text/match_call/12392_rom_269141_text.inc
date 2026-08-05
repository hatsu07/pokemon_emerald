	@ data/text/match_call.inc:442 MatchCall_BattleFrontierStreakText13 (+1 aliases)
	.globl gText_Rom_269141
gText_Rom_269141: @ 0x08269141
	.string "{PLAYER}{KUN} かい?\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2}で\n{STR_VAR_3}れんしょうも したそうじゃのう\pげんきで いいことじゃ\nでは またのう"
	.byte EOS
	.if (. - gText_Rom_269141) > 0x41
	.error "gText_Rom_269141 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269141) < 0x41
	.space 0x41 - (. - gText_Rom_269141)
	.endif
