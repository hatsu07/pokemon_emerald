	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1010 LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere
	.globl gText_Rom_207692
gText_Rom_207692: @ 0x08207692
	.string "ここに くれば\nポケモンを たくさん みられるから\lさんぽコースに してるの!$"
	.if (. - gText_Rom_207692) > 0x28
	.error "gText_Rom_207692 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207692) < 0x28
	.space 0x28 - (. - gText_Rom_207692)
	.endif
