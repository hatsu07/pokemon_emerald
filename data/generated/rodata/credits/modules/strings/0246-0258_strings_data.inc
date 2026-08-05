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
	.space 0x2, 0x00
	.globl gUnknown_82C29D8
gUnknown_82C29D8: @ 0x082C29D8
	@ Replaced baserom.gba range: offset=0x2C29D8, size=0x14
	.byte 0xFD, 0x02, 0x16, 0x00, 0x66, 0x85, 0xAE, 0x5D, 0x00, 0x2D, 0xFE, 0x05, 0x08, 0x28, 0x00, 0x1F
	.byte 0x0C, 0x10, 0xAB, 0xFF
	.globl gUnknown_82C29EC
gUnknown_82C29EC: @ 0x082C29EC
	@ Replaced baserom.gba range: offset=0x2C29EC, size=0x14
	.byte 0xFD, 0x02, 0x16, 0x00, 0x5D, 0x60, 0x7E, 0x9D, 0x00, 0x2D, 0xFE, 0x05, 0x08, 0x28, 0x00, 0x1F
	.byte 0x0C, 0x10, 0xAB, 0xFF
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
