	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:544 BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle
	.globl gText_Rom_230A9B
gText_Rom_230A9B: @ 0x08230A9B
	.string "さきほどの たたかいを\nフロンティアパスに きろく されますかな?"
	.byte EOS
	.if (. - gText_Rom_230A9B) > 0x22
	.error "gText_Rom_230A9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230A9B) < 0x22
	.space 0x22 - (. - gText_Rom_230A9B)
	.endif
