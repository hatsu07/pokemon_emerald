	@ data/text/match_call.inc:379 MatchCall_PersonalizedText56
	.globl gText_Rom_26839D
gText_Rom_26839D: @ 0x0826839D
	.string "むしポケモンを いっぱい もってて\nにんきものの {STR_VAR_1} だけど!\p……きょう がっこうに\nおきにいりの むしポケモンを\lいっぱい つれて いったら\lすきな おんなのこに なかれ ちゃった……\lうう わらいたければ わらって くれよ\pぼくは むしポケモンの よさを\nあのコに わかって もらえるまで\lがんばるんだ からね!\pグッスン じゃーな!$"
	.if (. - gText_Rom_26839D) > 0xac
	.error "gText_Rom_26839D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26839D) < 0xac
	.space 0xac - (. - gText_Rom_26839D)
	.endif
