	@ data/text/match_call.inc:343 MatchCall_PersonalizedText44
	.globl gText_Rom_267E6F
gText_Rom_267E6F: @ 0x08267E6F
	.string "{STR_VAR_1}よ\nあれから しゅぎょうを かさねて\pわたしの {STR_VAR_2}も\nけっこう つよく なってきたわよ\pやっぱり すなはまでの しゅぎょうは\nこうかてき だわ!\lじゃあ また!$"
	.if (. - gText_Rom_267E6F) > 0x54
	.error "gText_Rom_267E6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267E6F) < 0x54
	.space 0x54 - (. - gText_Rom_267E6F)
	.endif
