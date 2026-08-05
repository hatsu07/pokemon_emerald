	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_252155
gText_Rom_252155: @ 0x08252155
	.string "ぬいぐるみに　はなし　かけています！\pちょっと　こわい　ですね……$"
	.if (. - gText_Rom_252155) > 0x22
	.error "gText_Rom_252155 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252155) < 0x22
	.space 0x22 - (. - gText_Rom_252155)
	.endif
