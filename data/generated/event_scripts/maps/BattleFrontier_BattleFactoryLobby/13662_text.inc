	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:381 BattleFrontier_BattleFactoryLobby_Text_ReturnMons (+1 aliases)
	.globl gText_Rom_275571
gText_Rom_275571: @ 0x08275571
	.string "レンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!{EOS}"
	.if (. - gText_Rom_275571) > 0x25
	.error "gText_Rom_275571 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275571) < 0x25
	.space 0x25 - (. - gText_Rom_275571)
	.endif
