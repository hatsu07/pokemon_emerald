	@ src/use_pokeblock.c:159 sText_GetsAPokeBlockQuestion
	.globl gText_Rom_5CBD12
gText_Rom_5CBD12: @ 0x085CBD12
	.string "に ポロックを あげますか?$"
	.if (. - gText_Rom_5CBD12) > 0xf
	.error "gText_Rom_5CBD12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD12) < 0xf
	.space 0xf - (. - gText_Rom_5CBD12)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD21
gText_Rom_5CBD21: @ 0x085CBD21
	.string "かっこよさ$"
	.if (. - gText_Rom_5CBD21) > 0x6
	.error "gText_Rom_5CBD21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD21) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD21)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD27
gText_Rom_5CBD27: @ 0x085CBD27
	.string "うつくしさ$"
	.if (. - gText_Rom_5CBD27) > 0x6
	.error "gText_Rom_5CBD27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD27) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD27)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD2D
gText_Rom_5CBD2D: @ 0x085CBD2D
	.string "かわいさ$"
	.if (. - gText_Rom_5CBD2D) > 0x5
	.error "gText_Rom_5CBD2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD2D) < 0x5
	.space 0x5 - (. - gText_Rom_5CBD2D)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD32
gText_Rom_5CBD32: @ 0x085CBD32
	.string "かしこさ$"
	.if (. - gText_Rom_5CBD32) > 0x5
	.error "gText_Rom_5CBD32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD32) < 0x5
	.space 0x5 - (. - gText_Rom_5CBD32)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD37
gText_Rom_5CBD37: @ 0x085CBD37
	.string "たくましさ$"
	.if (. - gText_Rom_5CBD37) > 0x6
	.error "gText_Rom_5CBD37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD37) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD37)
	.endif
	.globl gUnknown_85CBD3D
gUnknown_85CBD3D: @ 0x085CBD3D

	@ asm/use_pokeblock.s:1658 Pokeblock_BufferEnhancedStatText
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBD3D
gText_Rom_5CBD3D: @ 0x085CBD3D
	.string "に　みがきが　かかった！$"
	.if (. - gText_Rom_5CBD3D) != 0xd
	.error "gText_Rom_5CBD3D must retain its original byte length"
	.endif
	.globl gText_Rom_5CBD45
	.set gText_Rom_5CBD45, gText_Rom_5CBD3D + 0x8
	.globl gUnknown_85CBD4A
gUnknown_85CBD4A: @ 0x085CBD4A

	@ src/use_pokeblock.c:161 sText_NothingChanged
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBD4A
gText_Rom_5CBD4A: @ 0x085CBD4A
	.string "なにも かわらなかった!$"
	.if (. - gText_Rom_5CBD4A) != 0xd
	.error "gText_Rom_5CBD4A must retain its original byte length"
	.endif
	.globl gText_Rom_5CBD52
	.set gText_Rom_5CBD52, gText_Rom_5CBD4A + 0x8
	.globl gUnknown_85CBD57
gUnknown_85CBD57: @ 0x085CBD57

	@ src/use_pokeblock.c:162 sText_WontEatAnymore
	.globl gText_Rom_5CBD57
gText_Rom_5CBD57: @ 0x085CBD57
	.string "もう これいじょう たべない みたい…$"
	.if (. - gText_Rom_5CBD57) > 0x14
	.error "gText_Rom_5CBD57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD57) < 0x14
	.space 0x14 - (. - gText_Rom_5CBD57)
	.endif
	.globl gUnknown_85CBD6B
gUnknown_85CBD6B: @ 0x085CBD6B
	@ Replaced baserom.gba range: offset=0x5CBD6B, size=0x47
	.byte 0x7A, 0x9F, 0xAE, 0x64, 0x19, 0x00, 0x06, 0x07, 0x0A, 0x20, 0x16, 0x00, 0x0C, 0x50, 0x4B, 0x02
	.byte 0x0C, 0x1F, 0x0C, 0x10, 0xFE, 0x96, 0xA0, 0x58, 0x51, 0xA0, 0x9D, 0x56, 0xAE, 0x64, 0x78, 0xA0
	.byte 0x8D, 0x19, 0x00, 0x09, 0x2E, 0x0B, 0x2D, 0x0C, 0x1F, 0x0D, 0xFE, 0x0C, 0x46, 0x27, 0x08, 0x05
	.byte 0x1F, 0x11, 0x08, 0x41, 0x0B, 0x02, 0xFC, 0x01, 0x04, 0xB1, 0xA2, 0x1C, 0x2E, 0x1E, 0x45, 0x00
	.byte 0x06, 0x06, 0x28, 0x1F, 0x0D, 0xB2, 0xFF
	.globl gUnknown_85CBDB2
