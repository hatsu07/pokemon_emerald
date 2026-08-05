	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:381 BattleFrontier_BattleFactoryLobby_Text_ReturnMons (+1 aliases)
	.globl gText_Rom_23152F
gText_Rom_23152F: @ 0x0823152F
	.string "レンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!"
	.byte EOS
	.if (. - gText_Rom_23152F) > 0x25
	.error "gText_Rom_23152F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23152F) < 0x25
	.space 0x25 - (. - gText_Rom_23152F)
	.endif
