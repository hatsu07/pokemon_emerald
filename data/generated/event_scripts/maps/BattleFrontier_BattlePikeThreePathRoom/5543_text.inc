	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:342 BattleFrontier_BattlePikeThreePathRoom_Text_AromaOfPokemon
	.globl gText_Rom_2342AE
gText_Rom_2342AE: @ 0x082342AE
	.string "ポケモンの においが\nただよってくる ような\lきが するの ですが……"
	.byte EOS
	.if (. - gText_Rom_2342AE) > 0x24
	.error "gText_Rom_2342AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2342AE) < 0x24
	.space 0x24 - (. - gText_Rom_2342AE)
	.endif
