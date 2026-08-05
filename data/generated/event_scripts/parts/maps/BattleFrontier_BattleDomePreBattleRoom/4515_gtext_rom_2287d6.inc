	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:383 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort (+1 aliases)
	.globl gText_Rom_2287D6
gText_Rom_2287D6: @ 0x082287D6
	.string "さあ ヒースさまとの けっしょうせん です!\nじゅんびの ほうは いかがですか?$"
	.if (. - gText_Rom_2287D6) > 0x29
	.error "gText_Rom_2287D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2287D6) < 0x29
	.space 0x29 - (. - gText_Rom_2287D6)
	.endif
