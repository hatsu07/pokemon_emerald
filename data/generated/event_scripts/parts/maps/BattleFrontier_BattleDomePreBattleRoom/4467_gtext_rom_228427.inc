	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:272 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1
	.globl gText_Rom_228427
gText_Rom_228427: @ 0x08228427
	.string "まもなく 1かいせんが はじまります\nじゅんびの ほうは いかがですか?$"
	.if (. - gText_Rom_228427) > 0x25
	.error "gText_Rom_228427 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_228427) < 0x25
	.space 0x25 - (. - gText_Rom_228427)
	.endif
