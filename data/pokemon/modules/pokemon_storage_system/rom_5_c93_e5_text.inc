	@ src/data/party_menu.h:801 party_menu_line_801
	.globl gPartyMenuActionText_TakeItem
gPartyMenuActionText_TakeItem: @ 0x085C93E0
	.string "あずかる{EOS}"
	.if (. - gPartyMenuActionText_TakeItem) > 0x5
	.error "gPartyMenuActionText_TakeItem may not grow beyond its original slot"
	.endif
	.if (. - gPartyMenuActionText_TakeItem) < 0x5
	.space 0x5 - (. - gPartyMenuActionText_TakeItem)
	.endif

	@ src/pokemon_storage_system.c:8079 pokemon_storage_system_line_8079
	.globl gPartyMenuActionText_Store
gPartyMenuActionText_Store: @ 0x085C93E5
	.string "あずける{EOS}"
	.if (. - gPartyMenuActionText_Store) > 0x5
	.error "gPartyMenuActionText_Store may not grow beyond its original slot"
	.endif
	.if (. - gPartyMenuActionText_Store) < 0x5
	.space 0x5 - (. - gPartyMenuActionText_Store)
	.endif
	@ Decoded text from ROM range: offset=0x5C93EA, size=0x3
	.string "みる{EOS}"