gUnknown_85CBDB2: @ 0x085CBDB2
	@ Replaced baserom.gba range: offset=0x5CBDB2, size=0x45
	.byte 0x96, 0xA0, 0x58, 0x51, 0xA0, 0x9D, 0x07, 0x19, 0x03, 0x19, 0x00, 0x0A, 0x0C, 0x36, 0x03, 0x00
	.byte 0x1F, 0x10, 0x1A, 0x00, 0x3D, 0x35, 0x20, 0x36, 0x03, 0x37, 0xFE, 0x07, 0x1F, 0x0C, 0x10, 0xAD
	.byte 0x5E, 0xAE, 0x98, 0x0D, 0x29, 0x0A, 0x14, 0x1A, 0x00, 0x44, 0x07, 0x1F, 0x0E, 0x2E, 0x37, 0x00
	.byte 0x0A, 0x19, 0x1F, 0x1F, 0xFE, 0x8A, 0xAE, 0x71, 0x2D, 0x00, 0x01, 0x0F, 0x48, 0x0A, 0x14, 0x1A
	.byte 0x44, 0x07, 0x1F, 0x0D, 0xFF
	.globl gUnknown_85CBDF7
gUnknown_85CBDF7: @ 0x085CBDF7
	@ Replaced baserom.gba range: offset=0x5CBDF7, size=0x29
	.byte 0xFC, 0x01, 0x04, 0xB1, 0x0A, 0x19, 0x1F, 0x1F, 0x00, 0x4A, 0x03, 0x09, 0x2E, 0x2D, 0x12, 0x43
	.byte 0x09, 0x29, 0x0A, 0x14, 0x1A, 0x00, 0x44, 0x07, 0x1F, 0x0E, 0x2E, 0xFE, 0x60, 0x52, 0x64, 0x79
	.byte 0x16, 0x00, 0x23, 0x45, 0x28, 0x1F, 0x0D, 0xB2, 0xFF
	.globl gUnknown_85CBE20
gUnknown_85CBE20: @ 0x085CBE20

	@ src/strings.c:634 gText_CheckCompleted
	.globl gText_Rom_5CBE20
gText_Rom_5CBE20: @ 0x085CBE20
	.string "けんさが しゅうりょうしました!\nもういちど レポートを かきこみます\nしばらくおまちください$"
	.if (. - gText_Rom_5CBE20) > 0x30
	.error "gText_Rom_5CBE20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBE20) < 0x30
	.space 0x30 - (. - gText_Rom_5CBE20)
	.endif
	.globl gUnknown_85CBE50
gUnknown_85CBE50: @ 0x085CBE50
	@ Replaced baserom.gba range: offset=0x5CBE50, size=0x40
	.byte 0x7A, 0x9F, 0xAE, 0x64, 0x19, 0x00, 0x06, 0x07, 0x0A, 0x20, 0x1A, 0x00, 0x0C, 0x35, 0x03, 0x28
	.byte 0x36, 0x03, 0x0C, 0x1F, 0x0C, 0x10, 0xFE, 0xFC, 0x01, 0x04, 0xB1, 0x0A, 0x19, 0x1F, 0x1F, 0x00
	.byte 0x4A, 0x03, 0x09, 0x2E, 0x2D, 0x12, 0x43, 0x09, 0x29, 0x0A, 0x14, 0x1A, 0x00, 0x44, 0x07, 0x1F
	.byte 0x0E, 0x2E, 0xFE, 0x60, 0x52, 0x64, 0x79, 0x16, 0x00, 0x23, 0x45, 0x28, 0x1F, 0x0D, 0xB2, 0xFF
	.globl gUnknown_85CBE90
gUnknown_85CBE90: @ 0x085CBE90
	@ Replaced baserom.gba range: offset=0x5CBE90, size=0x2A
	.byte 0x7A, 0x9F, 0xAE, 0x64, 0x19, 0x00, 0x06, 0x07, 0x0A, 0x20, 0x1A, 0x00, 0x0C, 0x35, 0x03, 0x28
	.byte 0x36, 0x03, 0x0C, 0x1F, 0x0C, 0x10, 0xFE, 0xFC, 0x01, 0x04, 0xB1, 0xBB, 0x9A, 0x60, 0x7E, 0x2D
	.byte 0x00, 0x05, 0x0C, 0x13, 0x08, 0x41, 0x0B, 0x02, 0xB2, 0xFF
	.globl gUnknown_85CBEBA
