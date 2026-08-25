.if .L__inc_fragment_select_491dfd6fddc3 == 1
	@ src/data/party_menu.h:802 party_menu_line_802
	.globl gText_Rom_57CA9F
gText_Rom_57CA9F: @ 0x0857CA9F
	.string "いどう{EOS}"
	.if (. - gText_Rom_57CA9F) > 0x4
	.error "gText_Rom_57CA9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CA9F) < 0x4
	.space 0x4 - (. - gText_Rom_57CA9F)
	.endif
	@ analyzed canonical ROM range 0x0857CAA3-0x0857CAA8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xA3, 0xA1, 0x46, 0x2E, 0x00, 0x0D
	.globl gText_Rom_57CAA9
gText_Rom_57CAA9: @ 0x0857CAA9
	.string "いどう{EOS}"
	.if (. - gText_Rom_57CAA9) > 0x4
	.error "gText_Rom_57CAA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CAA9) < 0x4
	.space 0x4 - (. - gText_Rom_57CAA9)
	.endif
	@ analyzed canonical ROM range 0x0857CAAD-0x0857CAB2
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xA3, 0xA2, 0x46, 0x2E, 0x00, 0x0D
	.globl gText_Rom_57CAB3
gText_Rom_57CAB3: @ 0x0857CAB3
	.string "いどう{EOS}"
	.if (. - gText_Rom_57CAB3) > 0x4
	.error "gText_Rom_57CAB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CAB3) < 0x4
	.space 0x4 - (. - gText_Rom_57CAB3)
	.endif
	@ Decoded text from ROM range: offset=0x57CAB7, size=0x50
	.string "22ばん　どうろ{EOS}"
	.string "23ばん　どうろ{EOS}"
	.string "24ばん　どうろ{EOS}"
	.string "25ばん　どうろ{EOS}"
	.string "トキワのもり{EOS}"
	.string "オツキミやま{EOS}"
	.string "サント・アンヌごう{EOS}"
	.string "ちかつうろ{EOS}"
	.string "ちかつうろ{EOS}"
	.string "ディグダのあな{EOS}"

.elseif .L__inc_fragment_select_491dfd6fddc3 == 2
	@ src/pokemon_storage_system.c:8081 pokemon_storage_system_line_8081
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gPartyMenuActionText_SendMon
gPartyMenuActionText_SendMon: @ 0x085C9AA1
	.string "いれかえる{EOS}"
	.if (. - gPartyMenuActionText_SendMon) != 0x6
	.error "gPartyMenuActionText_SendMon must retain its original byte length"
	.endif
	@ Decoded text from ROM range: offset=0x5C9AA7, size=0x8
	.string "せんとうにだす{EOS}"

	@ src/data/party_menu.h:797 party_menu_line_797
	.globl gPartyMenuActionText_Switch
gPartyMenuActionText_Switch: @ 0x085C9AAF
	.string "ならびかえ{EOS}"
	.if (. - gPartyMenuActionText_Switch) > 0x6
	.error "gPartyMenuActionText_Switch may not grow beyond its original slot"
	.endif
	.if (. - gPartyMenuActionText_Switch) < 0x6
	.space 0x6 - (. - gPartyMenuActionText_Switch)
	.endif

	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gPartyMenuActionText_Give
gPartyMenuActionText_Give: @ 0x085C9AB5
	.string "つよさをみる{EOS}"
	.if (. - gPartyMenuActionText_Give) > 0x7
	.error "gPartyMenuActionText_Give may not grow beyond its original slot"
	.endif
	.if (. - gPartyMenuActionText_Give) < 0x7
	.space 0x7 - (. - gPartyMenuActionText_Give)
	.endif
	@ Decoded text from ROM range: offset=0x5C9ABC, size=0xD
	.string "つかえるわざ{EOS}"
	.string "さんかする{EOS}"
.elseif .L__inc_fragment_select_491dfd6fddc3 == 3
	@ src/strings.c:337 gText_Able
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Able_Copy_Menus
gText_Able_Copy_Menus: @ 0x085C9AC9
	.string "さんかしない{EOS}"
	.if (. - gText_Able_Copy_Menus) != 0x7
	.error "gText_Able_Copy_Menus must retain its original byte length"
	.endif
	@ src/data/party_menu.h:804 party_menu_line_804
	.globl gPartyMenuActionText_TakeMail
gPartyMenuActionText_TakeMail: @ 0x085C9AD0
	.string "メールを とる{EOS}"
	.if (. - gPartyMenuActionText_TakeMail) > 0x8
	.error "gPartyMenuActionText_TakeMail may not grow beyond its original slot"
	.endif
	.if (. - gPartyMenuActionText_TakeMail) < 0x8
	.space 0x8 - (. - gPartyMenuActionText_TakeMail)
	.endif

	@ src/data/party_menu.h:805 party_menu_line_805
	.globl gPartyMenuActionText_Read
gPartyMenuActionText_Read: @ 0x085C9AD8
	.string "メールを よむ{EOS}"
	.if (. - gPartyMenuActionText_Read) > 0x8
	.error "gPartyMenuActionText_Read may not grow beyond its original slot"
	.endif
	.if (. - gPartyMenuActionText_Read) < 0x8
	.space 0x8 - (. - gPartyMenuActionText_Read)
	.endif
	@ Decoded text from ROM range: offset=0x5C9AE0, size=0x7
	.string "こうかんする{EOS}"
.elseif .L__inc_fragment_select_491dfd6fddc3 == 4
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
	.globl gPokemonStorageMenuText_Give
gPokemonStorageMenuText_Give: @ 0x085CB3C8
	.string "もたせる{EOS}"
	.if (. - gPokemonStorageMenuText_Give) > 0x5
	.error "gPokemonStorageMenuText_Give may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Give) < 0x5
	.space 0x5 - (. - gPokemonStorageMenuText_Give)
	.endif

.endif
