	@ src/data/party_menu.h:807 party_menu_line_807 (+1 aliases)
	.globl gText_Rom_5CA3DF
gText_Rom_5CA3DF: @ 0x085CA3DF
	.string "いれかえ$"
	.if (. - gText_Rom_5CA3DF) > 0x5
	.error "gText_Rom_5CA3DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3DF) < 0x5
	.space 0x5 - (. - gText_Rom_5CA3DF)
	.endif
	.globl gUnknown_85CA3E4
gUnknown_85CA3E4: @ 0x085CA3E4

	@ src/strings.c:389 gText_PkmnInfo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA3E4
gText_Rom_5CA3E4: @ 0x085CA3E4
	.string "ポケモンじょうほう$"
	.if (. - gText_Rom_5CA3E4) != 0xa
	.error "gText_Rom_5CA3E4 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA3E8
	.set gText_Rom_5CA3E8, gText_Rom_5CA3E4 + 0x4
	.globl gUnknown_85CA3EE
gUnknown_85CA3EE: @ 0x085CA3EE

	@ src/strings.c:390 gText_PkmnSkills
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA3EE
gText_Rom_5CA3EE: @ 0x085CA3EE
	.string "ポケモンのうりょく$"
	.if (. - gText_Rom_5CA3EE) != 0xa
	.error "gText_Rom_5CA3EE must retain its original byte length"
	.endif
	.globl gText_Rom_5CA3F2
	.set gText_Rom_5CA3F2, gText_Rom_5CA3EE + 0x4
	.globl gUnknown_85CA3F8
gUnknown_85CA3F8: @ 0x085CA3F8

	@ src/strings.c:391 gText_BattleMoves
	.globl gText_Rom_5CA3F8
gText_Rom_5CA3F8: @ 0x085CA3F8
	.string "たたかうわざ$"
	.if (. - gText_Rom_5CA3F8) > 0x7
	.error "gText_Rom_5CA3F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3F8) < 0x7
	.space 0x7 - (. - gText_Rom_5CA3F8)
	.endif
	.globl gUnknown_85CA3FF
gUnknown_85CA3FF: @ 0x085CA3FF

	@ src/strings.c:392 gText_ContestMoves (+1 aliases)
	.globl gText_Rom_5CA3FF
gText_Rom_5CA3FF: @ 0x085CA3FF
	.string "コンテストわざ$"
	.if (. - gText_Rom_5CA3FF) > 0x8
	.error "gText_Rom_5CA3FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3FF) < 0x8
	.space 0x8 - (. - gText_Rom_5CA3FF)
	.endif
	.globl gUnknown_85CA407
gUnknown_85CA407: @ 0x085CA407

	@ src/strings.c:393 gText_Info
	.globl gText_Rom_5CA407
gText_Rom_5CA407: @ 0x085CA407
	.string "きりかえ$"
	.if (. - gText_Rom_5CA407) > 0x5
	.error "gText_Rom_5CA407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA407) < 0x5
	.space 0x5 - (. - gText_Rom_5CA407)
	.endif
	.globl gUnknown_85CA40C
gUnknown_85CA40C: @ 0x085CA40C

	@ src/strings.c:394 gText_EggWillTakeALongTime
	.globl gText_Rom_5CA40C
gText_Rom_5CA40C: @ 0x085CA40C
	.string "この タマゴは\nうまれるまで かなり かかりそう$"
	.if (. - gText_Rom_5CA40C) > 0x19
	.error "gText_Rom_5CA40C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA40C) < 0x19
	.space 0x19 - (. - gText_Rom_5CA40C)
	.endif
	.globl gUnknown_85CA425
gUnknown_85CA425: @ 0x085CA425

	@ src/strings.c:395 gText_EggWillTakeSomeTime
	.globl gText_Rom_5CA425
