	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:595 BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen
	.globl gText_Rom_227B29
gText_Rom_227B29: @ 0x08227B29
	.string "ぜんかい おこなわれた オープンレベル\nダブル バトルトーナメントの けっかだ!{EOS}"
	.if (. - gText_Rom_227B29) > 0x29
	.error "gText_Rom_227B29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227B29) < 0x29
	.space 0x29 - (. - gText_Rom_227B29)
	.endif
