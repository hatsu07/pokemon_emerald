	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_2C2767
gText_Rom_2C2767: @ 0x082C2767
	.string "します$"
	.if (. - gText_Rom_2C2767) > 0x4
	.error "gText_Rom_2C2767 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2767) < 0x4
	.space 0x4 - (. - gText_Rom_2C2767)
	.endif
	.incbin "baserom.gba", 0x2c276b, 0x1
	.globl gUnknown_82C276C
gUnknown_82C276C: @ 0x082C276C

	@ asm/mystery_gift.s:2007 task00_mystery_gift
	.globl gText_Rom_2C276C
gText_Rom_2C276C: @ 0x082C276C
	.string "つうしん　しています,,,$"
	.if (. - gText_Rom_2C276C) > 0xe
	.error "gText_Rom_2C276C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C276C) < 0xe
	.space 0xe - (. - gText_Rom_2C276C)
	.endif

	@ src/strings.c:1060 gText_CommunicationCompleted
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C277A
gText_Rom_2C277A: @ 0x082C277A
	.string "  つうしんが しゅうりょう しました$"
	.if (. - gText_Rom_2C277A) != 0x14
	.error "gText_Rom_2C277A must retain its original byte length"
	.endif
	.globl gUnknown_82C277C
	.set gUnknown_82C277C, gText_Rom_2C277A + 0x2

	@ src/strings.c:1061 gText_CommunicationError
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C278E
gText_Rom_2C278E: @ 0x082C278E
	.string "  つうしんに しっぱい しました$"
	.if (. - gText_Rom_2C278E) != 0x12
	.error "gText_Rom_2C278E must retain its original byte length"
	.endif
	.globl gUnknown_82C2790
	.set gUnknown_82C2790, gText_Rom_2C278E + 0x2
	.globl gUnknown_82C27A0
gUnknown_82C27A0: @ 0x082C27A0

	@ src/strings.c:1062 gText_CommunicationCanceled
	.globl gText_Rom_2C27A0
gText_Rom_2C27A0: @ 0x082C27A0
	.string "つうしんを キャンセル しました$"
	.if (. - gText_Rom_2C27A0) > 0x11
	.error "gText_Rom_2C27A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C27A0) < 0x11
	.space 0x11 - (. - gText_Rom_2C27A0)
	.endif

	@ src/strings.c:1063 gText_ThrowAwayWonderCard
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C27B1
gText_Rom_2C27B1: @ 0x082C27B1
	.string "   いまの ふしぎなカードを すてて\nあたらしい カードを よみこみますか?$"
	.if (. - gText_Rom_2C27B1) != 0x28
	.error "gText_Rom_2C27B1 must retain its original byte length"
	.endif
	.globl gUnknown_82C27B4
	.set gUnknown_82C27B4, gText_Rom_2C27B1 + 0x3

	@ src/strings.c:1064 gText_HaventReceivedCardsGift
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C27D9
gText_Rom_2C27D9: @ 0x082C27D9
	.string "   まだ カードの おくりものを もらって\nませんが ほんとうに よみこみますか?$"
	.if (. - gText_Rom_2C27D9) != 0x2b
	.error "gText_Rom_2C27D9 must retain its original byte length"
	.endif
	.globl gUnknown_82C27DC
	.set gUnknown_82C27DC, gText_Rom_2C27D9 + 0x3
	.globl gUnknown_82C2804
gUnknown_82C2804: @ 0x082C2804

	@ src/strings.c:1065 gText_WonderCardReceivedFrom
	.globl gText_Rom_2C2804
gText_Rom_2C2804: @ 0x082C2804
	.string "{STR_VAR_1}から ふしぎなカードが\nおくられて きました!$"
	.if (. - gText_Rom_2C2804) > 0x1a
	.error "gText_Rom_2C2804 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2804) < 0x1a
	.space 0x1a - (. - gText_Rom_2C2804)
	.endif
	.incbin "baserom.gba", 0x2c281e, 0x2
	.globl gUnknown_82C2820
gUnknown_82C2820: @ 0x082C2820
	.incbin "baserom.gba", 0x2c2820, 0x17

	@ src/strings.c:1067 gText_WonderCardReceived
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2837
gText_Rom_2C2837: @ 0x082C2837
	.string " あたらしい ふしぎなカードが\nおくられて きました!$"
	.if (. - gText_Rom_2C2837) != 0x1c
	.error "gText_Rom_2C2837 must retain its original byte length"
	.endif
	.globl gUnknown_82C2838
	.set gUnknown_82C2838, gText_Rom_2C2837 + 0x1

	@ src/strings.c:1068 gText_WonderNewsReceived
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2853
gText_Rom_2C2853: @ 0x082C2853
	.string " あたらしい ニュースが\nおくられて きました!$"
	.if (. - gText_Rom_2C2853) != 0x19
	.error "gText_Rom_2C2853 must retain its original byte length"
	.endif
	.globl gUnknown_82C2854
	.set gUnknown_82C2854, gText_Rom_2C2853 + 0x1
	.globl gUnknown_82C286C
gUnknown_82C286C: @ 0x082C286C
	.incbin "baserom.gba", 0x2c286c, 0x18
	.globl gUnknown_82C2884
gUnknown_82C2884: @ 0x082C2884
	.incbin "baserom.gba", 0x2c2884, 0x1c
	.globl gUnknown_82C28A0
gUnknown_82C28A0: @ 0x082C28A0
	.incbin "baserom.gba", 0x2c28a0, 0x18
	.globl gUnknown_82C28B8
gUnknown_82C28B8: @ 0x082C28B8

	@ src/strings.c:1072 gText_AlreadyHadNews
	.globl gText_Rom_2C28B8
