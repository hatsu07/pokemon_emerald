	@ data/maps/EverGrandeCity_PokemonLeague_1F/scripts.inc:122 EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
	.globl gText_Rom_2111E8
gText_Rom_2111E8: @ 0x082111E8
	.string "これより さきは\nすべての ジムバッジを あつめた\lトレーナーだけが すすめます!\pトレーナーよ! きみの ジムバッジ\nかくにん させてください{EOS}"
	.if (. - gText_Rom_2111E8) > 0x49
	.error "gText_Rom_2111E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2111E8) < 0x49
	.space 0x49 - (. - gText_Rom_2111E8)
	.endif
