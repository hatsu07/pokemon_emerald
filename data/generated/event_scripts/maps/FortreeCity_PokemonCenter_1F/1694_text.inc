	@ data/maps/FortreeCity_PokemonCenter_1F/scripts.inc:30 FortreeCity_PokemonCenter_1F_Text_GoToSafariZone
	.globl gText_Rom_204C95
gText_Rom_204C95: @ 0x08204C95
	.string "きみぃ\nポケモンずかん つくっておるのか?\pふむぅ 121ばん どうろの\nサファリゾーンに いっては どうかな?$"
	.if (. - gText_Rom_204C95) > 0x39
	.error "gText_Rom_204C95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204C95) < 0x39
	.space 0x39 - (. - gText_Rom_204C95)
	.endif
