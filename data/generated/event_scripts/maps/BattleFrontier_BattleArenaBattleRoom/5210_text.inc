	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:532 BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown
	.globl gText_Rom_230A44
gText_Rom_230A44: @ 0x08230A44
	.string "レポートを かいて\nしゅうりょう なされますかな?"
	.byte EOS
	.if (. - gText_Rom_230A44) > 0x1a
	.error "gText_Rom_230A44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230A44) < 0x1a
	.space 0x1a - (. - gText_Rom_230A44)
	.endif