gText_Rom_2C28B8: @ 0x082C28B8
	.string "おなじ ニュースを\nすでに もっています$"
	.if (. - gText_Rom_2C28B8) > 0x15
	.error "gText_Rom_2C28B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C28B8) < 0x15
	.space 0x15 - (. - gText_Rom_2C28B8)
	.endif

	@ src/strings.c:1073 gText_AlreadyHadStamp
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C28CD
gText_Rom_2C28CD: @ 0x082C28CD
	.string "   おなじ スタンプを\nすでに もっています$"
	.if (. - gText_Rom_2C28CD) != 0x18
	.error "gText_Rom_2C28CD must retain its original byte length"
	.endif
	.globl gUnknown_82C28D0
	.set gUnknown_82C28D0, gText_Rom_2C28CD + 0x3

	@ src/strings.c:1074 gText_NoMoreRoomForStamps
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C28E5
gText_Rom_2C28E5: @ 0x082C28E5
	.string "   スタンプが いっぱい なので\nもう おせません!$"
	.if (. - gText_Rom_2C28E5) != 0x1c
	.error "gText_Rom_2C28E5 must retain its original byte length"
	.endif
	.globl gUnknown_82C28E8
	.set gUnknown_82C28E8, gText_Rom_2C28E5 + 0x3

	@ src/strings.c:1075 gText_RecordUploadedViaWireless
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2901
gText_Rom_2C2901: @ 0x082C2901
	.string "   じぶんの きろくを\nジョイスポットに よみこませ ました!$"
	.if (. - gText_Rom_2C2901) != 0x21
	.error "gText_Rom_2C2901 must retain its original byte length"
	.endif
	.globl gUnknown_82C2904
	.set gUnknown_82C2904, gText_Rom_2C2901 + 0x3

	@ src/strings.c:1076 gText_CantAcceptCardFromTrainer
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2922
gText_Rom_2C2922: @ 0x082C2922
	.string "  この あいて からは ふしぎなカードを\nうけとれません!$"
	.if (. - gText_Rom_2C2922) != 0x1f
	.error "gText_Rom_2C2922 must retain its original byte length"
	.endif
	.globl gUnknown_82C2924
	.set gUnknown_82C2924, gText_Rom_2C2922 + 0x2
	.incbin "baserom.gba", 0x2c2941, 0x3
	.globl gUnknown_82C2944
gUnknown_82C2944: @ 0x082C2944
	.incbin "baserom.gba", 0x2c2944, 0x1a

	@ src/strings.c:1078 gText_NothingSentOver
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_2C295E
gText_Rom_2C295E: @ 0x082C295E
	.string "  なにも おくられて\nきません でした$"
	.if (. - gText_Rom_2C295E) != 0x15
	.error "gText_Rom_2C295E must retain its original byte length"
	.endif
	.globl gUnknown_82C2960
	.set gUnknown_82C2960, gText_Rom_2C295E + 0x2
	.globl gText_Rom_2C296F
	.set gText_Rom_2C296F, gText_Rom_2C295E + 0x11

	@ src/strings.c:1079 gText_WhatToDoWithCards
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2973
gText_Rom_2C2973: @ 0x082C2973
	.string " カードを どうしますか?$"
	.if (. - gText_Rom_2C2973) != 0xe
	.error "gText_Rom_2C2973 must retain its original byte length"
	.endif
	.globl gUnknown_82C2974
	.set gUnknown_82C2974, gText_Rom_2C2973 + 0x1

	@ src/strings.c:1080 gText_WhatToDoWithNews
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2981
gText_Rom_2C2981: @ 0x082C2981
	.string "   ニュースを どうしますか?$"
	.if (. - gText_Rom_2C2981) != 0x11
	.error "gText_Rom_2C2981 must retain its original byte length"
	.endif
	.globl gUnknown_82C2984
	.set gUnknown_82C2984, gText_Rom_2C2981 + 0x3
	.incbin "baserom.gba", 0x2c2992, 0x2
	.globl gUnknown_82C2994
gUnknown_82C2994: @ 0x082C2994

	@ asm/mystery_gift.s:2502 task00_mystery_gift
	.globl gText_Rom_2C2994
gText_Rom_2C2994: @ 0x082C2994
	.string "ふしぎなカード　を\nおくって　います,,,$"
	.if (. - gText_Rom_2C2994) > 0x16
	.error "gText_Rom_2C2994 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2994) < 0x16
	.space 0x16 - (. - gText_Rom_2C2994)
	.endif
	.incbin "baserom.gba", 0x2c29aa, 0x2
	.globl gUnknown_82C29AC
gUnknown_82C29AC: @ 0x082C29AC

	@ asm/mystery_gift.s:2512 task00_mystery_gift
	.globl gText_Rom_2C29AC
gText_Rom_2C29AC: @ 0x082C29AC
	.string "ニュースを\nおくって　います,,,$"
	.if (. - gText_Rom_2C29AC) > 0x12
	.error "gText_Rom_2C29AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C29AC) < 0x12
	.space 0x12 - (. - gText_Rom_2C29AC)
	.endif
	.incbin "baserom.gba", 0x2c29be, 0x2
	.globl gUnknown_82C29C0
gUnknown_82C29C0: @ 0x082C29C0

	@ src/strings.c:1083 gText_WonderCardSentTo
	.globl gText_Rom_2C29C0
gText_Rom_2C29C0: @ 0x082C29C0
	.string "{STR_VAR_1}に ふしぎなカードを\nおくり ました!$"
	.if (. - gText_Rom_2C29C0) > 0x16
	.error "gText_Rom_2C29C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C29C0) < 0x16
	.space 0x16 - (. - gText_Rom_2C29C0)
	.endif
	.incbin "baserom.gba", 0x2c29d6, 0x2
	.globl gUnknown_82C29D8
gUnknown_82C29D8: @ 0x082C29D8
	.incbin "baserom.gba", 0x2c29d8, 0x14
	.globl gUnknown_82C29EC
