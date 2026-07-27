	@ src/battle_message.c:170 battle_message_line_170
	.globl gText_Rom_5AB0AC
gText_Rom_5AB0AC: @ 0x085AB0AC
	.string "からすぎた！$"
	.if (. - gText_Rom_5AB0AC) > 0x7
	.error "gText_Rom_5AB0AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0AC) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0AC)
	.endif

	@ src/battle_message.c:171 battle_message_line_171
	.globl gText_Rom_5AB0B3
gText_Rom_5AB0B3: @ 0x085AB0B3
	.string "しぶすぎた！$"
	.if (. - gText_Rom_5AB0B3) > 0x7
	.error "gText_Rom_5AB0B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0B3) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0B3)
	.endif

	@ src/battle_message.c:172 battle_message_line_172
	.globl gText_Rom_5AB0BA
gText_Rom_5AB0BA: @ 0x085AB0BA
	.string "あますぎた！$"
	.if (. - gText_Rom_5AB0BA) > 0x7
	.error "gText_Rom_5AB0BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0BA) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0BA)
	.endif

	@ src/battle_message.c:173 battle_message_line_173
	.globl gText_Rom_5AB0C1
gText_Rom_5AB0C1: @ 0x085AB0C1
	.string "にがすぎた！$"
	.if (. - gText_Rom_5AB0C1) > 0x7
	.error "gText_Rom_5AB0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0C1) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0C1)
	.endif

	@ src/battle_message.c:174 battle_message_line_174
	.globl gText_Rom_5AB0C8
gText_Rom_5AB0C8: @ 0x085AB0C8
	.string "すっぱすぎた！$"
	.if (. - gText_Rom_5AB0C8) > 0x8
	.error "gText_Rom_5AB0C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0C8) < 0x8
	.space 0x8 - (. - gText_Rom_5AB0C8)
	.endif
	.globl gUnknown_85AB0D0
gUnknown_85AB0D0: @ 0x085AB0D0
	.incbin "baserom.gba", 0x5ab0d0, 0x19

	@ src/battle_message.c:417 battle_message_line_417
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB0E9
gText_Rom_5AB0E9: @ 0x085AB0E9
	.string "{B_LAST_ITEM}を つかった！$"
	.if (. - gText_Rom_5AB0E9) != 0xa
	.error "gText_Rom_5AB0E9 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB0EB
	.set gText_Rom_5AB0EB, gText_Rom_5AB0E9 + 0x2
	.globl gText_Rom_5AB0EE
	.set gText_Rom_5AB0EE, gText_Rom_5AB0E9 + 0x5
	.incbin "baserom.gba", 0x5ab0f3, 0x6

	@ src/battle_message.c:417 battle_message_line_417
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB0F9
gText_Rom_5AB0F9: @ 0x085AB0F9
	.string "{B_LAST_ITEM}を つかった！$"
	.if (. - gText_Rom_5AB0F9) != 0xa
	.error "gText_Rom_5AB0F9 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB0FB
	.set gText_Rom_5AB0FB, gText_Rom_5AB0F9 + 0x2
	.globl gText_Rom_5AB0FE
	.set gText_Rom_5AB0FE, gText_Rom_5AB0F9 + 0x5
	.incbin "baserom.gba", 0x5ab103, 0x8

	@ src/battle_message.c:417 battle_message_line_417
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB10B
gText_Rom_5AB10B: @ 0x085AB10B
	.string "{B_LAST_ITEM}を つかった！$"
	.if (. - gText_Rom_5AB10B) != 0xa
	.error "gText_Rom_5AB10B must retain its original byte length"
	.endif
	.globl gText_Rom_5AB10D
	.set gText_Rom_5AB10D, gText_Rom_5AB10B + 0x2
	.globl gText_Rom_5AB110
	.set gText_Rom_5AB110, gText_Rom_5AB10B + 0x5

	@ src/battle_message.c:419 battle_message_line_419
	.globl gText_Rom_5AB115
gText_Rom_5AB115: @ 0x085AB115
	.string "トレーナーに ボールを はじかれた!$"
	.if (. - gText_Rom_5AB115) > 0x13
	.error "gText_Rom_5AB115 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB115) < 0x13
	.space 0x13 - (. - gText_Rom_5AB115)
	.endif

	@ src/battle_message.c:420 battle_message_line_420
	.globl gText_Rom_5AB128
