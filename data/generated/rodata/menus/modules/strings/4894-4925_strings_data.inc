	@ src/strings.c:402 gText_XNatureFatefulEncounter
	.globl gText_Rom_5CA512
gText_Rom_5CA512: @ 0x085CA512
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\nうんめいてきな であいを した$"
	.if (. - gText_Rom_5CA512) > 0x29
	.error "gText_Rom_5CA512 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA512) < 0x29
	.space 0x29 - (. - gText_Rom_5CA512)
	.endif
	.globl gUnknown_85CA53B
gUnknown_85CA53B: @ 0x085CA53B
	@ Replaced baserom.gba range: offset=0x5CA53B, size=0x28
	.byte 0xF7, 0x00, 0xF7, 0x02, 0xF7, 0x01, 0xF7, 0x05, 0x0E, 0x02, 0x06, 0x08, 0x00, 0xF9, 0x05, 0xF7
	.byte 0x00, 0xF7, 0x03, 0xF7, 0x01, 0x19, 0x14, 0x07, 0xFE, 0xF7, 0x00, 0xF7, 0x04, 0xF7, 0x01, 0x44
	.byte 0x00, 0x01, 0x50, 0x10, 0x26, 0x03, 0x41, 0xFF
	.globl gUnknown_85CA563
gUnknown_85CA563: @ 0x085CA563

	@ src/strings.c:404 gText_XNature
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA563
gText_Rom_5CA563: @ 0x085CA563
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく$"
	.if (. - gText_Rom_5CA563) != 0xd
	.error "gText_Rom_5CA563 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA56B
	.set gText_Rom_5CA56B, gText_Rom_5CA563 + 0x8
	.globl gText_Rom_5CA56C
	.set gText_Rom_5CA56C, gText_Rom_5CA563 + 0x9
	.globl gUnknown_85CA570
gUnknown_85CA570: @ 0x085CA570

	@ src/strings.c:405 gText_XNatureMetSomewhereAt
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA570
gText_Rom_5CA570: @ 0x085CA570
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\nどこかで であった$"
	.if (. - gText_Rom_5CA570) != 0x23
	.error "gText_Rom_5CA570 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA58F
	.set gText_Rom_5CA58F, gText_Rom_5CA570 + 0x1f
	.globl gUnknown_85CA593
gUnknown_85CA593: @ 0x085CA593

	@ src/strings.c:406 gText_XNatureHatchedSomewhereAt
	.globl gText_Rom_5CA593
gText_Rom_5CA593: @ 0x085CA593
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\nどこかで かえった$"
	.if (. - gText_Rom_5CA593) > 0x23
	.error "gText_Rom_5CA593 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA593) < 0x23
	.space 0x23 - (. - gText_Rom_5CA593)
	.endif
	.globl gUnknown_85CA5B6
gUnknown_85CA5B6: @ 0x085CA5B6

	@ src/strings.c:407 gText_OddEggFoundByCouple
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA5B6
gText_Rom_5CA5B6: @ 0x085CA5B6
	.string "そだてや ふうふ から もらった\nふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA5B6) != 0x1f
	.error "gText_Rom_5CA5B6 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA5D1
	.set gText_Rom_5CA5D1, gText_Rom_5CA5B6 + 0x1b
	.globl gUnknown_85CA5D5
gUnknown_85CA5D5: @ 0x085CA5D5

	@ src/strings.c:408 gText_PeculiarEggNicePlace
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA5D5
gText_Rom_5CA5D5: @ 0x085CA5D5
	.string "ステキな ばしょで てにいれた\nふしぎな ふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA5D5) != 0x23
	.error "gText_Rom_5CA5D5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA5F4
	.set gText_Rom_5CA5F4, gText_Rom_5CA5D5 + 0x1f
	.globl gUnknown_85CA5F8
gUnknown_85CA5F8: @ 0x085CA5F8

	@ src/strings.c:409 gText_PeculiarEggTrade
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA5F8
gText_Rom_5CA5F8: @ 0x085CA5F8
	.string "つうしんこうかんで てにいれた\nふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA5F8) != 0x1e
	.error "gText_Rom_5CA5F8 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA612
	.set gText_Rom_5CA612, gText_Rom_5CA5F8 + 0x1a
	.globl gUnknown_85CA616
gUnknown_85CA616: @ 0x085CA616

	@ src/strings.c:410 gText_EggFromHotSprings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA616
gText_Rom_5CA616: @ 0x085CA616
	.string "おんせんばあさん から もらった\nふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA616) != 0x1f
	.error "gText_Rom_5CA616 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA631
	.set gText_Rom_5CA631, gText_Rom_5CA616 + 0x1b
	.globl gUnknown_85CA635
gUnknown_85CA635: @ 0x085CA635

	@ src/strings.c:411 gText_EggFromTraveler
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA635
gText_Rom_5CA635: @ 0x085CA635
	.string "たびの おじさん から もらった\nふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA635) != 0x1f
	.error "gText_Rom_5CA635 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA650
	.set gText_Rom_5CA650, gText_Rom_5CA635 + 0x1b
	.globl gUnknown_85CA654
gUnknown_85CA654: @ 0x085CA654

	@ src/strings.c:412 gText_ApostropheSBase
	.globl gText_Rom_5CA654
gText_Rom_5CA654: @ 0x085CA654
	.string " きち$"
	.if (. - gText_Rom_5CA654) > 0x4
	.error "gText_Rom_5CA654 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA654) < 0x4
	.space 0x4 - (. - gText_Rom_5CA654)
	.endif
	.globl gUnknown_85CA658
gUnknown_85CA658: @ 0x085CA658

	@ src/strings.c:413 gText_OkayToDeleteFromRegistry
	.globl gText_Rom_5CA658
gText_Rom_5CA658: @ 0x085CA658
	.string "{STR_VAR_1} の とうろくを\nかいじょ しても よろしい ですか?$"
	.if (. - gText_Rom_5CA658) > 0x1e
	.error "gText_Rom_5CA658 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA658) < 0x1e
	.space 0x1e - (. - gText_Rom_5CA658)
	.endif
	.globl gUnknown_85CA676
gUnknown_85CA676: @ 0x085CA676

	@ src/strings.c:414 gText_RegisteredDataDeleted
	.globl gText_Rom_5CA676
gText_Rom_5CA676: @ 0x085CA676
	.string "とうろくを かいじょ しました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA676) > 0x12
	.error "gText_Rom_5CA676 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA676) < 0x12
	.space 0x12 - (. - gText_Rom_5CA676)
	.endif
	.globl gUnknown_85CA688
gUnknown_85CA688: @ 0x085CA688

	@ src/strings.c:415 gText_NoRegistry
	.globl gText_Rom_5CA688
gText_Rom_5CA688: @ 0x085CA688
	.string "とうろく リストは ありません{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA688) > 0x12
	.error "gText_Rom_5CA688 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA688) < 0x12
	.space 0x12 - (. - gText_Rom_5CA688)
	.endif
