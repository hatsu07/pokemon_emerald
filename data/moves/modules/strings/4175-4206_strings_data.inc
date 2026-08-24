	@ src/data/moves_info.h:1109 moves_info_line_1109 (+1 aliases)
	.globl gText_Rom_5C8FD6
gText_Rom_5C8FD6: @ 0x085C8FD6
	.string "なきごえ{EOS}"
	.if (. - gText_Rom_5C8FD6) > 0x5
	.error "gText_Rom_5C8FD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FD6) < 0x5
	.space 0x5 - (. - gText_Rom_5C8FD6)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085C8FDB: pokedex.s: sub_080BF0C8
	.globl gPokedexData_085C8FDB
gPokedexData_085C8FDB: @ 0x085C8FDB
	@ analyzed canonical ROM range 0x085C8FDB-0x085C8FDC
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0x14, 0xFF
	.globl gText_SizeComparedTo
	@ src/strings.c:59 gText_SizeComparedTo
	.globl gText_SizeComparedTo
gText_SizeComparedTo: @ 0x085C8FDD
	.string "の おおきさくらべ{EOS}"
	.if (. - gText_SizeComparedTo) > 0xa
	.error "gText_SizeComparedTo may not grow beyond its original slot"
	.endif
	.if (. - gText_SizeComparedTo) < 0xa
	.space 0xa - (. - gText_SizeComparedTo)
	.endif

	@ src/strings.c:60 gText_PokedexRegistration
	.globl gText_PokedexRegistration
gText_PokedexRegistration: @ 0x085C8FE7
	.string "ポケモンずかんの とうろく かんりょう!{EOS}"
	.if (. - gText_PokedexRegistration) > 0x15
	.error "gText_PokedexRegistration may not grow beyond its original slot"
	.endif
	.if (. - gText_PokedexRegistration) < 0x15
	.space 0x15 - (. - gText_PokedexRegistration)
	.endif

	@ src/strings.c:63 gText_SearchingPleaseWait
	.globl gText_SearchingPleaseWait
gText_SearchingPleaseWait: @ 0x085C8FFC
	.string "けんさくを しています……{EOS}"
	.if (. - gText_SearchingPleaseWait) > 0xe
	.error "gText_SearchingPleaseWait may not grow beyond its original slot"
	.endif
	.if (. - gText_SearchingPleaseWait) < 0xe
	.space 0xe - (. - gText_SearchingPleaseWait)
	.endif

	@ src/strings.c:64 gText_SearchCompleted
	.globl gText_SearchCompleted
gText_SearchCompleted: @ 0x085C900A
	.string "けんさくが しゅうりょう しました!{EOS}"
	.if (. - gText_SearchCompleted) > 0x13
	.error "gText_SearchCompleted may not grow beyond its original slot"
	.endif
	.if (. - gText_SearchCompleted) < 0x13
	.space 0x13 - (. - gText_SearchCompleted)
	.endif

	@ src/strings.c:65 gText_NoMatchingPkmnWereFound
	.globl gText_NoMatchingPkmnWereFound
gText_NoMatchingPkmnWereFound: @ 0x085C901D
	.string "がいとう する ポケモンは いませんでした……{EOS}"
	.if (. - gText_NoMatchingPkmnWereFound) > 0x18
	.error "gText_NoMatchingPkmnWereFound may not grow beyond its original slot"
	.endif
	.if (. - gText_NoMatchingPkmnWereFound) < 0x18
	.space 0x18 - (. - gText_NoMatchingPkmnWereFound)
	.endif

	@ src/strings.c:66 gText_SearchForPkmnBasedOnParameters
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SearchForPkmnBasedOnParameters
gText_SearchForPkmnBasedOnParameters: @ 0x085C9035
	.string "じょうけんを していして\nポケモンの けんさくを します{EOS}"
	.if (. - gText_SearchForPkmnBasedOnParameters) != 0x1d
	.error "gText_SearchForPkmnBasedOnParameters must retain its original byte length"
	.endif

	@ src/strings.c:67 gText_SwitchPokedexListings
	.globl gText_SwitchPokedexListings
gText_SwitchPokedexListings: @ 0x085C9052
	.string "ずかんリストの ならびを きりかえます{EOS}"
	.if (. - gText_SwitchPokedexListings) > 0x14
	.error "gText_SwitchPokedexListings may not grow beyond its original slot"
	.endif
	.if (. - gText_SwitchPokedexListings) < 0x14
	.space 0x14 - (. - gText_SwitchPokedexListings)
	.endif

	@ src/strings.c:68 gText_ReturnToPokedex
	.globl gText_ReturnToPokedex
gText_ReturnToPokedex: @ 0x085C9066
	.string "ずかんに もどります{EOS}"
	.if (. - gText_ReturnToPokedex) > 0xb
	.error "gText_ReturnToPokedex may not grow beyond its original slot"
	.endif
	.if (. - gText_ReturnToPokedex) < 0xb
	.space 0xb - (. - gText_ReturnToPokedex)
	.endif

	@ src/strings.c:69 gText_SelectPokedexMode
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SelectPokedexMode
gText_SelectPokedexMode: @ 0x085C9071
	.string "ずかんモードを してい します{EOS}"
	.if (. - gText_SelectPokedexMode) != 0x10
	.error "gText_SelectPokedexMode must retain its original byte length"
	.endif

	@ src/strings.c:70 gText_SelectPokedexListingMode
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SelectPokedexListingMode
gText_SelectPokedexListingMode: @ 0x085C9081
	.string "ずかんの ならびを してい します{EOS}"
	.if (. - gText_SelectPokedexListingMode) != 0x12
	.error "gText_SelectPokedexListingMode must retain its original byte length"
	.endif

	@ src/strings.c:71 gText_ListByFirstLetter
	.globl gText_ListByFirstLetter
gText_ListByFirstLetter: @ 0x085C9093
	.string "なまえの さいしょの もじを してい します\n /みつけたポケモンのみ{EOS}"
	.if (. - gText_ListByFirstLetter) > 0x24
	.error "gText_ListByFirstLetter may not grow beyond its original slot"
	.endif
	.if (. - gText_ListByFirstLetter) < 0x24
	.space 0x24 - (. - gText_ListByFirstLetter)
	.endif

	@ src/strings.c:72 gText_ListByBodyColor
	.globl gText_ListByBodyColor
gText_ListByBodyColor: @ 0x085C90B7
	.string "からだの いろを してい します\n /みつけたポケモンのみ{EOS}"
	.if (. - gText_ListByBodyColor) > 0x1e
	.error "gText_ListByBodyColor may not grow beyond its original slot"
	.endif
	.if (. - gText_ListByBodyColor) < 0x1e
	.space 0x1e - (. - gText_ListByBodyColor)
	.endif

	@ src/strings.c:73 gText_ListByType
	.globl gText_ListByType
gText_ListByType: @ 0x085C90D5
	.string "タイプを してい します\n /つかまえたポケモンのみ{EOS}"
	.if (. - gText_ListByType) > 0x1b
	.error "gText_ListByType may not grow beyond its original slot"
	.endif
	.if (. - gText_ListByType) < 0x1b
	.space 0x1b - (. - gText_ListByType)
	.endif

	@ src/strings.c:74 gText_ExecuteSearchSwitch
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ExecuteSearchSwitch
gText_ExecuteSearchSwitch: @ 0x085C90F0
	.string "けんさく/きりかえを じっこうします{EOS}"
	.if (. - gText_ExecuteSearchSwitch) != 0x13
	.error "gText_ExecuteSearchSwitch must retain its original byte length"
	.endif