gText_Rom_5AB128: @ 0x085AB128
	.string "ひとの ものを とったら どろぼう!$"
	.if (. - gText_Rom_5AB128) > 0x13
	.error "gText_Rom_5AB128 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB128) < 0x13
	.space 0x13 - (. - gText_Rom_5AB128)
	.endif
	.incbin "baserom.gba", 0x5ab13b, 0x18

	@ src/battle_message.c:421 battle_message_line_421
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB153
gText_Rom_5AB153: @ 0x085AB153
	.string "ポケモンに\nうまく あたらなかった!$"
	.if (. - gText_Rom_5AB153) != 0x13
	.error "gText_Rom_5AB153 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB161
	.set gText_Rom_5AB161, gText_Rom_5AB153 + 0xe

	@ src/battle_message.c:422 battle_message_line_422
	.globl gText_Rom_5AB166
gText_Rom_5AB166: @ 0x085AB166
	.string "だめだ! ポケモンが\nボールから でてしまった!$"
	.if (. - gText_Rom_5AB166) > 0x19
	.error "gText_Rom_5AB166 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB166) < 0x19
	.space 0x19 - (. - gText_Rom_5AB166)
	.endif

	@ src/battle_message.c:423 battle_message_line_423
	.globl gText_Rom_5AB17F
gText_Rom_5AB17F: @ 0x085AB17F
	.string "ああ!\nつかまえたと おもったのに!$"
	.if (. - gText_Rom_5AB17F) > 0x13
	.error "gText_Rom_5AB17F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB17F) < 0x13
	.space 0x13 - (. - gText_Rom_5AB17F)
	.endif

	@ src/battle_message.c:424 battle_message_line_424
	.globl gText_Rom_5AB192
gText_Rom_5AB192: @ 0x085AB192
	.string "ざんねん!\nもうすこしで つかまえられたのに!$"
	.if (. - gText_Rom_5AB192) > 0x18
	.error "gText_Rom_5AB192 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB192) < 0x18
	.space 0x18 - (. - gText_Rom_5AB192)
	.endif

	@ src/battle_message.c:425 battle_message_line_425
	.globl gText_Rom_5AB1AA
gText_Rom_5AB1AA: @ 0x085AB1AA
	.string "おしい!\nあと ちょっとの ところだったのに!$"
	.if (. - gText_Rom_5AB1AA) > 0x18
	.error "gText_Rom_5AB1AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB1AA) < 0x18
	.space 0x18 - (. - gText_Rom_5AB1AA)
	.endif
	.incbin "baserom.gba", 0x5ab1c2, 0x63
	.globl gUnknown_85AB225
gUnknown_85AB225: @ 0x085AB225

	@ src/battle_message.c:177 sText_Someones
	.globl gText_Rom_5AB225
gText_Rom_5AB225: @ 0x085AB225
	.string "だれかの$"
	.if (. - gText_Rom_5AB225) > 0x5
	.error "gText_Rom_5AB225 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB225) < 0x5
	.space 0x5 - (. - gText_Rom_5AB225)
	.endif
	.globl gUnknown_85AB22A
gUnknown_85AB22A: @ 0x085AB22A

	@ src/battle_message.c:178 sText_Lanettes
	.globl gText_Rom_5AB22A
gText_Rom_5AB22A: @ 0x085AB22A
	.string "マユミの$"
	.if (. - gText_Rom_5AB22A) > 0x5
	.error "gText_Rom_5AB22A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB22A) < 0x5
	.space 0x5 - (. - gText_Rom_5AB22A)
	.endif
	.incbin "baserom.gba", 0x5ab22f, 0x22

	@ src/battle_message.c:430 battle_message_line_430
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB251
gText_Rom_5AB251: @ 0x085AB251
	.string "あめが ふっている$"
	.if (. - gText_Rom_5AB251) != 0xa
	.error "gText_Rom_5AB251 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB257
	.set gText_Rom_5AB257, gText_Rom_5AB251 + 0x6

	@ src/battle_message.c:431 battle_message_line_431
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB25B
gText_Rom_5AB25B: @ 0x085AB25B
	.string "すなあらしが ふきあれている$"
	.if (. - gText_Rom_5AB25B) != 0xf
	.error "gText_Rom_5AB25B must retain its original byte length"
	.endif
	.globl gText_Rom_5AB266
	.set gText_Rom_5AB266, gText_Rom_5AB25B + 0xb

	@ src/battle_message.c:497 battle_message_line_497
	.globl gText_Rom_5AB26A
