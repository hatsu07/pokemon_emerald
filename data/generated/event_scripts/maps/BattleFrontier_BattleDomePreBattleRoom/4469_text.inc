	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:276 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2
	.globl gText_Rom_22844C
gText_Rom_22844C: @ 0x0822844C
	.string "まもなく 2かいせんが はじまります\nじゅんびの ほうは いかがですか?$"
	.if (. - gText_Rom_22844C) > 0x25
	.error "gText_Rom_22844C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22844C) < 0x25
	.space 0x25 - (. - gText_Rom_22844C)
	.endif
