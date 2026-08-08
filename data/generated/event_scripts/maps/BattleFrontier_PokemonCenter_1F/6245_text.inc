	@ data/maps/BattleFrontier_PokemonCenter_1F/scripts.inc:40 BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon
	.globl gText_Rom_23B17F
gText_Rom_23B17F: @ 0x0823B17F
	.string "みたこともない ポケモンを\nつかってる ひとが いた!\pトレーナーズスクールでも\nならわなかった けど\lあんなの どこに いるのかなあ!"
	.byte EOS
	.if (. - gText_Rom_23B17F) > 0x45
	.error "gText_Rom_23B17F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23B17F) < 0x45
	.space 0x45 - (. - gText_Rom_23B17F)
	.endif
