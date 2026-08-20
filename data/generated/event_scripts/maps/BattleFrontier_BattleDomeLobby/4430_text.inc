	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:587 BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50
	.globl gText_Rom_227AD8
gText_Rom_227AD8: @ 0x08227AD8
	.string "ぜんかい おこなわれた レベル50\nダブル バトルトーナメントの けっかだ!{EOS}"
	.if (. - gText_Rom_227AD8) > 0x27
	.error "gText_Rom_227AD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227AD8) < 0x27
	.space 0x27 - (. - gText_Rom_227AD8)
	.endif
