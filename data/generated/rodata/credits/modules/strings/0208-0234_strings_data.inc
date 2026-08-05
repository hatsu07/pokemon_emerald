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
	.space 0x2, 0x00
	.globl gUnknown_82C2820
gUnknown_82C2820: @ 0x082C2820
	@ Replaced baserom.gba range: offset=0x2C2820, size=0x17
	.byte 0xFD, 0x02, 0x06, 0x27, 0x00, 0x66, 0x85, 0xAE, 0x5D, 0x37, 0xFE, 0x05, 0x08, 0x27, 0x2A, 0x13
	.byte 0x00, 0x07, 0x1F, 0x0C, 0x10, 0xAB, 0xFF

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
	@ Replaced baserom.gba range: offset=0x2C286C, size=0x18
	.byte 0x01, 0x10, 0x27, 0x0C, 0x02, 0x00, 0x5D, 0x60, 0x7E, 0x9D, 0x37, 0xFE, 0x05, 0x08, 0x27, 0x2A
	.byte 0x13, 0x00, 0x07, 0x1F, 0x0C, 0x10, 0xAB, 0xFF
	.globl gUnknown_82C2884
gUnknown_82C2884: @ 0x082C2884
	@ Replaced baserom.gba range: offset=0x2C2884, size=0x1C
	.byte 0x01, 0x10, 0x27, 0x0C, 0x02, 0x00, 0x64, 0x7A, 0xAE, 0x65, 0xAE, 0x37, 0xFE, 0x05, 0x08, 0x27
	.byte 0x2A, 0x13, 0x00, 0x07, 0x1F, 0x0C, 0x10, 0xAB, 0xFF, 0x00, 0x00, 0x00
	.globl gUnknown_82C28A0
gUnknown_82C28A0: @ 0x082C28A0
	@ Replaced baserom.gba range: offset=0x2C28A0, size=0x18
	.byte 0x05, 0x15, 0x3D, 0x00, 0x1C, 0x0C, 0x38, 0x15, 0x56, 0xAE, 0x95, 0x2D, 0xFE, 0x0D, 0x44, 0x16
	.byte 0x00, 0x23, 0x50, 0x13, 0x02, 0x1F, 0x0D, 0xFF
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
	.space 0x3, 0x00
	.globl gUnknown_82C2944
gUnknown_82C2944: @ 0x082C2944
	@ Replaced baserom.gba range: offset=0x2C2944, size=0x1A
	.byte 0x0A, 0x19, 0x00, 0x01, 0x02, 0x13, 0x00, 0x06, 0x27, 0x1A, 0x00, 0x66, 0x85, 0xAE, 0x5D, 0x2D
	.byte 0xFE, 0x03, 0x09, 0x14, 0x2A, 0x1F, 0x0E, 0x2E, 0xAB, 0xFF

	@ src/strings.c:1078 gText_NothingSentOver
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_2C295E
gText_Rom_2C295E: @ 0x082C295E
	.string "  なにも おくられて\nきません でした$"
	.if (. - gText_Rom_2C295E) != 0x15
	.error "gText_Rom_2C295E must retain its original byte length"
	.endif
