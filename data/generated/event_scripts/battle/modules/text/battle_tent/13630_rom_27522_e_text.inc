	@ data/text/battle_tent.inc:190 VerdanturfTown_BattleTentLobby_Text_SelectThreeMons
	.globl gText_Rom_27522E
gText_Rom_27522E: @ 0x0827522E
	.string "では ちょうせんする ポケモンを\n3ひき えらんでくれ$"
	.if (. - gText_Rom_27522E) > 0x1c
	.error "gText_Rom_27522E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27522E) < 0x1c
	.space 0x1c - (. - gText_Rom_27522E)
	.endif
