	@ data/maps/BattleFrontier_Lounge3/scripts.inc:251 BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints
	.globl gText_Rom_237F8B
gText_Rom_237F8B: @ 0x08237F8B
	.string "いやいやいやー!!\pバトルポイントが たらない じゃない!\nつまんない じょうだん やめましょうや!"
	.byte EOS
	.if (. - gText_Rom_237F8B) > 0x33
	.error "gText_Rom_237F8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237F8B) < 0x33
	.space 0x33 - (. - gText_Rom_237F8B)
	.endif
