	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:373 BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults
	.globl gText_Rom_2314DC
gText_Rom_2314DC: @ 0x082314DC
	.string "おつかれさまでした!\pレンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!\pせいせきを レポートに かきますので\nしょうしょう おまちください!"
	.byte EOS
	.if (. - gText_Rom_2314DC) > 0x53
	.error "gText_Rom_2314DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2314DC) < 0x53
	.space 0x53 - (. - gText_Rom_2314DC)
	.endif
