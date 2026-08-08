	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:403 BattleFrontier_BattleArenaLobby_Text_SelectThreeMons
	.globl gText_Rom_22F933
gText_Rom_22F933: @ 0x0822F933
	.string "では さんかする ポケモンを\n3ひき おえらび くだされ!"
	.byte EOS
	.if (. - gText_Rom_22F933) > 0x1e
	.error "gText_Rom_22F933 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F933) < 0x1e
	.space 0x1e - (. - gText_Rom_22F933)
	.endif