gText_Rom_5CA425: @ 0x085CA425
	.string "なにが うまれて くるのかな?\nうまれる まで まだまだ かかりそう$"
	.if (. - gText_Rom_5CA425) > 0x23
	.error "gText_Rom_5CA425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA425) < 0x23
	.space 0x23 - (. - gText_Rom_5CA425)
	.endif
	.globl gUnknown_85CA448
gUnknown_85CA448: @ 0x085CA448

	@ src/strings.c:396 gText_EggWillHatchSoon
	.globl gText_Rom_5CA448
gText_Rom_5CA448: @ 0x085CA448
	.string "ときどき うごいて いるようだ\nうまれる まで もうちょっと かな?$"
	.if (. - gText_Rom_5CA448) > 0x23
	.error "gText_Rom_5CA448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA448) < 0x23
	.space 0x23 - (. - gText_Rom_5CA448)
	.endif
	.globl gUnknown_85CA46B
gUnknown_85CA46B: @ 0x085CA46B

	@ src/strings.c:397 gText_EggAboutToHatch
	.globl gText_Rom_5CA46B
gText_Rom_5CA46B: @ 0x085CA46B
	.string "なかから おとが きこえてくる\nもうすぐ うまれそう!$"
	.if (. - gText_Rom_5CA46B) > 0x1c
	.error "gText_Rom_5CA46B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA46B) < 0x1c
	.space 0x1c - (. - gText_Rom_5CA46B)
	.endif
	.globl gUnknown_85CA487
gUnknown_85CA487: @ 0x085CA487

	@ src/strings.c:398 gText_HMMovesCantBeForgotten2
	.globl gText_Rom_5CA487
gText_Rom_5CA487: @ 0x085CA487
	.string "それは たいせつなわざです\nわすれさせることは できません!$"
	.if (. - gText_Rom_5CA487) > 0x1f
	.error "gText_Rom_5CA487 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA487) < 0x1f
	.space 0x1f - (. - gText_Rom_5CA487)
	.endif
	.globl gUnknown_85CA4A6
gUnknown_85CA4A6: @ 0x085CA4A6

	@ src/strings.c:399 gText_XNatureMetAtYZ
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA4A6
gText_Rom_5CA4A6: @ 0x085CA4A6
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}で であった$"
	.if (. - gText_Rom_5CA4A6) != 0x26
	.error "gText_Rom_5CA4A6 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA4C8
	.set gText_Rom_5CA4C8, gText_Rom_5CA4A6 + 0x22
	.globl gUnknown_85CA4CC
gUnknown_85CA4CC: @ 0x085CA4CC

	@ src/strings.c:400 gText_XNatureHatchedAtYZ
	.globl gText_Rom_5CA4CC
gText_Rom_5CA4CC: @ 0x085CA4CC
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}で かえった$"
	.if (. - gText_Rom_5CA4CC) > 0x26
	.error "gText_Rom_5CA4CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA4CC) < 0x26
	.space 0x26 - (. - gText_Rom_5CA4CC)
	.endif
	.globl gUnknown_85CA4F2
gUnknown_85CA4F2: @ 0x085CA4F2
	@ Replaced baserom.gba range: offset=0x5CA4F2, size=0x1C
	.byte 0xF7, 0x00, 0xF7, 0x02, 0xF7, 0x01, 0xF7, 0x05, 0x0E, 0x02, 0x06, 0x08, 0xFE, 0x12, 0x03, 0x0C
	.byte 0x2E, 0x0A, 0x03, 0x06, 0x2E, 0x16, 0x00, 0x26, 0x50, 0x13, 0x00, 0x44

	@ src/data/easy_chat/easy_chat_group_conditions.h:10 easy_chat_group_conditions_line_10
	.globl gText_Rom_5CA50E
gText_Rom_5CA50E: @ 0x085CA50E
	.string "あった$"
	.if (. - gText_Rom_5CA50E) > 0x4
	.error "gText_Rom_5CA50E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA50E) < 0x4
	.space 0x4 - (. - gText_Rom_5CA50E)
	.endif
	.globl gUnknown_85CA512
