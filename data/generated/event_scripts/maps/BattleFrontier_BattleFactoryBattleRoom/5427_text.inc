	@ data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc:263 BattleFrontier_BattleFactoryBattleRoom_Text_ShakeOutKnowledgeBringItOn
	.globl gText_Rom_232F10
gText_Rom_232F10: @ 0x08232F10
	.string "ありったけの ちしき ふりしぼって\nかかって こいやっ!"
	.byte EOS
	.if (. - gText_Rom_232F10) > 0x1d
	.error "gText_Rom_232F10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232F10) < 0x1d
	.space 0x1d - (. - gText_Rom_232F10)
	.endif
