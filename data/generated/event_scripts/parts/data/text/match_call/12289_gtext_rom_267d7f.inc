	@ data/text/match_call.inc:334 MatchCall_PersonalizedText41
	.globl gText_Rom_267D7F
gText_Rom_267D7F: @ 0x08267D7F
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1}だ\pきみの ポケモンの\nちょうしは どうだい?\pぼくの ドラゴンポケモンたちも\nちょうし よさそうだよ\lじゃあ また$"
	.if (. - gText_Rom_267D7F) > 0x45
	.error "gText_Rom_267D7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267D7F) < 0x45
	.space 0x45 - (. - gText_Rom_267D7F)
	.endif