gUnknown_85CA512: @ 0x085CA512

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

	@ src/strings.c:416 gText_DelRegist
	.globl gText_Rom_5CA69A
gText_Rom_5CA69A: @ 0x085CA69A
	.string "とうろく かいじょ$"
	.if (. - gText_Rom_5CA69A) > 0xa
	.error "gText_Rom_5CA69A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA69A) < 0xa
	.space 0xa - (. - gText_Rom_5CA69A)
	.endif
	.globl gUnknown_85CA6A4
gUnknown_85CA6A4: @ 0x085CA6A4

	@ src/strings.c:417 gText_Var3Var1SlashVar2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA6A4
gText_Rom_5CA6A4: @ 0x085CA6A4
	.string "{STR_VAR_3}{STR_VAR_1}/{STR_VAR_2}$"
	.if (. - gText_Rom_5CA6A4) != 0x8
	.error "gText_Rom_5CA6A4 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA6A6
	.set gText_Rom_5CA6A6, gText_Rom_5CA6A4 + 0x2

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA6AC
gText_Rom_5CA6AC: @ 0x085CA6AC
	.string "グッズを　おく$"
	.if (. - gText_Rom_5CA6AC) > 0x8
	.error "gText_Rom_5CA6AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6AC) < 0x8
	.space 0x8 - (. - gText_Rom_5CA6AC)
	.endif

	@ src/strings.c:419 gText_PutAway
	.globl gText_Rom_5CA6B4
gText_Rom_5CA6B4: @ 0x085CA6B4
	.string "グッズを もどす$"
	.if (. - gText_Rom_5CA6B4) > 0x9
	.error "gText_Rom_5CA6B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6B4) < 0x9
	.space 0x9 - (. - gText_Rom_5CA6B4)
	.endif

	@ src/strings.c:420 gText_Toss2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA6BD
gText_Rom_5CA6BD: @ 0x085CA6BD
	.string "グッズを すてる$"
	.if (. - gText_Rom_5CA6BD) != 0x9
	.error "gText_Rom_5CA6BD must retain its original byte length"
	.endif
	.globl gText_Rom_5CA6C2
	.set gText_Rom_5CA6C2, gText_Rom_5CA6BD + 0x5
	.globl gUnknown_85CA6C6
gUnknown_85CA6C6: @ 0x085CA6C6

	@ src/strings.c:421 gText_Color161Shadow161
	.globl gText_Rom_5CA6C6
gText_Rom_5CA6C6: @ 0x085CA6C6
	.string "{COLOR 161}{SHADOW 161}$"
	.if (. - gText_Rom_5CA6C6) > 0x7
	.error "gText_Rom_5CA6C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6C6) < 0x7
	.space 0x7 - (. - gText_Rom_5CA6C6)
	.endif

	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5CA6CD
gText_Rom_5CA6CD: @ 0x085CA6CD
	.string "えらんだ　グッズを　へやに　おきます！$"
	.if (. - gText_Rom_5CA6CD) > 0x14
	.error "gText_Rom_5CA6CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6CD) < 0x14
	.space 0x14 - (. - gText_Rom_5CA6CD)
	.endif

	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5CA6E1
gText_Rom_5CA6E1: @ 0x085CA6E1
	.string "えらんだ　グッズを　パソコンに　もどします！$"
	.if (. - gText_Rom_5CA6E1) > 0x17
	.error "gText_Rom_5CA6E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6E1) < 0x17
	.space 0x17 - (. - gText_Rom_5CA6E1)
	.endif

	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5CA6F8
gText_Rom_5CA6F8: @ 0x085CA6F8
	.string "いらなくなった　グッズを　すてます！$"
	.if (. - gText_Rom_5CA6F8) > 0x13
	.error "gText_Rom_5CA6F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6F8) < 0x13
	.space 0x13 - (. - gText_Rom_5CA6F8)
	.endif
	.globl gUnknown_85CA70B
gUnknown_85CA70B: @ 0x085CA70B

	@ src/strings.c:425 gText_NoDecorations
	.globl gText_Rom_5CA70B