gUnknown_82C29EC: @ 0x082C29EC
	.incbin "baserom.gba", 0x2c29ec, 0x14
	.globl gUnknown_82C2A00
gUnknown_82C2A00: @ 0x082C2A00

	@ src/strings.c:1086 gText_GiftSentTo
	.globl gText_Rom_2C2A00
gText_Rom_2C2A00: @ 0x082C2A00
	.string "{STR_VAR_1}に おくりものを しました!$"
	.if (. - gText_Rom_2C2A00) > 0x11
	.error "gText_Rom_2C2A00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2A00) < 0x11
	.space 0x11 - (. - gText_Rom_2C2A00)
	.endif

	@ src/strings.c:1087 gText_OtherTrainerHasCard
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2A11
gText_Rom_2C2A11: @ 0x082C2A11
	.string "   あいてが おなじ\nふしぎなカードを もっています!$"
	.if (. - gText_Rom_2C2A11) != 0x1d
	.error "gText_Rom_2C2A11 must retain its original byte length"
	.endif
	.globl gUnknown_82C2A14
	.set gUnknown_82C2A14, gText_Rom_2C2A11 + 0x3

	@ src/strings.c:1088 gText_OtherTrainerHasNews
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2A2E
gText_Rom_2C2A2E: @ 0x082C2A2E
	.string "  あいてが おなじ\nニュースを もっています!$"
	.if (. - gText_Rom_2C2A2E) != 0x19
	.error "gText_Rom_2C2A2E must retain its original byte length"
	.endif
	.globl gUnknown_82C2A30
	.set gUnknown_82C2A30, gText_Rom_2C2A2E + 0x2

	@ src/strings.c:1089 gText_OtherTrainerHasStamp
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2A47
gText_Rom_2C2A47: @ 0x082C2A47
	.string " あいてが おなじ\nスタンプを もっています!$"
	.if (. - gText_Rom_2C2A47) != 0x18
	.error "gText_Rom_2C2A47 must retain its original byte length"
	.endif
	.globl gUnknown_82C2A48
	.set gUnknown_82C2A48, gText_Rom_2C2A47 + 0x1

	@ src/strings.c:1090 gText_OtherTrainerCanceled
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2A5F
gText_Rom_2C2A5F: @ 0x082C2A5F
	.string " あいてが つうしんを \nキャンセル しました$"
	.if (. - gText_Rom_2C2A5F) != 0x18
	.error "gText_Rom_2C2A5F must retain its original byte length"
	.endif
	.globl gUnknown_82C2A60
	.set gUnknown_82C2A60, gText_Rom_2C2A5F + 0x1

	@ src/strings.c:1091 gText_CantSendGiftToTrainer
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_2C2A77
gText_Rom_2C2A77: @ 0x082C2A77
	.string " この あいて には\nふしぎなおくりものを わたせません$"
	.if (. - gText_Rom_2C2A77) != 0x1d
	.error "gText_Rom_2C2A77 must retain its original byte length"
	.endif
	.globl gUnknown_82C2A78
	.set gUnknown_82C2A78, gText_Rom_2C2A77 + 0x1
	.globl gText_Rom_2C2A90
	.set gText_Rom_2C2A90, gText_Rom_2C2A77 + 0x19
	.globl gUnknown_82C2A94
gUnknown_82C2A94: @ 0x082C2A94

	@ src/strings.c:1092 gText_IfThrowAwayCardEventWontHappen
	.globl gText_Rom_2C2A94
gText_Rom_2C2A94: @ 0x082C2A94
	.string "カードをすてると できごとも\nなくなりますが よいですか?$"
	.if (. - gText_Rom_2C2A94) > 0x1e
	.error "gText_Rom_2C2A94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2A94) < 0x1e
	.space 0x1e - (. - gText_Rom_2C2A94)
	.endif

	@ src/strings.c:1093 gText_OkayToDiscardNews
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2AB2
gText_Rom_2C2AB2: @ 0x082C2AB2
	.string "  ほんとうに ニュースを\nすてても よいですか?$"
	.if (. - gText_Rom_2C2AB2) != 0x1a
	.error "gText_Rom_2C2AB2 must retain its original byte length"
	.endif
	.globl gUnknown_82C2AB4
	.set gUnknown_82C2AB4, gText_Rom_2C2AB2 + 0x2
	.globl gUnknown_82C2ACC
gUnknown_82C2ACC: @ 0x082C2ACC

	@ src/strings.c:1094 gText_HaventReceivedGiftOkayToDiscard
	.globl gText_Rom_2C2ACC
gText_Rom_2C2ACC: @ 0x082C2ACC
	.string "おくりものを もらってません\nが ほんとうに すてますか?$"
	.if (. - gText_Rom_2C2ACC) > 0x1e
	.error "gText_Rom_2C2ACC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2ACC) < 0x1e
	.space 0x1e - (. - gText_Rom_2C2ACC)
	.endif

	@ src/strings.c:1095 gText_DataWillBeSaved
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_2C2AEA
gText_Rom_2C2AEA: @ 0x082C2AEA
	.string "  レポートを かいています\nしばらく おまちください$"
	.if (. - gText_Rom_2C2AEA) != 0x1c
	.error "gText_Rom_2C2AEA must retain its original byte length"
	.endif
	.globl gUnknown_82C2AEC
	.set gUnknown_82C2AEC, gText_Rom_2C2AEA + 0x2
	.globl gText_Rom_2C2AF9
	.set gText_Rom_2C2AF9, gText_Rom_2C2AEA + 0xf

	@ src/strings.c:1096 gText_SaveCompletedPressA
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2B06
gText_Rom_2C2B06: @ 0x082C2B06
	.string "  レポートを かきこみました!\nAボタンを おしてください$"
	.if (. - gText_Rom_2C2B06) != 0x1f
	.error "gText_Rom_2C2B06 must retain its original byte length"
	.endif
	.globl gUnknown_82C2B08
	.set gUnknown_82C2B08, gText_Rom_2C2B06 + 0x2

	@ src/strings.c:1097 gText_WonderCardThrownAway
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2B25
gText_Rom_2C2B25: @ 0x082C2B25
	.string "   ふしぎなカードを すてました$"
	.if (. - gText_Rom_2C2B25) != 0x12
	.error "gText_Rom_2C2B25 must retain its original byte length"
	.endif
	.globl gUnknown_82C2B28
	.set gUnknown_82C2B28, gText_Rom_2C2B25 + 0x3

	@ src/strings.c:1098 gText_WonderNewsThrownAway
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2B37
gText_Rom_2C2B37: @ 0x082C2B37
	.string " ニュースを すてました$"
	.if (. - gText_Rom_2C2B37) != 0xd
	.error "gText_Rom_2C2B37 must retain its original byte length"
	.endif
	.globl gUnknown_82C2B38
	.set gUnknown_82C2B38, gText_Rom_2C2B37 + 0x1
	.globl gUnknown_82C2B44
