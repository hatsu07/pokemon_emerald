	@ src/strings.c:59 gText_SizeComparedTo
	.globl gText_Rom_5C8FDD
gText_Rom_5C8FDD: @ 0x085C8FDD
	.string "の おおきさくらべ$"
	.if (. - gText_Rom_5C8FDD) > 0xa
	.error "gText_Rom_5C8FDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FDD) < 0xa
	.space 0xa - (. - gText_Rom_5C8FDD)
	.endif

	@ src/strings.c:60 gText_PokedexRegistration
	.globl gText_Rom_5C8FE7
gText_Rom_5C8FE7: @ 0x085C8FE7
	.string "ポケモンずかんの とうろく かんりょう!$"
	.if (. - gText_Rom_5C8FE7) > 0x15
	.error "gText_Rom_5C8FE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FE7) < 0x15
	.space 0x15 - (. - gText_Rom_5C8FE7)
	.endif

	@ src/strings.c:63 gText_SearchingPleaseWait
	.globl gText_Rom_5C8FFC
gText_Rom_5C8FFC: @ 0x085C8FFC
	.string "けんさくを しています……$"
	.if (. - gText_Rom_5C8FFC) > 0xe
	.error "gText_Rom_5C8FFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FFC) < 0xe
	.space 0xe - (. - gText_Rom_5C8FFC)
	.endif

	@ src/strings.c:64 gText_SearchCompleted
	.globl gText_Rom_5C900A
gText_Rom_5C900A: @ 0x085C900A
	.string "けんさくが しゅうりょう しました!$"
	.if (. - gText_Rom_5C900A) > 0x13
	.error "gText_Rom_5C900A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C900A) < 0x13
	.space 0x13 - (. - gText_Rom_5C900A)
	.endif

	@ src/strings.c:65 gText_NoMatchingPkmnWereFound
	.globl gText_Rom_5C901D
gText_Rom_5C901D: @ 0x085C901D
	.string "がいとう する ポケモンは いませんでした……$"
	.if (. - gText_Rom_5C901D) > 0x18
	.error "gText_Rom_5C901D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C901D) < 0x18
	.space 0x18 - (. - gText_Rom_5C901D)
	.endif

	@ src/strings.c:66 gText_SearchForPkmnBasedOnParameters
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9035
gText_Rom_5C9035: @ 0x085C9035
	.string "じょうけんを していして\nポケモンの けんさくを します$"
	.if (. - gText_Rom_5C9035) != 0x1d
	.error "gText_Rom_5C9035 must retain its original byte length"
	.endif
	.globl gText_Rom_5C904E
	.set gText_Rom_5C904E, gText_Rom_5C9035 + 0x19

	@ src/strings.c:67 gText_SwitchPokedexListings
	.globl gText_Rom_5C9052
gText_Rom_5C9052: @ 0x085C9052
	.string "ずかんリストの ならびを きりかえます$"
	.if (. - gText_Rom_5C9052) > 0x14
	.error "gText_Rom_5C9052 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9052) < 0x14
	.space 0x14 - (. - gText_Rom_5C9052)
	.endif

	@ src/strings.c:68 gText_ReturnToPokedex
	.globl gText_Rom_5C9066
gText_Rom_5C9066: @ 0x085C9066
	.string "ずかんに もどります$"
	.if (. - gText_Rom_5C9066) > 0xb
	.error "gText_Rom_5C9066 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9066) < 0xb
	.space 0xb - (. - gText_Rom_5C9066)
	.endif

	@ src/strings.c:69 gText_SelectPokedexMode
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9071
gText_Rom_5C9071: @ 0x085C9071
	.string "ずかんモードを してい します$"
	.if (. - gText_Rom_5C9071) != 0x10
	.error "gText_Rom_5C9071 must retain its original byte length"
	.endif
	.globl gText_Rom_5C907D
	.set gText_Rom_5C907D, gText_Rom_5C9071 + 0xc

	@ src/strings.c:70 gText_SelectPokedexListingMode
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9081
gText_Rom_5C9081: @ 0x085C9081
	.string "ずかんの ならびを してい します$"
	.if (. - gText_Rom_5C9081) != 0x12
	.error "gText_Rom_5C9081 must retain its original byte length"
	.endif
	.globl gText_Rom_5C908F
	.set gText_Rom_5C908F, gText_Rom_5C9081 + 0xe

	@ src/strings.c:71 gText_ListByFirstLetter
	.globl gText_Rom_5C9093
gText_Rom_5C9093: @ 0x085C9093
	.string "なまえの さいしょの もじを してい します\n /みつけたポケモンのみ$"
	.if (. - gText_Rom_5C9093) > 0x24
	.error "gText_Rom_5C9093 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9093) < 0x24
	.space 0x24 - (. - gText_Rom_5C9093)
	.endif

	@ src/strings.c:72 gText_ListByBodyColor
	.globl gText_Rom_5C90B7
gText_Rom_5C90B7: @ 0x085C90B7
	.string "からだの いろを してい します\n /みつけたポケモンのみ$"
	.if (. - gText_Rom_5C90B7) > 0x1e
	.error "gText_Rom_5C90B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C90B7) < 0x1e
	.space 0x1e - (. - gText_Rom_5C90B7)
	.endif

	@ src/strings.c:73 gText_ListByType
	.globl gText_Rom_5C90D5
gText_Rom_5C90D5: @ 0x085C90D5
	.string "タイプを してい します\n /つかまえたポケモンのみ$"
	.if (. - gText_Rom_5C90D5) > 0x1b
	.error "gText_Rom_5C90D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C90D5) < 0x1b
	.space 0x1b - (. - gText_Rom_5C90D5)
	.endif

	@ src/strings.c:74 gText_ExecuteSearchSwitch
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C90F0
gText_Rom_5C90F0: @ 0x085C90F0
	.string "けんさく/きりかえを じっこうします$"
	.if (. - gText_Rom_5C90F0) != 0x13
	.error "gText_Rom_5C90F0 must retain its original byte length"
	.endif
	.globl gText_Rom_5C90FF
	.set gText_Rom_5C90FF, gText_Rom_5C90F0 + 0xf
