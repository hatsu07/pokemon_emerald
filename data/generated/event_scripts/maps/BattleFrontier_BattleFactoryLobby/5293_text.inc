	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:450 BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead
	.globl gText_Rom_2317EA
gText_Rom_2317EA: @ 0x082317EA
	.string "ファクトリーヘッドへの しょうり!\nならびに 7れんしょう たっせい\lおめでとう ございます!"
	.byte EOS
	.if (. - gText_Rom_2317EA) > 0x30
	.error "gText_Rom_2317EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2317EA) < 0x30
	.space 0x30 - (. - gText_Rom_2317EA)
	.endif
