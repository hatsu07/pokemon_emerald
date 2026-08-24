	@ src/strings.c:402 gText_XNatureFatefulEncounter
	.globl gText_XNatureFatefulEncounter
gText_XNatureFatefulEncounter: @ 0x085CA512
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\nうんめいてきな であいを した{EOS}"
	.if (. - gText_XNatureFatefulEncounter) > 0x29
	.error "gText_XNatureFatefulEncounter may not grow beyond its original slot"
	.endif
	.if (. - gText_XNatureFatefulEncounter) < 0x29
	.space 0x29 - (. - gText_XNatureFatefulEncounter)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085CA53B: pokemon_summary_screen.s: BufferMonTrainerMemo
	.globl gPokemonSummaryScreenData_085CA53B
gPokemonSummaryScreenData_085CA53B: @ 0x085CA53B
	@ analyzed canonical ROM range 0x085CA53B-0x085CA562
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x28 bytes=40
	.byte 0xF7, 0x00, 0xF7, 0x02, 0xF7, 0x01, 0xF7, 0x05, 0x0E, 0x02, 0x06, 0x08, 0x00, 0xF9, 0x05, 0xF7
	.byte 0x00, 0xF7, 0x03, 0xF7, 0x01, 0x19, 0x14, 0x07, 0xFE, 0xF7, 0x00, 0xF7, 0x04, 0xF7, 0x01, 0x44
	.byte 0x00, 0x01, 0x50, 0x10, 0x26, 0x03, 0x41, 0xFF

	@ src/strings.c:404 gText_XNature
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_XNature
gText_XNature: @ 0x085CA563
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく{EOS}"
	.if (. - gText_XNature) != 0xd
	.error "gText_XNature must retain its original byte length"
	.endif
	.globl gText_Rom_5CA56B
	.set gText_Rom_5CA56B, gText_XNature + 0x8
	.globl gText_Rom_5CA56C
	.set gText_Rom_5CA56C, gText_XNature + 0x9

	@ src/strings.c:405 gText_XNatureMetSomewhereAt
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_XNatureMetSomewhereAt
gText_XNatureMetSomewhereAt: @ 0x085CA570
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\nどこかで であった{EOS}"
	.if (. - gText_XNatureMetSomewhereAt) != 0x23
	.error "gText_XNatureMetSomewhereAt must retain its original byte length"
	.endif
	.globl gText_Rom_5CA58F
	.set gText_Rom_5CA58F, gText_XNatureMetSomewhereAt + 0x1f

	@ src/strings.c:406 gText_XNatureHatchedSomewhereAt
	.globl gText_XNatureHatchedSomewhereAt
gText_XNatureHatchedSomewhereAt: @ 0x085CA593
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\nどこかで かえった{EOS}"
	.if (. - gText_XNatureHatchedSomewhereAt) > 0x23
	.error "gText_XNatureHatchedSomewhereAt may not grow beyond its original slot"
	.endif
	.if (. - gText_XNatureHatchedSomewhereAt) < 0x23
	.space 0x23 - (. - gText_XNatureHatchedSomewhereAt)
	.endif

	@ src/strings.c:407 gText_OddEggFoundByCouple
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_OddEggFoundByCouple
gText_OddEggFoundByCouple: @ 0x085CA5B6
	.string "そだてや ふうふ から もらった\nふしぎな ポケモンのタマゴ{EOS}"
	.if (. - gText_OddEggFoundByCouple) != 0x1f
	.error "gText_OddEggFoundByCouple must retain its original byte length"
	.endif
	.globl gText_Rom_5CA5D1
	.set gText_Rom_5CA5D1, gText_OddEggFoundByCouple + 0x1b

	@ src/strings.c:408 gText_PeculiarEggNicePlace
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PeculiarEggNicePlace
gText_PeculiarEggNicePlace: @ 0x085CA5D5
	.string "ステキな ばしょで てにいれた\nふしぎな ふしぎな ポケモンのタマゴ{EOS}"
	.if (. - gText_PeculiarEggNicePlace) != 0x23
	.error "gText_PeculiarEggNicePlace must retain its original byte length"
	.endif
	.globl gText_Rom_5CA5F4
	.set gText_Rom_5CA5F4, gText_PeculiarEggNicePlace + 0x1f

	@ src/strings.c:409 gText_PeculiarEggTrade
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PeculiarEggTrade
gText_PeculiarEggTrade: @ 0x085CA5F8
	.string "つうしんこうかんで てにいれた\nふしぎな ポケモンのタマゴ{EOS}"
	.if (. - gText_PeculiarEggTrade) != 0x1e
	.error "gText_PeculiarEggTrade must retain its original byte length"
	.endif
	.globl gText_Rom_5CA612
	.set gText_Rom_5CA612, gText_PeculiarEggTrade + 0x1a

	@ src/strings.c:410 gText_EggFromHotSprings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_EggFromHotSprings