gUnknown_85CBEBA: @ 0x085CBEBA

	@ src/strings.c:638 gText_Ferry
	.globl gText_Rom_5CBEBA
gText_Rom_5CBEBA: @ 0x085CBEBA
	.string "れんらくせん$"
	.if (. - gText_Rom_5CBEBA) > 0x7
	.error "gText_Rom_5CBEBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBEBA) < 0x7
	.space 0x7 - (. - gText_Rom_5CBEBA)
	.endif
	.globl gUnknown_85CBEC1
gUnknown_85CBEC1: @ 0x085CBEC1

	@ src/data/easy_chat/easy_chat_group_events.h:17 gEasyChatWord_SecretBase (+3 aliases)
	.globl gText_Rom_5CBEC1
gText_Rom_5CBEC1: @ 0x085CBEC1
	.string "ひみつきち$"
	.if (. - gText_Rom_5CBEC1) > 0x6
	.error "gText_Rom_5CBEC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBEC1) < 0x6
	.space 0x6 - (. - gText_Rom_5CBEC1)
	.endif
	.globl gUnknown_85CBEC7
gUnknown_85CBEC7: @ 0x085CBEC7

	@ src/strings.c:640 gText_Hideout
	.globl gText_Rom_5CBEC7
gText_Rom_5CBEC7: @ 0x085CBEC7
	.string "アジト$"
	.if (. - gText_Rom_5CBEC7) > 0x4
	.error "gText_Rom_5CBEC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBEC7) < 0x4
	.space 0x4 - (. - gText_Rom_5CBEC7)
	.endif
	.globl gUnknown_85CBECB
gUnknown_85CBECB: @ 0x085CBECB
	@ Replaced baserom.gba range: offset=0x5CBECB, size=0x1E
	.byte 0xCC, 0xCE, 0xBD, 0x2D, 0x00, 0x78, 0x5E, 0xA0, 0x64, 0x0C, 0x1F, 0x0D, 0xFE, 0xBB, 0x44, 0x00
	.byte 0x09, 0x50, 0x13, 0x02, 0x00, 0xBC, 0x44, 0x00, 0x57, 0x84, 0x7E, 0x5E, 0x79, 0xFF
	.globl gUnknown_85CBEE9
gUnknown_85CBEE9: @ 0x085CBEE9

	@ src/strings.c:642 gText_PresentTime
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBEE9
gText_Rom_5CBEE9: @ 0x085CBEE9
	.string "げんざいの ゲームない じかん$"
	.if (. - gText_Rom_5CBEE9) != 0x10
	.error "gText_Rom_5CBEE9 must retain its original byte length"
	.endif
	.globl gText_Rom_5CBEF5
	.set gText_Rom_5CBEF5, gText_Rom_5CBEE9 + 0xc
	.globl gUnknown_85CBEF9
gUnknown_85CBEF9: @ 0x085CBEF9

	@ src/strings.c:643 gText_PreviousTime
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBEF9
gText_Rom_5CBEF9: @ 0x085CBEF9
	.string "ぜんかいの ゲームない じかん$"
	.if (. - gText_Rom_5CBEF9) != 0x10
	.error "gText_Rom_5CBEF9 must retain its original byte length"
	.endif
	.globl gText_Rom_5CBF05
	.set gText_Rom_5CBF05, gText_Rom_5CBEF9 + 0xc
	.globl gUnknown_85CBF09
gUnknown_85CBF09: @ 0x085CBF09

	@ src/strings.c:644 gText_PleaseResetTime
	.globl gText_Rom_5CBF09
gText_Rom_5CBF09: @ 0x085CBF09
	.string "じかんを さいせってい してください$"
	.if (. - gText_Rom_5CBF09) > 0x13
	.error "gText_Rom_5CBF09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF09) < 0x13
	.space 0x13 - (. - gText_Rom_5CBF09)
	.endif
	.globl gUnknown_85CBF1C
gUnknown_85CBF1C: @ 0x085CBF1C

	@ src/strings.c:645 gText_ClockHasBeenReset
	.globl gText_Rom_5CBF1C
gText_Rom_5CBF1C: @ 0x085CBF1C
	.string "じかんを さいせってい しました!\nレポートを かいています おまちください$"
	.if (. - gText_Rom_5CBF1C) > 0x27
	.error "gText_Rom_5CBF1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF1C) < 0x27
	.space 0x27 - (. - gText_Rom_5CBF1C)
	.endif
	.globl gUnknown_85CBF43