gText_Rom_5AB26A: @ 0x085AB26A
	.string "ボックスが いっぱいで\nこれいじょう つかまえられない!\p$"
	.if (. - gText_Rom_5AB26A) > 0x1e
	.error "gText_Rom_5AB26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB26A) < 0x1e
	.space 0x1e - (. - gText_Rom_5AB26A)
	.endif
	.globl gUnknown_85AB288
gUnknown_85AB288: @ 0x085AB288

	@ src/battle_message.c:180 sText_EnigmaBerry
	.globl gText_Rom_5AB288
gText_Rom_5AB288: @ 0x085AB288
	.string "ナゾのみ$"
	.if (. - gText_Rom_5AB288) > 0x5
	.error "gText_Rom_5AB288 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB288) < 0x5
	.space 0x5 - (. - gText_Rom_5AB288)
	.endif
	.globl gUnknown_85AB28D
gUnknown_85AB28D: @ 0x085AB28D

	@ asm/battle_message.s:1734 BattleStringExpandPlaceholders
	.globl gText_Rom_5AB28D
gText_Rom_5AB28D: @ 0x085AB28D
	.string "のみ$"
	.if (. - gText_Rom_5AB28D) > 0x3
	.error "gText_Rom_5AB28D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB28D) < 0x3
	.space 0x3 - (. - gText_Rom_5AB28D)
	.endif

	@ src/battle_message.c:449 battle_message_line_449
	.globl gText_Rom_5AB290
gText_Rom_5AB290: @ 0x085AB290
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nまひが なおった!$"
	.if (. - gText_Rom_5AB290) > 0x12
	.error "gText_Rom_5AB290 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB290) < 0x12
	.space 0x12 - (. - gText_Rom_5AB290)
	.endif

	@ src/battle_message.c:450 battle_message_line_450
	.globl gText_Rom_5AB2A2
gText_Rom_5AB2A2: @ 0x085AB2A2
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nどくが なおった!$"
	.if (. - gText_Rom_5AB2A2) > 0x12
	.error "gText_Rom_5AB2A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2A2) < 0x12
	.space 0x12 - (. - gText_Rom_5AB2A2)
	.endif

	@ src/battle_message.c:451 battle_message_line_451
	.globl gText_Rom_5AB2B4
gText_Rom_5AB2B4: @ 0x085AB2B4
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nやけどが なおった!$"
	.if (. - gText_Rom_5AB2B4) > 0x13
	.error "gText_Rom_5AB2B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2B4) < 0x13
	.space 0x13 - (. - gText_Rom_5AB2B4)
	.endif

	@ src/battle_message.c:452 battle_message_line_452
	.globl gText_Rom_5AB2C7
gText_Rom_5AB2C7: @ 0x085AB2C7
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nこおりじょうたいが なおった!$"
	.if (. - gText_Rom_5AB2C7) > 0x18
	.error "gText_Rom_5AB2C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2C7) < 0x18
	.space 0x18 - (. - gText_Rom_5AB2C7)
	.endif

	@ src/battle_message.c:453 battle_message_line_453
	.globl gText_Rom_5AB2DF
gText_Rom_5AB2DF: @ 0x085AB2DF
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nねむりから さめた!$"
	.if (. - gText_Rom_5AB2DF) > 0x13
	.error "gText_Rom_5AB2DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2DF) < 0x13
	.space 0x13 - (. - gText_Rom_5AB2DF)
	.endif

	@ src/battle_message.c:454 battle_message_line_454
	.globl gText_Rom_5AB2F2
gText_Rom_5AB2F2: @ 0x085AB2F2
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nこんらんが なおった!$"
	.if (. - gText_Rom_5AB2F2) > 0x14
	.error "gText_Rom_5AB2F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2F2) < 0x14
	.space 0x14 - (. - gText_Rom_5AB2F2)
	.endif
	.incbin "baserom.gba", 0x5ab306, 0x17

	@ src/battle_message.c:495 battle_message_line_495
	.globl gText_Rom_5AB31D
