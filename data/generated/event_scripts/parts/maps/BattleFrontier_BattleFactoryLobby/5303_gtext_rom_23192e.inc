	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:483 BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon
	.globl gText_Rom_23192E
gText_Rom_23192E: @ 0x0823192E
	.string "しゅるいに だまされて よわいポケモンと\nこうかん しちゃった……\pボロまけ……"
	.byte EOS
	.if (. - gText_Rom_23192E) > 0x29
	.error "gText_Rom_23192E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23192E) < 0x29
	.space 0x29 - (. - gText_Rom_23192E)
	.endif
