	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:443 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent
	.globl gText_Rom_222344
gText_Rom_222344: @ 0x08222344
	.string "つぎは 2にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - gText_Rom_222344) > 0x1d
	.error "gText_Rom_222344 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222344) < 0x1d
	.space 0x1d - (. - gText_Rom_222344)
	.endif
