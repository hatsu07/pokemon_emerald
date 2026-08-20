	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:651 BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility
	.globl gText_Rom_22CDE1
gText_Rom_22CDE1: @ 0x0822CDE1
	.string "あしもとから わきおこる\nつよい ちからが みえます……\p……そして\nにげようとしても にげられない\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CDE1) > 0x45
	.error "gText_Rom_22CDE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CDE1) < 0x45
	.space 0x45 - (. - gText_Rom_22CDE1)
	.endif
