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