gUnknown_85CBF43: @ 0x085CBF43

	@ src/strings.c:646 gText_SaveCompleted
	.globl gText_Rom_5CBF43
gText_Rom_5CBF43: @ 0x085CBF43
	.string "レポートを かきこみました!$"
	.if (. - gText_Rom_5CBF43) > 0xf
	.error "gText_Rom_5CBF43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF43) < 0xf
	.space 0xf - (. - gText_Rom_5CBF43)
	.endif
	.globl gUnknown_85CBF52
gUnknown_85CBF52: @ 0x085CBF52

	@ src/strings.c:647 gText_SaveFailed
	.globl gText_Rom_5CBF52
gText_Rom_5CBF52: @ 0x085CBF52
	.string "レポートの かきこみに\nしっぱい しました…$"
	.if (. - gText_Rom_5CBF52) > 0x17
	.error "gText_Rom_5CBF52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF52) < 0x17
	.space 0x17 - (. - gText_Rom_5CBF52)
	.endif
	.globl gUnknown_85CBF69
gUnknown_85CBF69: @ 0x085CBF69

	@ src/strings.c:648 gText_NoSaveFileCantSetTime
	.globl gText_Rom_5CBF69
gText_Rom_5CBF69: @ 0x085CBF69
	.string "レポートが ないので\nじかんの せっていは できません!$"
	.if (. - gText_Rom_5CBF69) > 0x1d
	.error "gText_Rom_5CBF69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF69) < 0x1d
	.space 0x1d - (. - gText_Rom_5CBF69)
	.endif
	.globl gUnknown_85CBF86
gUnknown_85CBF86: @ 0x085CBF86

	@ src/strings.c:649 gText_InGameClockUsable
	.globl gText_Rom_5CBF86
gText_Rom_5CBF86: @ 0x085CBF86
	.string "ゲームない じかんの しゅうせい システムが\nつかえる ように なりました!$"
	.if (. - gText_Rom_5CBF86) > 0x27
	.error "gText_Rom_5CBF86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF86) < 0x27
	.space 0x27 - (. - gText_Rom_5CBF86)
	.endif
	.globl gUnknown_85CBFAD
gUnknown_85CBFAD: @ 0x085CBFAD

	@ asm/tv.s:15280 DoTVShowFindThatGamer
	.globl gText_Rom_5CBFAD
gText_Rom_5CBFAD: @ 0x085CBFAD
	.string "スロット$"
	.if (. - gText_Rom_5CBFAD) > 0x5
	.error "gText_Rom_5CBFAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFAD) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFAD)
	.endif
	.globl gUnknown_85CBFB2
gUnknown_85CBFB2: @ 0x085CBFB2

	@ asm/tv.s:15288 DoTVShowFindThatGamer
	.globl gText_Rom_5CBFB2
gText_Rom_5CBFB2: @ 0x085CBFB2
	.string "ルーレット$"
	.if (. - gText_Rom_5CBFB2) > 0x6
	.error "gText_Rom_5CBFB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFB2) < 0x6
	.space 0x6 - (. - gText_Rom_5CBFB2)
	.endif
	.globl gUnknown_85CBFB8
gUnknown_85CBFB8: @ 0x085CBFB8

	@ asm/tv.s:14135 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFB8
gText_Rom_5CBFB8: @ 0x085CBFB8
	.string "いい$"
	.if (. - gText_Rom_5CBFB8) > 0x3
	.error "gText_Rom_5CBFB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFB8) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFB8)
	.endif
	.globl gUnknown_85CBFBB
gUnknown_85CBFBB: @ 0x085CBFBB

	@ asm/tv.s:14127 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFBB
gText_Rom_5CBFBB: @ 0x085CBFBB
	.string "おいしい$"
	.if (. - gText_Rom_5CBFBB) > 0x5
	.error "gText_Rom_5CBFBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFBB) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFBB)
	.endif
	.globl gUnknown_85CBFC0
gUnknown_85CBFC0: @ 0x085CBFC0

	@ src/data/easy_chat/easy_chat_group_conditions.h:172 easy_chat_group_conditions_line_172 (+1 aliases)
	.globl gText_Rom_5CBFC0
gText_Rom_5CBFC0: @ 0x085CBFC0
	.string "さいこう$"
	.if (. - gText_Rom_5CBFC0) > 0x5
	.error "gText_Rom_5CBFC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFC0) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFC0)
	.endif
	.globl gUnknown_85CBFC5
gUnknown_85CBFC5: @ 0x085CBFC5