gUnknown_82C2B44: @ 0x082C2B44
	.incbin "baserom.gba", 0x2c2b44, 0xc
	.globl gUnknown_82C2B50
gUnknown_82C2B50: @ 0x082C2B50

	@ src/strings.c:1101 gText_PickOKCancel
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C2B50
gText_Rom_2C2B50: @ 0x082C2B50
	.string "{DPAD_UPDOWN}えらぶ {A_BUTTON}けってい {B_BUTTON}やめる$"
	.if (. - gText_Rom_2C2B50) != 0x13
	.error "gText_Rom_2C2B50 must retain its original byte length"
	.endif
	.globl gText_Rom_2C2B56
	.set gText_Rom_2C2B56, gText_Rom_2C2B50 + 0x6
	.globl gText_Rom_2C2B5D
	.set gText_Rom_2C2B5D, gText_Rom_2C2B50 + 0xd
	.globl gText_Rom_2C2B5F
	.set gText_Rom_2C2B5F, gText_Rom_2C2B50 + 0xf
	.incbin "baserom.gba", 0x2c2b63, 0x1
	.globl gUnknown_82C2B64
gUnknown_82C2B64: @ 0x082C2B64
	.incbin "baserom.gba", 0x2c2b64, 0x8
	.globl gUnknown_82C2B6C
gUnknown_82C2B6C: @ 0x082C2B6C
	.incbin "baserom.gba", 0x2c2b6c, 0x3

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:154 easy_chat_group_lifestyle_line_154
	.globl gText_Rom_2C2B6F
gText_Rom_2C2B6F: @ 0x082C2B6F
	.string "テスト$"
	.if (. - gText_Rom_2C2B6F) > 0x4
	.error "gText_Rom_2C2B6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2B6F) < 0x4
	.space 0x4 - (. - gText_Rom_2C2B6F)
	.endif
	.incbin "baserom.gba", 0x2c2b73, 0x9
	.globl gUnknown_82C2B7C
gUnknown_82C2B7C: @ 0x082C2B7C
	.incbin "baserom.gba", 0x2c2b7c, 0x14
	.globl gUnknown_82C2B90
gUnknown_82C2B90: @ 0x082C2B90
	.incbin "baserom.gba", 0x2c2b90, 0x20
	.globl gUnknown_82C2BB0
gUnknown_82C2BB0: @ 0x082C2BB0
	.incbin "baserom.gba", 0x2c2bb0, 0xa
	.globl gUnknown_82C2BBA
gUnknown_82C2BBA: @ 0x082C2BBA
	.incbin "baserom.gba", 0x2c2bba, 0x5
	.globl gUnknown_82C2BBF
gUnknown_82C2BBF: @ 0x082C2BBF
	.incbin "baserom.gba", 0x2c2bbf, 0x5
	.globl gUnknown_82C2BC4
gUnknown_82C2BC4: @ 0x082C2BC4
	.incbin "baserom.gba", 0x2c2bc4, 0x18
	.globl gUnknown_82C2BDC
gUnknown_82C2BDC: @ 0x082C2BDC
	.incbin "baserom.gba", 0x2c2bdc, 0x14
	.globl gUnknown_82C2BF0
gUnknown_82C2BF0: @ 0x082C2BF0
	.incbin "baserom.gba", 0x2c2bf0, 0x4
	.globl gUnknown_82C2BF4
gUnknown_82C2BF4: @ 0x082C2BF4
	.incbin "baserom.gba", 0x2c2bf4, 0x15
	.globl gUnknown_82C2C09
gUnknown_82C2C09: @ 0x082C2C09
	.incbin "baserom.gba", 0x2c2c09, 0x2
	.globl gUnknown_82C2C0B
gUnknown_82C2C0B: @ 0x082C2C0B
	.incbin "baserom.gba", 0x2c2c0b, 0x5
	.globl gUnknown_82C2C10
gUnknown_82C2C10: @ 0x082C2C10
	.incbin "baserom.gba", 0x2c2c10, 0x200
	.globl gUnknown_82C2E10
gUnknown_82C2E10: @ 0x082C2E10
	.incbin "baserom.gba", 0x2c2e10, 0x210
	.globl gUnknown_82C3020
gUnknown_82C3020: @ 0x082C3020
	.incbin "baserom.gba", 0x2c3020, 0x194
	.globl gUnknown_82C31B4
gUnknown_82C31B4: @ 0x082C31B4
	.incbin "baserom.gba", 0x2c31b4, 0x8
	.globl gUnknown_82C31BC
gUnknown_82C31BC: @ 0x082C31BC
	.incbin "baserom.gba", 0x2c31bc, 0x20

	@ src/strings.c:1025 gText_WirelessCommStatus
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C31DC
gText_Rom_2C31DC: @ 0x082C31DC
	.string "ワイヤレス つうしん じょうきょう$"
	.if (. - gText_Rom_2C31DC) != 0x12
	.error "gText_Rom_2C31DC must retain its original byte length"
	.endif
	.globl gText_Rom_2C31EA
	.set gText_Rom_2C31EA, gText_Rom_2C31DC + 0xe
	.incbin "baserom.gba", 0x2c31ee, 0x32
	.globl gUnknown_82C3220
