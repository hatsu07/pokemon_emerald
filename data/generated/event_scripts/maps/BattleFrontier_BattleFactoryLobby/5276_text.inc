	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:395 BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints
	.globl gText_Rom_231590
gText_Rom_231590: @ 0x08231590
	.string "おやや?\pバトルポイントが いっぱい ですねー\pポイントを ごりようしてから\nまた きてください!"
	.byte EOS
	.if (. - gText_Rom_231590) > 0x32
	.error "gText_Rom_231590 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231590) < 0x32
	.space 0x32 - (. - gText_Rom_231590)
	.endif
