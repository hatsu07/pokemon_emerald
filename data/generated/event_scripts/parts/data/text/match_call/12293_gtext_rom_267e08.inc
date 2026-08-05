	@ data/text/match_call.inc:340 MatchCall_PersonalizedText43
	.globl gText_Rom_267E08
gText_Rom_267E08: @ 0x08267E08
	.string "{STR_VAR_1}で ござる\nかくれかたの けんきゅうを\lつづけて いるんだけど\pうまく かくれすぎると\nだれにも みつけて もらえないで ござる\lそれは ちょっと さびしいで ござるなあ\pそれでは これにて どろん!$"
	.if (. - gText_Rom_267E08) > 0x67
	.error "gText_Rom_267E08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267E08) < 0x67
	.space 0x67 - (. - gText_Rom_267E08)
	.endif
