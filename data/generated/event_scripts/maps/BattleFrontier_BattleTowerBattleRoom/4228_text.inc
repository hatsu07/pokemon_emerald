	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:451 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent
	.globl gText_Rom_22237E
gText_Rom_22237E: @ 0x0822237E
	.string "つぎは 4にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - gText_Rom_22237E) > 0x1d
	.error "gText_Rom_22237E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22237E) < 0x1d
	.space 0x1d - (. - gText_Rom_22237E)
	.endif