gText_Rom_5AB31D: @ 0x085AB31D
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nじょうたいいじょうが なおった!$"
	.if (. - gText_Rom_5AB31D) > 0x19
	.error "gText_Rom_5AB31D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB31D) < 0x19
	.space 0x19 - (. - gText_Rom_5AB31D)
	.endif

	@ src/battle_message.c:456 battle_message_line_456
	.globl gText_Rom_5AB336
gText_Rom_5AB336: @ 0x085AB336
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nたいりょくを かいふくした!$"
	.if (. - gText_Rom_5AB336) > 0x17
	.error "gText_Rom_5AB336 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB336) < 0x17
	.space 0x17 - (. - gText_Rom_5AB336)
	.endif
	.incbin "baserom.gba", 0x5ab34d, 0x35

	@ src/battle_message.c:459 battle_message_line_459
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB382
gText_Rom_5AB382: @ 0x085AB382
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nすこし かいふく$"
	.if (. - gText_Rom_5AB382) != 0x11
	.error "gText_Rom_5AB382 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB38E
	.set gText_Rom_5AB38E, gText_Rom_5AB382 + 0xc

	@ src/battle_message.c:460 battle_message_line_460
	.globl gText_Rom_5AB393
gText_Rom_5AB393: @ 0x085AB393
	.string "{B_LAST_ITEM}の こうかで\n{B_CURRENT_MOVE}しか だすことができない!\p$"
	.if (. - gText_Rom_5AB393) > 0x1a
	.error "gText_Rom_5AB393 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB393) < 0x1a
	.space 0x1a - (. - gText_Rom_5AB393)
	.endif

	@ src/battle_message.c:461 battle_message_line_461
	.globl gText_Rom_5AB3AD
gText_Rom_5AB3AD: @ 0x085AB3AD
	.string "{B_DEF_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nもちこたえた!$"
	.if (. - gText_Rom_5AB3AD) > 0x10
	.error "gText_Rom_5AB3AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB3AD) < 0x10
	.space 0x10 - (. - gText_Rom_5AB3AD)
	.endif
	.globl gUnknown_85AB3BD
gUnknown_85AB3BD: @ 0x085AB3BD
	.incbin "baserom.gba", 0x5ab3bd, 0x1f
	.globl gUnknown_85AB3DC
gUnknown_85AB3DC: @ 0x085AB3DC
	.incbin "baserom.gba", 0x5ab3dc, 0x5c4
	.globl gUnknown_85AB9A0
gUnknown_85AB9A0: @ 0x085AB9A0
	.incbin "baserom.gba", 0x5ab9a0, 0x14e
	.globl gUnknown_85ABAEE
gUnknown_85ABAEE: @ 0x085ABAEE
	.incbin "baserom.gba", 0x5abaee, 0xe
	.globl gUnknown_85ABAFC
gUnknown_85ABAFC: @ 0x085ABAFC

	@ src/battle_message.c:1453 gText_PkmnIsEvolving
	.globl gText_Rom_5ABAFC
gText_Rom_5ABAFC: @ 0x085ABAFC
	.string "……おや！？\n{STR_VAR_1}の　ようすが……！$"
	.if (. - gText_Rom_5ABAFC) > 0x13
	.error "gText_Rom_5ABAFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABAFC) < 0x13
	.space 0x13 - (. - gText_Rom_5ABAFC)
	.endif
	.globl gUnknown_85ABB0F
gUnknown_85ABB0F: @ 0x085ABB0F

	@ src/battle_message.c:1454 gText_CongratsPkmnEvolved
	.globl gText_Rom_5ABB0F
gText_Rom_5ABB0F: @ 0x085ABB0F
	.string "おめでとう！ {STR_VAR_1}は\n{STR_VAR_2}に しんかした！{WAIT_SE}\p$"
	.if (. - gText_Rom_5ABB0F) > 0x19
	.error "gText_Rom_5ABB0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB0F) < 0x19
	.space 0x19 - (. - gText_Rom_5ABB0F)
	.endif
	.globl gUnknown_85ABB28
gUnknown_85ABB28: @ 0x085ABB28

