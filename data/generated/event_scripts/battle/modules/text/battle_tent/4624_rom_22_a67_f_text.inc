	@ data/text/battle_tent.inc:190 VerdanturfTown_BattleTentLobby_Text_SelectThreeMons
	.globl gText_Rom_22A67F
gText_Rom_22A67F: @ 0x0822A67F
	.string "では ちょうせんする ポケモンを\n3ひき えらんでくれ{EOS}"
	.if (. - gText_Rom_22A67F) > 0x1c
	.error "gText_Rom_22A67F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A67F) < 0x1c
	.space 0x1c - (. - gText_Rom_22A67F)
	.endif
