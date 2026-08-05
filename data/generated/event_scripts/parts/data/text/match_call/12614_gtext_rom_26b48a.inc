	@ data/text/match_call.inc:796 MatchCall_Text_Brendan8
	.globl gText_Rom_26B48A
gText_Rom_26B48A: @ 0x0826B48A
	.string "ユウキ『{PLAYER}!\pおくりびやまには じゅみょうを おえた\nポケモンが まつられてるんだ!\pそのせいか しゅつげんする ポケモンも\nゴーストタイプが おおいんだよな!"
	.byte EOS
	.if (. - gText_Rom_26B48A) > 0x52
	.error "gText_Rom_26B48A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B48A) < 0x52
	.space 0x52 - (. - gText_Rom_26B48A)
	.endif
