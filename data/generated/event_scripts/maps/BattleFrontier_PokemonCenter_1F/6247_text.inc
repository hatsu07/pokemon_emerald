	@ data/maps/BattleFrontier_PokemonCenter_1F/scripts.inc:43 BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena
	.globl gText_Rom_23B1C4
gText_Rom_23B1C4: @ 0x0823B1C4
	.string "よしっ! おつぎは バトルアリーナだ!\nあのポケモンと あのポケモンを\lパソコンから つれて いくぜ!"
	.byte EOS
	.if (. - gText_Rom_23B1C4) > 0x34
	.error "gText_Rom_23B1C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23B1C4) < 0x34
	.space 0x34 - (. - gText_Rom_23B1C4)
	.endif
