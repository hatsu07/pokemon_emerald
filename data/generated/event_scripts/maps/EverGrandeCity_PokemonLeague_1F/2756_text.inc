	@ data/maps/EverGrandeCity_PokemonLeague_1F/scripts.inc:125 EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_211231
gText_Rom_211231: @ 0x08211231
	.string "きみは まだ\nすべての ジムバッジを もっていない!\pポケモン リーグを めざすなら\nでなおして きなさい$"
	.if (. - gText_Rom_211231) != 0x36
	.error "gText_Rom_211231 must retain its original byte length"
	.endif
