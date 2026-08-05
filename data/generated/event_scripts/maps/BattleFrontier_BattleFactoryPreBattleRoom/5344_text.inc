	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:493 BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge
	.globl gText_Rom_2324E3
gText_Rom_2324E3: @ 0x082324E3
	.string "バトルトレードの ちょうせんを\nちゅうし されますか?"
	.byte EOS
	.if (. - gText_Rom_2324E3) > 0x1c
	.error "gText_Rom_2324E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2324E3) < 0x1c
	.space 0x1c - (. - gText_Rom_2324E3)
	.endif
