	@ data/maps/BattleFrontier_Lounge3/scripts.inc:245 BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints
	.globl gText_Rom_237F29
gText_Rom_237F29: @ 0x08237F29
	.string "じゃあよ…… あんたの\nバトルポイント ちょーっとで いいから\lおれに あずけて くんねぇ?\pちゃーんと おれいは するからよ!"
	.byte EOS
	.if (. - gText_Rom_237F29) > 0x41
	.error "gText_Rom_237F29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237F29) < 0x41
	.space 0x41 - (. - gText_Rom_237F29)
	.endif
