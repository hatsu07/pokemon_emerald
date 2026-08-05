	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:460 BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
	.globl gText_Rom_231840
gText_Rom_231840: @ 0x08231840
	.string "レンタルポケモンと\nおあずかり していた ポケモンを\lこうかん しましょう!\pせいせきを レポートに かきますので\nしょうしょう おまちください!"
	.byte EOS
	.if (. - gText_Rom_231840) > 0x4a
	.error "gText_Rom_231840 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231840) < 0x4a
	.space 0x4a - (. - gText_Rom_231840)
	.endif