gText_Rom_5CA70B: @ 0x085CA70B
	.string "グッズは ありません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA70B) > 0xe
	.error "gText_Rom_5CA70B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA70B) < 0xe
	.space 0xe - (. - gText_Rom_5CA70B)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA719
gText_Rom_5CA719: @ 0x085CA719
	.string "つくえ$"
	.if (. - gText_Rom_5CA719) > 0x4
	.error "gText_Rom_5CA719 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA719) < 0x4
	.space 0x4 - (. - gText_Rom_5CA719)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem
	.globl gText_Rom_5CA71D
gText_Rom_5CA71D: @ 0x085CA71D
	.string "いす$"
	.if (. - gText_Rom_5CA71D) > 0x3
	.error "gText_Rom_5CA71D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA71D) < 0x3
	.space 0x3 - (. - gText_Rom_5CA71D)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem
	.globl gText_Rom_5CA720
gText_Rom_5CA720: @ 0x085CA720
	.string "はちうえ$"
	.if (. - gText_Rom_5CA720) > 0x5
	.error "gText_Rom_5CA720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA720) < 0x5
	.space 0x5 - (. - gText_Rom_5CA720)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA725
gText_Rom_5CA725: @ 0x085CA725
	.string "おきもの$"
	.if (. - gText_Rom_5CA725) > 0x5
	.error "gText_Rom_5CA725 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA725) < 0x5
	.space 0x5 - (. - gText_Rom_5CA725)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA72A
gText_Rom_5CA72A: @ 0x085CA72A
	.string "マット$"
	.if (. - gText_Rom_5CA72A) > 0x4
	.error "gText_Rom_5CA72A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA72A) < 0x4
	.space 0x4 - (. - gText_Rom_5CA72A)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA72E
gText_Rom_5CA72E: @ 0x085CA72E
	.string "ポスター$"
	.if (. - gText_Rom_5CA72E) > 0x5
	.error "gText_Rom_5CA72E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA72E) < 0x5
	.space 0x5 - (. - gText_Rom_5CA72E)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+2 aliases)
	.globl gText_Rom_5CA733
gText_Rom_5CA733: @ 0x085CA733
	.string "ぬいぐるみ$"
	.if (. - gText_Rom_5CA733) > 0x6
	.error "gText_Rom_5CA733 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA733) < 0x6
	.space 0x6 - (. - gText_Rom_5CA733)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA739
gText_Rom_5CA739: @ 0x085CA739
	.string "クッション$"
	.if (. - gText_Rom_5CA739) > 0x6
	.error "gText_Rom_5CA739 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA739) < 0x6
	.space 0x6 - (. - gText_Rom_5CA739)
	.endif
	.globl gUnknown_85CA73F
gUnknown_85CA73F: @ 0x085CA73F

	@ asm/fldeff_misc.s:2181 GetShieldToyTVDecorationInfo
	.globl gText_Rom_5CA73F
gText_Rom_5CA73F: @ 0x085CA73F
	.string "きん$"
	.if (. - gText_Rom_5CA73F) > 0x3
	.error "gText_Rom_5CA73F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA73F) < 0x3
	.space 0x3 - (. - gText_Rom_5CA73F)
	.endif
	.globl gUnknown_85CA742
gUnknown_85CA742: @ 0x085CA742

	@ src/strings.c:435 gText_Silver
	.globl gText_Rom_5CA742
gText_Rom_5CA742: @ 0x085CA742
	.string "ぎん$"
	.if (. - gText_Rom_5CA742) > 0x3
	.error "gText_Rom_5CA742 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA742) < 0x3
	.space 0x3 - (. - gText_Rom_5CA742)
	.endif
	.globl gUnknown_85CA745
gUnknown_85CA745: @ 0x085CA745

	@ src/strings.c:436 gText_PlaceItHere
	.globl gText_Rom_5CA745
