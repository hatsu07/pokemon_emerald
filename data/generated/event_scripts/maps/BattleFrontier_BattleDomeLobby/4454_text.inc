	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:652 BattleFrontier_BattleDomeLobby_Text_RecordLastMatch
	.globl gText_Rom_227D2E
gText_Rom_227D2E: @ 0x08227D2E
	.string "バトルドームで\nさいごに おこなった たたかいを\lフロンティアパスに きろく されますか?$"
	.if (. - gText_Rom_227D2E) > 0x2e
	.error "gText_Rom_227D2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227D2E) < 0x2e
	.space 0x2e - (. - gText_Rom_227D2E)
	.endif