gText_EggFromHotSprings: @ 0x085CA616
	.string "おんせんばあさん から もらった\nふしぎな ポケモンのタマゴ{EOS}"
	.if (. - gText_EggFromHotSprings) != 0x1f
	.error "gText_EggFromHotSprings must retain its original byte length"
	.endif
	.globl gText_Rom_5CA631
	.set gText_Rom_5CA631, gText_EggFromHotSprings + 0x1b

	@ src/strings.c:411 gText_EggFromTraveler
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_EggFromTraveler
gText_EggFromTraveler: @ 0x085CA635
	.string "たびの おじさん から もらった\nふしぎな ポケモンのタマゴ{EOS}"
	.if (. - gText_EggFromTraveler) != 0x1f
	.error "gText_EggFromTraveler must retain its original byte length"
	.endif
	.globl gText_Rom_5CA650
	.set gText_Rom_5CA650, gText_EggFromTraveler + 0x1b

	@ src/strings.c:412 gText_ApostropheSBase
	.globl gText_ApostropheSBase
gText_ApostropheSBase: @ 0x085CA654
	.string " きち{EOS}"
	.if (. - gText_ApostropheSBase) > 0x4
	.error "gText_ApostropheSBase may not grow beyond its original slot"
	.endif
	.if (. - gText_ApostropheSBase) < 0x4
	.space 0x4 - (. - gText_ApostropheSBase)
	.endif

	@ src/strings.c:413 gText_OkayToDeleteFromRegistry
	.globl gText_OkayToDeleteFromRegistry
gText_OkayToDeleteFromRegistry: @ 0x085CA658
	.string "{STR_VAR_1} の とうろくを\nかいじょ しても よろしい ですか?{EOS}"
	.if (. - gText_OkayToDeleteFromRegistry) > 0x1e
	.error "gText_OkayToDeleteFromRegistry may not grow beyond its original slot"
	.endif
	.if (. - gText_OkayToDeleteFromRegistry) < 0x1e
	.space 0x1e - (. - gText_OkayToDeleteFromRegistry)
	.endif

	@ src/strings.c:414 gText_RegisteredDataDeleted
	.globl gText_RegisteredDataDeleted
gText_RegisteredDataDeleted: @ 0x085CA676
	.string "とうろくを かいじょ しました{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_RegisteredDataDeleted) > 0x12
	.error "gText_RegisteredDataDeleted may not grow beyond its original slot"
	.endif
	.if (. - gText_RegisteredDataDeleted) < 0x12
	.space 0x12 - (. - gText_RegisteredDataDeleted)
	.endif

	@ src/strings.c:415 gText_NoRegistry
	.globl gText_NoRegistry
gText_NoRegistry: @ 0x085CA688
	.string "とうろく リストは ありません{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_NoRegistry) > 0x12
	.error "gText_NoRegistry may not grow beyond its original slot"
	.endif
	.if (. - gText_NoRegistry) < 0x12
	.space 0x12 - (. - gText_NoRegistry)
	.endif
