	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:943 BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ (+1 aliases)
	.globl gText_Rom_22955F
gText_Rom_22955F: @ 0x0822955F
	.string "バトルトーナメント レベル50\nゆうしょうは {PLAYER}さん です!\lおめでとう ございます!{EOS}"
	.if (. - gText_Rom_22955F) > 0x2d
	.error "gText_Rom_22955F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22955F) < 0x2d
	.space 0x2d - (. - gText_Rom_22955F)
	.endif
