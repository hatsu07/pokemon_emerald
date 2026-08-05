	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:385 BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins
	.globl gText_Rom_231554
gText_Rom_231554: @ 0x08231554
	.string "バトルトレード 7せん とっぱ\nおめでとう ございます!"
	.byte EOS
	.if (. - gText_Rom_231554) > 0x1d
	.error "gText_Rom_231554 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231554) < 0x1d
	.space 0x1d - (. - gText_Rom_231554)
	.endif
