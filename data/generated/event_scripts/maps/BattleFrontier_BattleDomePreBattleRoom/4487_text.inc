	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:316 BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForRound2
	.globl gText_Rom_22859C
gText_Rom_22859C: @ 0x0822859C
	.string "1かいせん とっぱ\nおめでとう ございます!\pつぎは 2かいせん です\nじゅんびの ほうは いかがですか?$"
	.if (. - gText_Rom_22859C) > 0x36
	.error "gText_Rom_22859C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22859C) < 0x36
	.space 0x36 - (. - gText_Rom_22859C)
	.endif