gText_Rom_5CA745: @ 0x085CA745
	.string "ここに おきますか?$"
	.if (. - gText_Rom_5CA745) > 0xb
	.error "gText_Rom_5CA745 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA745) < 0xb
	.space 0xb - (. - gText_Rom_5CA745)
	.endif
	.globl gUnknown_85CA750
gUnknown_85CA750: @ 0x085CA750

	@ src/strings.c:437 gText_CantBePlacedHere
	.globl gText_Rom_5CA750
gText_Rom_5CA750: @ 0x085CA750
	.string "ここには おけません!$"
	.if (. - gText_Rom_5CA750) > 0xc
	.error "gText_Rom_5CA750 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA750) < 0xc
	.space 0xc - (. - gText_Rom_5CA750)
	.endif
	.globl gUnknown_85CA75C
gUnknown_85CA75C: @ 0x085CA75C

	@ src/strings.c:438 gText_CancelDecorating
	.globl gText_Rom_5CA75C
gText_Rom_5CA75C: @ 0x085CA75C
	.string "おくのを やめますか?$"
	.if (. - gText_Rom_5CA75C) > 0xc
	.error "gText_Rom_5CA75C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA75C) < 0xc
	.space 0xc - (. - gText_Rom_5CA75C)
	.endif
	.globl gUnknown_85CA768
gUnknown_85CA768: @ 0x085CA768

	@ src/strings.c:439 gText_InUseAlready
	.globl gText_Rom_5CA768
gText_Rom_5CA768: @ 0x085CA768
	.string "すでに おかれて います!$"
	.if (. - gText_Rom_5CA768) > 0xe
	.error "gText_Rom_5CA768 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA768) < 0xe
	.space 0xe - (. - gText_Rom_5CA768)
	.endif
	.globl gUnknown_85CA776
gUnknown_85CA776: @ 0x085CA776

	@ src/strings.c:440 gText_NoMoreDecorations
	.globl gText_Rom_5CA776
gText_Rom_5CA776: @ 0x085CA776
	.string "これいじょう おけません\nひみつきちに おけるのは {STR_VAR_1}こ までです$"
	.if (. - gText_Rom_5CA776) > 0x23
	.error "gText_Rom_5CA776 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA776) < 0x23
	.space 0x23 - (. - gText_Rom_5CA776)
	.endif
	.globl gUnknown_85CA799
gUnknown_85CA799: @ 0x085CA799

	@ src/strings.c:441 gText_NoMoreDecorations2
	.globl gText_Rom_5CA799
gText_Rom_5CA799: @ 0x085CA799
	.string "これいじょう おけません\nへやに おけるのは {STR_VAR_1}こ までです$"
	.if (. - gText_Rom_5CA799) > 0x20
	.error "gText_Rom_5CA799 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA799) < 0x20
	.space 0x20 - (. - gText_Rom_5CA799)
	.endif

	@ src/strings.c:442 gText_MustBePlacedOnDesk
	.globl gText_Rom_5CA7B9
gText_Rom_5CA7B9: @ 0x085CA7B9
	.string "ここには おけません!\nつくえの うえなどに おいてください!$"
	.if (. - gText_Rom_5CA7B9) > 0x20
	.error "gText_Rom_5CA7B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA7B9) < 0x20
	.space 0x20 - (. - gText_Rom_5CA7B9)
	.endif
	.globl gUnknown_85CA7D9
gUnknown_85CA7D9: @ 0x085CA7D9

	@ src/strings.c:443 gText_CantPlaceInRoom
	.globl gText_Rom_5CA7D9
gText_Rom_5CA7D9: @ 0x085CA7D9
	.string "この グッズは\nじぶんの へやには おけません!$"
	.if (. - gText_Rom_5CA7D9) > 0x19
	.error "gText_Rom_5CA7D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA7D9) < 0x19
	.space 0x19 - (. - gText_Rom_5CA7D9)
	.endif
	.globl gUnknown_85CA7F2
gUnknown_85CA7F2: @ 0x085CA7F2

	@ src/strings.c:444 gText_CantThrowAwayInUse
	.globl gText_Rom_5CA7F2
