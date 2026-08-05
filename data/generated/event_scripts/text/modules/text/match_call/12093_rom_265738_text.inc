	@ data/text/match_call.inc:55 MatchCall_NegativeBattleText4
	.globl gText_Rom_265738
gText_Rom_265738: @ 0x08265738
	.string "やあ {PLAYER}\n{STR_VAR_1} だ\pきのう また しょうぶ してみたんだ\nでも かてなかったよ\pもっと そだてが ひつようだな\nじゃあ またな$"
	.if (. - gText_Rom_265738) > 0x41
	.error "gText_Rom_265738 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265738) < 0x41
	.space 0x41 - (. - gText_Rom_265738)
	.endif
