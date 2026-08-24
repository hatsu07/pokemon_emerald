	@ src/data/party_menu.h:801 party_menu_line_801
	.globl gPokemonStorageMenuText_Take
gPokemonStorageMenuText_Take: @ 0x085CB3C3
	.string "あずかる{EOS}"
	.if (. - gPokemonStorageMenuText_Take) > 0x5
	.error "gPokemonStorageMenuText_Take may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Take) < 0x5
	.space 0x5 - (. - gPokemonStorageMenuText_Take)
	.endif

	@ src/data/party_menu.h:800 party_menu_line_800 (+2 aliases)
	.globl gText_Rom_5CB3C8
gText_Rom_5CB3C8: @ 0x085CB3C8
	.string "もたせる{EOS}"
	.if (. - gText_Rom_5CB3C8) > 0x5
	.error "gText_Rom_5CB3C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3C8) < 0x5
	.space 0x5 - (. - gText_Rom_5CB3C8)
	.endif