gText_Rom_5CA7F2: @ 0x085CA7F2
	.string "このグッズは おかれて いるので\nすてる ことが できません!$"
	.if (. - gText_Rom_5CA7F2) > 0x20
	.error "gText_Rom_5CA7F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA7F2) < 0x20
	.space 0x20 - (. - gText_Rom_5CA7F2)
	.endif
	.globl gUnknown_85CA812
gUnknown_85CA812: @ 0x085CA812

	@ src/strings.c:445 gText_DecorationWillBeDiscarded
	.globl gText_Rom_5CA812
gText_Rom_5CA812: @ 0x085CA812
	.string "{STR_VAR_1} は なくなりますが\nよろしい ですか?$"
	.if (. - gText_Rom_5CA812) > 0x17
	.error "gText_Rom_5CA812 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA812) < 0x17
	.space 0x17 - (. - gText_Rom_5CA812)
	.endif
	.globl gUnknown_85CA829
gUnknown_85CA829: @ 0x085CA829

	@ src/strings.c:446 gText_DecorationThrownAway
	.globl gText_Rom_5CA829
gText_Rom_5CA829: @ 0x085CA829
	.string "グッズを すてました!$"
	.if (. - gText_Rom_5CA829) > 0xc
	.error "gText_Rom_5CA829 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA829) < 0xc
	.space 0xc - (. - gText_Rom_5CA829)
	.endif
	.globl gUnknown_85CA835
gUnknown_85CA835: @ 0x085CA835

	@ src/strings.c:447 gText_StopPuttingAwayDecorations
	.globl gText_Rom_5CA835
gText_Rom_5CA835: @ 0x085CA835
	.string "もどすのを やめますか?$"
	.if (. - gText_Rom_5CA835) > 0xd
	.error "gText_Rom_5CA835 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA835) < 0xd
	.space 0xd - (. - gText_Rom_5CA835)
	.endif
	.globl gUnknown_85CA842
gUnknown_85CA842: @ 0x085CA842

	@ src/strings.c:448 gText_NoDecorationHere
	.globl gText_Rom_5CA842
gText_Rom_5CA842: @ 0x085CA842
	.string "ここに グッズは ありません!$"
	.if (. - gText_Rom_5CA842) > 0x10
	.error "gText_Rom_5CA842 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA842) < 0x10
	.space 0x10 - (. - gText_Rom_5CA842)
	.endif
	.globl gUnknown_85CA852
gUnknown_85CA852: @ 0x085CA852

	@ src/strings.c:449 gText_ReturnDecorationToPC
	.globl gText_Rom_5CA852
gText_Rom_5CA852: @ 0x085CA852
	.string "このグッズを パソコンに もどしますか?$"
	.if (. - gText_Rom_5CA852) > 0x15
	.error "gText_Rom_5CA852 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA852) < 0x15
	.space 0x15 - (. - gText_Rom_5CA852)
	.endif
	.globl gUnknown_85CA867
gUnknown_85CA867: @ 0x085CA867

	@ src/strings.c:450 gText_DecorationReturnedToPC
	.globl gText_Rom_5CA867
gText_Rom_5CA867: @ 0x085CA867
	.string "グッズを パソコンに もどしました!$"
	.if (. - gText_Rom_5CA867) > 0x13
	.error "gText_Rom_5CA867 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA867) < 0x13
	.space 0x13 - (. - gText_Rom_5CA867)
	.endif
	.globl gUnknown_85CA87A
gUnknown_85CA87A: @ 0x085CA87A

	@ src/strings.c:451 gText_NoDecorationsInUse
	.globl gText_Rom_5CA87A
gText_Rom_5CA87A: @ 0x085CA87A
	.string "グッズは おかれて いません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA87A) > 0x12
	.error "gText_Rom_5CA87A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA87A) < 0x12
	.space 0x12 - (. - gText_Rom_5CA87A)
	.endif

