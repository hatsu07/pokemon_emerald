	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:536 BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge
	.globl gText_Rom_230A5E
gText_Rom_230A5E: @ 0x08230A5E
	.string "かちぬきチームバトルの ちょうせんを\nちゅうし なされますかな?"
	.byte EOS
	.if (. - gText_Rom_230A5E) > 0x21
	.error "gText_Rom_230A5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230A5E) < 0x21
	.space 0x21 - (. - gText_Rom_230A5E)
	.endif