gUnknown_82C3220: @ 0x082C3220

	@ src/strings.c:1030 gText_F700Players
	.globl gText_Rom_2C3220
gText_Rom_2C3220: @ 0x082C3220
	.string "{DYNAMIC 0}にん$"
	.if (. - gText_Rom_2C3220) > 0x5
	.error "gText_Rom_2C3220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C3220) < 0x5
	.space 0x5 - (. - gText_Rom_2C3220)
	.endif
	.incbin "baserom.gba", 0x2c3225, 0x1

	@ src/strings.c:1031 gText_F701Players
	.globl gText_Rom_2C3226
gText_Rom_2C3226: @ 0x082C3226
	.string "{DYNAMIC 1}にん$"
	.if (. - gText_Rom_2C3226) > 0x5
	.error "gText_Rom_2C3226 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C3226) < 0x5
	.space 0x5 - (. - gText_Rom_2C3226)
	.endif
	.incbin "baserom.gba", 0x2c322b, 0x1

	@ src/strings.c:1032 gText_F702Players
	.globl gText_Rom_2C322C
gText_Rom_2C322C: @ 0x082C322C
	.string "{DYNAMIC 2}にん$"
	.if (. - gText_Rom_2C322C) > 0x5
	.error "gText_Rom_2C322C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C322C) < 0x5
	.space 0x5 - (. - gText_Rom_2C322C)
	.endif
	.incbin "baserom.gba", 0x2c3231, 0x1

	@ src/strings.c:1033 gText_F703Players
	.globl gText_Rom_2C3232
gText_Rom_2C3232: @ 0x082C3232
	.string "{DYNAMIC 3}にん$"
	.if (. - gText_Rom_2C3232) > 0x5
	.error "gText_Rom_2C3232 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C3232) < 0x5
	.space 0x5 - (. - gText_Rom_2C3232)
	.endif
	.incbin "baserom.gba", 0x2c3237, 0x1
	.globl gUnknown_82C3238
gUnknown_82C3238: @ 0x082C3238
	.incbin "baserom.gba", 0x2c3238, 0x14
	.globl gUnknown_82C324C
gUnknown_82C324C: @ 0x082C324C
	.incbin "baserom.gba", 0x2c324c, 0x60
	.globl gUnknown_82C32AC
gUnknown_82C32AC: @ 0x082C32AC
	.incbin "baserom.gba", 0x2c32ac, 0x4
	.globl gUnknown_82C32B0
gUnknown_82C32B0: @ 0x082C32B0
	.incbin "baserom.gba", 0x2c32b0, 0x10
	.globl gUnknown_82C32C0
gUnknown_82C32C0: @ 0x082C32C0
	.incbin "baserom.gba", 0x2c32c0, 0x3
	.globl gUnknown_82C32C3
gUnknown_82C32C3: @ 0x082C32C3

	@ src/strings.c:1145 gText_CommStandbyAwaitingOtherPlayer
	.globl gText_Rom_2C32C3
gText_Rom_2C32C3: @ 0x082C32C3
	.string "つうしんたいきちゅう\nあいての せんたくを まっています…$"
	.if (. - gText_Rom_2C32C3) > 0x1e
	.error "gText_Rom_2C32C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C32C3) < 0x1e
	.space 0x1e - (. - gText_Rom_2C32C3)
	.endif
	.globl gUnknown_82C32E1
gUnknown_82C32E1: @ 0x082C32E1

	@ src/strings.c:1146 gText_BattleWasRefused
	.globl gText_Rom_2C32E1
gText_Rom_2C32E1: @ 0x082C32E1
	.string "たいせんを ことわられました{PAUSE 60}$"
	.if (. - gText_Rom_2C32E1) > 0x12
	.error "gText_Rom_2C32E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C32E1) < 0x12
	.space 0x12 - (. - gText_Rom_2C32E1)
	.endif
	.globl gUnknown_82C32F3
gUnknown_82C32F3: @ 0x082C32F3

	@ src/strings.c:1147 gText_RefusedBattle
	.globl gText_Rom_2C32F3
gText_Rom_2C32F3: @ 0x082C32F3
	.string "たいせんを ことわりました{PAUSE 60}$"
	.if (. - gText_Rom_2C32F3) > 0x11
	.error "gText_Rom_2C32F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C32F3) < 0x11
	.space 0x11 - (. - gText_Rom_2C32F3)
	.endif
	.globl gUnknown_82C3304
gUnknown_82C3304: @ 0x082C3304
	.incbin "baserom.gba", 0x2c3304, 0x28
	.globl gUnknown_82C332C
gUnknown_82C332C: @ 0x082C332C
	.incbin "baserom.gba", 0x2c332c, 0xc
	.globl gUnknown_82C3338
gUnknown_82C3338: @ 0x082C3338
	.incbin "baserom.gba", 0x2c3338, 0x4
	.globl gUnknown_82C333C
gUnknown_82C333C: @ 0x082C333C
	.incbin "baserom.gba", 0x2c333c, 0x8
	.globl gUnknown_82C3344
gUnknown_82C3344: @ 0x082C3344
	.incbin "baserom.gba", 0x2c3344, 0x4
	.globl gUnknown_82C3348
gUnknown_82C3348: @ 0x082C3348
	.incbin "baserom.gba", 0x2c3348, 0xee4
	.globl gUnknown_82C422C
gUnknown_82C422C: @ 0x082C422C
	.incbin "baserom.gba", 0x2c422c, 0x8
	.globl gUnknown_82C4234
