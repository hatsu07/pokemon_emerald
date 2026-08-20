	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:948 BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp (+1 aliases)
	.globl gText_Rom_22958C
gText_Rom_22958C: @ 0x0822958C
	.string "バトルトーナメント オープンレベル\nゆうしょうは {PLAYER}さん!\lおめでとう ございます!{EOS}"
	.if (. - gText_Rom_22958C) > 0x2c
	.error "gText_Rom_22958C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22958C) < 0x2c
	.space 0x2c - (. - gText_Rom_22958C)
	.endif
