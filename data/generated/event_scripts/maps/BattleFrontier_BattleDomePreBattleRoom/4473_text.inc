	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:284 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals
	.globl gText_Rom_228499
gText_Rom_228499: @ 0x08228499
	.string "まもなく けっしょうせんが はじまります\nじゅんびの ほうは いかがですか?{EOS}"
	.if (. - gText_Rom_228499) > 0x27
	.error "gText_Rom_228499 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_228499) < 0x27
	.space 0x27 - (. - gText_Rom_228499)
	.endif