gUnknown_82C4234: @ 0x082C4234
	.incbin "baserom.gba", 0x2c4234, 0x40
	.globl gUnknown_82C4274
gUnknown_82C4274: @ 0x082C4274
	.incbin "baserom.gba", 0x2c4274, 0x18
	.globl gUnknown_82C428C
gUnknown_82C428C: @ 0x082C428C
	.incbin "baserom.gba", 0x2c428c, 0x80
	.globl gUnknown_82C430C
gUnknown_82C430C: @ 0x082C430C
	.incbin "baserom.gba", 0x2c430c, 0x8
	.globl gUnknown_82C4314
gUnknown_82C4314: @ 0x082C4314
	.incbin "baserom.gba", 0x2c4314, 0x10
	.globl gUnknown_82C4324
gUnknown_82C4324: @ 0x082C4324
	.incbin "baserom.gba", 0x2c4324, 0x6d0
	.globl gUnknown_82C49F4
gUnknown_82C49F4: @ 0x082C49F4
	.incbin "baserom.gba", 0x2c49f4, 0x80
	.globl gUnknown_82C4A74
gUnknown_82C4A74: @ 0x082C4A74
	.incbin "baserom.gba", 0x2c4a74, 0x10
	.globl gUnknown_82C4A84
gUnknown_82C4A84: @ 0x082C4A84
	.incbin "baserom.gba", 0x2c4a84, 0x1c
	.globl gUnknown_82C4AA0
gUnknown_82C4AA0: @ 0x082C4AA0
	.incbin "baserom.gba", 0x2c4aa0, 0x18
	.globl gUnknown_82C4AB8
gUnknown_82C4AB8: @ 0x082C4AB8
	.incbin "baserom.gba", 0x2c4ab8, 0x14
	.globl gUnknown_82C4ACC
gUnknown_82C4ACC: @ 0x082C4ACC
	.incbin "baserom.gba", 0x2c4acc, 0x30
	.globl gUnknown_82C4AFC
gUnknown_82C4AFC: @ 0x082C4AFC
	.incbin "baserom.gba", 0x2c4afc, 0x14
	.globl gUnknown_82C4B10
gUnknown_82C4B10: @ 0x082C4B10
	.incbin "baserom.gba", 0x2c4b10, 0x24
	.globl gUnknown_82C4B34
gUnknown_82C4B34: @ 0x082C4B34
	.incbin "baserom.gba", 0x2c4b34, 0x38
	.globl gUnknown_82C4B6C
gUnknown_82C4B6C: @ 0x082C4B6C
	.incbin "baserom.gba", 0x2c4b6c, 0x3f4
	.globl gUnknown_82C4F60
gUnknown_82C4F60: @ 0x082C4F60
	.incbin "baserom.gba", 0x2c4f60, 0x60
	.globl gUnknown_82C4FC0
gUnknown_82C4FC0: @ 0x082C4FC0
	.incbin "baserom.gba", 0x2c4fc0, 0x90
	.globl gUnknown_82C5050
gUnknown_82C5050: @ 0x082C5050
	.incbin "baserom.gba", 0x2c5050, 0x10
	.globl gUnknown_82C5060
gUnknown_82C5060: @ 0x082C5060
	.incbin "baserom.gba", 0x2c5060, 0x4
	.globl gUnknown_82C5064
gUnknown_82C5064: @ 0x082C5064
	.incbin "baserom.gba", 0x2c5064, 0x28
	.globl gUnknown_82C508C
gUnknown_82C508C: @ 0x082C508C
	.incbin "baserom.gba", 0x2c508c, 0x5
	.globl gUnknown_82C5091
gUnknown_82C5091: @ 0x082C5091
	.incbin "baserom.gba", 0x2c5091, 0xef
	.globl gUnknown_82C5180
gUnknown_82C5180: @ 0x082C5180
	.incbin "baserom.gba", 0x2c5180, 0xa0
	.globl gUnknown_82C5220
gUnknown_82C5220: @ 0x082C5220
	.incbin "baserom.gba", 0x2c5220, 0x20
	.globl gUnknown_82C5240
gUnknown_82C5240: @ 0x082C5240
	.incbin "baserom.gba", 0x2c5240, 0x5c
	.globl gUnknown_82C529C
gUnknown_82C529C: @ 0x082C529C
	.incbin "baserom.gba", 0x2c529c, 0xac
	.globl gUnknown_82C5348
gUnknown_82C5348: @ 0x082C5348
	.incbin "baserom.gba", 0x2c5348, 0x20
	.globl gUnknown_82C5368
gUnknown_82C5368: @ 0x082C5368
	.incbin "baserom.gba", 0x2c5368, 0x20
	.globl gUnknown_82C5388
gUnknown_82C5388: @ 0x082C5388
	.incbin "baserom.gba", 0x2c5388, 0x234
	.globl gUnknown_82C55BC
gUnknown_82C55BC: @ 0x082C55BC
	.incbin "baserom.gba", 0x2c55bc, 0xf8
	.globl gUnknown_82C56B4
gUnknown_82C56B4: @ 0x082C56B4
	.incbin "baserom.gba", 0x2c56b4, 0x20
	.globl gUnknown_82C56D4
gUnknown_82C56D4: @ 0x082C56D4
	.incbin "baserom.gba", 0x2c56d4, 0x20
	.globl gUnknown_82C56F4
gUnknown_82C56F4: @ 0x082C56F4
	.incbin "baserom.gba", 0x2c56f4, 0x10
	.globl gUnknown_82C5704
gUnknown_82C5704: @ 0x082C5704
	.incbin "baserom.gba", 0x2c5704, 0x28
	.globl gUnknown_82C572C
gUnknown_82C572C: @ 0x082C572C
	.incbin "baserom.gba", 0x2c572c, 0xa8
	.globl gUnknown_82C57D4
