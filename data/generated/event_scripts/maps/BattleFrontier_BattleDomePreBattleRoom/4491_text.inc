	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:330 BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForFinals
	.globl gText_Rom_22860F
gText_Rom_22860F: @ 0x0822860F
	.string "けっしょう しんしゅつ\nおめでとう ございます\pゆうしょうまで あと 1しょう ですね\nじゅんびの ほうは いかがですか?{EOS}"
	.if (. - gText_Rom_22860F) > 0x3e
	.error "gText_Rom_22860F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22860F) < 0x3e
	.space 0x3e - (. - gText_Rom_22860F)
	.endif
