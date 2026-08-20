	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:591 BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen
	.globl gText_Rom_227AFF
gText_Rom_227AFF: @ 0x08227AFF
	.string "ぜんかい おこなわれた オープンレベル\nシングル バトルトーナメントの けっかだ!{EOS}"
	.if (. - gText_Rom_227AFF) > 0x2a
	.error "gText_Rom_227AFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227AFF) < 0x2a
	.space 0x2a - (. - gText_Rom_227AFF)
	.endif
