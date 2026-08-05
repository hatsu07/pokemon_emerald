	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:466 BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
	.globl gText_Rom_23188A
gText_Rom_23188A: @ 0x0823188A
	.string "バトルファクトリーで\nさいごに おこなった たたかいを\lフロンティアパスに きろく いたしますか?"
	.byte EOS
	.if (. - gText_Rom_23188A) > 0x32
	.error "gText_Rom_23188A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23188A) < 0x32
	.space 0x32 - (. - gText_Rom_23188A)
	.endif