gUnknown_82C57D4: @ 0x082C57D4
	.incbin "baserom.gba", 0x2c57d4, 0x84
	.globl gUnknown_82C5858
gUnknown_82C5858: @ 0x082C5858
	.incbin "baserom.gba", 0x2c5858, 0x32
	.globl gUnknown_82C588A
gUnknown_82C588A: @ 0x082C588A
	.incbin "baserom.gba", 0x2c588a, 0x4c2
	.globl gUnknown_82C5D4C
gUnknown_82C5D4C: @ 0x082C5D4C
	.incbin "baserom.gba", 0x2c5d4c, 0x28
	.globl gUnknown_82C5D74
gUnknown_82C5D74: @ 0x082C5D74
	.incbin "baserom.gba", 0x2c5d74, 0x40
	.globl gUnknown_82C5DB4
gUnknown_82C5DB4: @ 0x082C5DB4
	.incbin "baserom.gba", 0x2c5db4, 0x20
	.globl gUnknown_82C5DD4
gUnknown_82C5DD4: @ 0x082C5DD4
	.incbin "baserom.gba", 0x2c5dd4, 0x18
	.globl gUnknown_82C5DEC
gUnknown_82C5DEC: @ 0x082C5DEC
	.incbin "baserom.gba", 0x2c5dec, 0x58
	.globl gUnknown_82C5E44
gUnknown_82C5E44: @ 0x082C5E44
	.incbin "baserom.gba", 0x2c5e44, 0x18
	.globl gUnknown_82C5E5C
gUnknown_82C5E5C: @ 0x082C5E5C
	.incbin "baserom.gba", 0x2c5e5c, 0x18
	.globl gUnknown_82C5E74
gUnknown_82C5E74: @ 0x082C5E74
	.incbin "baserom.gba", 0x2c5e74, 0x8
	.globl gUnknown_82C5E7C
gUnknown_82C5E7C: @ 0x082C5E7C
	.incbin "baserom.gba", 0x2c5e7c, 0x8
	.globl gUnknown_82C5E84
gUnknown_82C5E84: @ 0x082C5E84
	.incbin "baserom.gba", 0x2c5e84, 0x24
	.globl gUnknown_82C5EA8
gUnknown_82C5EA8: @ 0x082C5EA8
	.incbin "baserom.gba", 0x2c5ea8, 0x14
	.globl gUnknown_82C5EBC
gUnknown_82C5EBC: @ 0x082C5EBC
	.incbin "baserom.gba", 0x2c5ebc, 0x24
	.globl gUnknown_82C5EE0
gUnknown_82C5EE0: @ 0x082C5EE0
	.incbin "baserom.gba", 0x2c5ee0, 0x4
	.globl gUnknown_82C5EE4
gUnknown_82C5EE4: @ 0x082C5EE4
	.incbin "baserom.gba", 0x2c5ee4, 0xc
	.globl gUnknown_82C5EF0
gUnknown_82C5EF0: @ 0x082C5EF0
	.incbin "baserom.gba", 0x2c5ef0, 0x3
	.globl gUnknown_82C5EF3
gUnknown_82C5EF3: @ 0x082C5EF3
	.incbin "baserom.gba", 0x2c5ef3, 0x3
	.globl gUnknown_82C5EF6
gUnknown_82C5EF6: @ 0x082C5EF6
	.incbin "baserom.gba", 0x2c5ef6, 0x3
	.globl gUnknown_82C5EF9
gUnknown_82C5EF9: @ 0x082C5EF9
	.incbin "baserom.gba", 0x2c5ef9, 0x6
	.globl gUnknown_82C5EFF
gUnknown_82C5EFF: @ 0x082C5EFF
	.incbin "baserom.gba", 0x2c5eff, 0x5
	.globl gUnknown_82C5F04
gUnknown_82C5F04: @ 0x082C5F04
	.incbin "baserom.gba", 0x2c5f04, 0x8
	.globl gUnknown_82C5F0C
gUnknown_82C5F0C: @ 0x082C5F0C
	.incbin "baserom.gba", 0x2c5f0c, 0x50
	.globl gUnknown_82C5F5C
gUnknown_82C5F5C: @ 0x082C5F5C
	.incbin "baserom.gba", 0x2c5f5c, 0x8
	.globl gUnknown_82C5F64
gUnknown_82C5F64: @ 0x082C5F64
	.incbin "baserom.gba", 0x2c5f64, 0x20
	.globl gUnknown_82C5F84
gUnknown_82C5F84: @ 0x082C5F84
	.incbin "baserom.gba", 0x2c5f84, 0x180
	.globl gUnknown_82C6104
gUnknown_82C6104: @ 0x082C6104
	.incbin "baserom.gba", 0x2c6104, 0x13d0
	.globl gUnknown_82C74D4
gUnknown_82C74D4: @ 0x082C74D4
	.incbin "baserom.gba", 0x2c74d4, 0x130
	.globl gUnknown_82C7604
gUnknown_82C7604: @ 0x082C7604
	.incbin "baserom.gba", 0x2c7604, 0x198
	.globl gUnknown_82C779C
gUnknown_82C779C: @ 0x082C779C
	.incbin "baserom.gba", 0x2c779c, 0x228
	.globl gUnknown_82C79C4
gUnknown_82C79C4: @ 0x082C79C4
	.incbin "baserom.gba", 0x2c79c4, 0x44
	.globl gUnknown_82C7A08
gUnknown_82C7A08: @ 0x082C7A08
	.incbin "baserom.gba", 0x2c7a08, 0x14
	.globl gUnknown_82C7A1C
gUnknown_82C7A1C: @ 0x082C7A1C
	.incbin "baserom.gba", 0x2c7a1c, 0x3c
	.globl gUnknown_82C7A58
gUnknown_82C7A58: @ 0x082C7A58
	.incbin "baserom.gba", 0x2c7a58, 0x1
	.globl gUnknown_82C7A59
