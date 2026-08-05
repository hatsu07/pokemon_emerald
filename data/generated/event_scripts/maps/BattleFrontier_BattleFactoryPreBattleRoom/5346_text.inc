	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:497 BattleFrontier_BattleFactoryPreBattleRoom_Text_InvestigatedUpcomingOpponent
	.globl gText_Rom_2324FF
gText_Rom_2324FF: @ 0x082324FF
	.string "さあさあ!\nこんかいの たいせんあいて ですが\lわたしの ちょうさ では……"
	.byte EOS
	.if (. - gText_Rom_2324FF) > 0x27
	.error "gText_Rom_2324FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2324FF) < 0x27
	.space 0x27 - (. - gText_Rom_2324FF)
	.endif
