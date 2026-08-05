	@ data/text/match_call.inc:751 MatchCall_Text_May8
	.globl gText_Rom_26AEFF
gText_Rom_26AEFF: @ 0x0826AEFF
	.string "ハルカ『{PLAYER}{KUN}!\pおくりびやまには じゅみょうを おえた\nポケモンが まつられてるの!\pそのせいか しゅつげんする ポケモンも\nゴーストタイプが おおいのよ!"
	.byte EOS
	.if (. - gText_Rom_26AEFF) > 0x51
	.error "gText_Rom_26AEFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AEFF) < 0x51
	.space 0x51 - (. - gText_Rom_26AEFF)
	.endif