gUnknown_82C7A59: @ 0x082C7A59
	.incbin "baserom.gba", 0x2c7a59, 0x5
	.globl gUnknown_82C7A5E
gUnknown_82C7A5E: @ 0x082C7A5E
	.incbin "baserom.gba", 0x2c7a5e, 0x1
	.globl gUnknown_82C7A5F
gUnknown_82C7A5F: @ 0x082C7A5F
	.incbin "baserom.gba", 0x2c7a5f, 0x15
	.globl gUnknown_82C7A74
gUnknown_82C7A74: @ 0x082C7A74
	.incbin "baserom.gba", 0x2c7a74, 0xc
	.globl gUnknown_82C7A80
gUnknown_82C7A80: @ 0x082C7A80
	.incbin "baserom.gba", 0x2c7a80, 0x28
	.globl gUnknown_82C7AA8
gUnknown_82C7AA8: @ 0x082C7AA8
	.incbin "baserom.gba", 0x2c7aa8, 0xf0
	.globl gUnknown_82C7B98
gUnknown_82C7B98: @ 0x082C7B98
	.incbin "baserom.gba", 0x2c7b98, 0x18
	.globl gUnknown_82C7BB0
gUnknown_82C7BB0: @ 0x082C7BB0
	.incbin "baserom.gba", 0x2c7bb0, 0x18
	.globl gUnknown_82C7BC8
gUnknown_82C7BC8: @ 0x082C7BC8
	.incbin "baserom.gba", 0x2c7bc8, 0x18
	.globl gUnknown_82C7BE0
gUnknown_82C7BE0: @ 0x082C7BE0
	.incbin "baserom.gba", 0x2c7be0, 0x18
	.globl gUnknown_82C7BF8
gUnknown_82C7BF8: @ 0x082C7BF8
	.incbin "baserom.gba", 0x2c7bf8, 0x18
	.globl gUnknown_82C7C10
gUnknown_82C7C10: @ 0x082C7C10
	.incbin "baserom.gba", 0x2c7c10, 0x30
	.globl gUnknown_82C7C40
gUnknown_82C7C40: @ 0x082C7C40
	.incbin "baserom.gba", 0x2c7c40, 0x18
	.globl gUnknown_82C7C58
gUnknown_82C7C58: @ 0x082C7C58
	.incbin "baserom.gba", 0x2c7c58, 0x68
	.globl gUnknown_82C7CC0
gUnknown_82C7CC0: @ 0x082C7CC0
	.incbin "baserom.gba", 0x2c7cc0, 0x10
	.globl gUnknown_82C7CD0
gUnknown_82C7CD0: @ 0x082C7CD0
	.incbin "baserom.gba", 0x2c7cd0, 0x4
	.globl gUnknown_82C7CD4
gUnknown_82C7CD4: @ 0x082C7CD4
	.incbin "baserom.gba", 0x2c7cd4, 0x54
	.globl gUnknown_82C7D28
gUnknown_82C7D28: @ 0x082C7D28
	.incbin "baserom.gba", 0x2c7d28, 0x113
	.globl gUnknown_82C7E3B
gUnknown_82C7E3B: @ 0x082C7E3B
	.incbin "baserom.gba", 0x2c7e3b, 0x4b
	.globl gUnknown_82C7E86
gUnknown_82C7E86: @ 0x082C7E86
	.incbin "baserom.gba", 0x2c7e86, 0x4e
	.globl gUnknown_82C7ED4
gUnknown_82C7ED4: @ 0x082C7ED4
	.incbin "baserom.gba", 0x2c7ed4, 0x37
	.globl gUnknown_82C7F0B
gUnknown_82C7F0B: @ 0x082C7F0B
	.incbin "baserom.gba", 0x2c7f0b, 0x3409
	.globl gUnknown_82CB314
gUnknown_82CB314: @ 0x082CB314
	.incbin "baserom.gba", 0x2cb314, 0xc
	.globl gUnknown_82CB320
gUnknown_82CB320: @ 0x082CB320
	.incbin "baserom.gba", 0x2cb320, 0x8
	.globl gUnknown_82CB328
gUnknown_82CB328: @ 0x082CB328
	.incbin "baserom.gba", 0x2cb328, 0x8
	.globl gUnknown_82CB330
gUnknown_82CB330: @ 0x082CB330
	.incbin "baserom.gba", 0x2cb330, 0x20
	.globl gUnknown_82CB350
gUnknown_82CB350: @ 0x082CB350
	.incbin "baserom.gba", 0x2cb350, 0x30
	.globl gUnknown_82CB380
gUnknown_82CB380: @ 0x082CB380
	.incbin "baserom.gba", 0x2cb380, 0x30
	.globl gUnknown_82CB3B0
gUnknown_82CB3B0: @ 0x082CB3B0
	.incbin "baserom.gba", 0x2cb3b0, 0x8
	.globl gUnknown_82CB3B8
gUnknown_82CB3B8: @ 0x082CB3B8
	.incbin "baserom.gba", 0x2cb3b8, 0x8
	.globl gUnknown_82CB3C0
gUnknown_82CB3C0: @ 0x082CB3C0
	.incbin "baserom.gba", 0x2cb3c0, 0xc
	.globl gUnknown_82CB3CC
gUnknown_82CB3CC: @ 0x082CB3CC
	.incbin "baserom.gba", 0x2cb3cc, 0x4
	.globl gUnknown_82CB3D0
gUnknown_82CB3D0: @ 0x082CB3D0
	.incbin "baserom.gba", 0x2cb3d0, 0x6
	.globl gUnknown_82CB3D6
gUnknown_82CB3D6: @ 0x082CB3D6
	.incbin "baserom.gba", 0x2cb3d6, 0x6
	.globl gUnknown_82CB3DC
gUnknown_82CB3DC: @ 0x082CB3DC
	.incbin "baserom.gba", 0x2cb3dc, 0x28

