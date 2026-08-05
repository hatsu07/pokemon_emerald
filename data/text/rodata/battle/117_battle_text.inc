	@ src/battle_message.c:197 battle_message_line_197
	.globl gText_Rom_5A966F
gText_Rom_5A966F: @ 0x085A966F
	.string "{B_BUFF1}は あたらしく\n{B_BUFF2}を　おぼえたい………!\p$"
	.if (. - gText_Rom_5A966F) > 0x19
	.error "gText_Rom_5A966F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A966F) < 0x19
	.space 0x19 - (. - gText_Rom_5A966F)
	.endif

	@ src/battle_message.c:198 battle_message_line_198
	.globl gText_Rom_5A9688
gText_Rom_5A9688: @ 0x085A9688
	.string "しかし {B_BUFF1}は わざを 4つ\nおぼえるので せいいっぱいだ!\p$"
	.if (. - gText_Rom_5A9688) > 0x20
	.error "gText_Rom_5A9688 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9688) < 0x20
	.space 0x20 - (. - gText_Rom_5A9688)
	.endif

	@ src/battle_message.c:199 battle_message_line_199
	.globl gText_Rom_5A96A8
gText_Rom_5A96A8: @ 0x085A96A8
	.string "{B_BUFF2}の かわりに\nほかの わざを わすれさせますか?$"
	.if (. - gText_Rom_5A96A8) > 0x1b
	.error "gText_Rom_5A96A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96A8) < 0x1b
	.space 0x1b - (. - gText_Rom_5A96A8)
	.endif

	@ src/battle_message.c:200 battle_message_line_200
	.globl gText_Rom_5A96C3
gText_Rom_5A96C3: @ 0x085A96C3
	.string "{B_BUFF1}は {B_BUFF2}の\nつかいかたを きれいに わすれた!\p$"
	.if (. - gText_Rom_5A96C3) > 0x1b
	.error "gText_Rom_5A96C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96C3) < 0x1b
	.space 0x1b - (. - gText_Rom_5A96C3)
	.endif
	@ Replaced baserom.gba range: offset=0x5A96DE, size=0x15
	.byte 0xFC, 0x08, 0x20, 0x0F, 0x2A, 0x44, 0x1A, 0xB0, 0xB0, 0x00, 0xFD, 0x01, 0x2D, 0xFE, 0x05, 0x4A
	.byte 0x04, 0x29, 0x19, 0x2D, 0x00

	@ src/strings.c:618 gText_ChallengeQuestionMark
	.globl gText_Rom_5A96F3
gText_Rom_5A96F3: @ 0x085A96F3
	.string "あきらめますか?$"
	.if (. - gText_Rom_5A96F3) > 0x9
	.error "gText_Rom_5A96F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96F3) < 0x9
	.space 0x9 - (. - gText_Rom_5A96F3)
	.endif

	@ src/battle_message.c:202 battle_message_line_202
	.globl gText_Rom_5A96FC
gText_Rom_5A96FC: @ 0x085A96FC
	.string "{B_BUFF1}は {B_BUFF2}を\nおぼえずに おわった!\p$"
	.if (. - gText_Rom_5A96FC) > 0x15
	.error "gText_Rom_5A96FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96FC) < 0x15
	.space 0x15 - (. - gText_Rom_5A96FC)
	.endif

	@ src/battle_message.c:491 battle_message_line_491
	.globl gText_Rom_5A9711
gText_Rom_5A9711: @ 0x085A9711
	.string "つぎの ポケモンを つかいますか?$"
	.if (. - gText_Rom_5A9711) > 0x12
	.error "gText_Rom_5A9711 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9711) < 0x12
	.space 0x12 - (. - gText_Rom_5A9711)
	.endif
	@ Replaced baserom.gba range: offset=0x5A9723, size=0x60
	.byte 0x0C, 0x06, 0x0C, 0x00, 0xFD, 0x0F, 0x19, 0xFE, 0x0A, 0x03, 0x3A, 0x07, 0x1A, 0x00, 0x1A, 0x3E
	.byte 0x2A, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0x0A, 0x03, 0x3A, 0x07, 0x06, 0x27, 0xFE, 0x20
	.byte 0x2D, 0x00, 0x1F, 0x23, 0x50, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x19, 0x44, 0xFE
	.byte 0x91, 0x72, 0xAE, 0x8D, 0x2D, 0x00, 0x03, 0x09, 0x15, 0x02, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00
	.byte 0xFD, 0x19, 0x44, 0xFE, 0x3D, 0x22, 0x2E, 0x60, 0x52, 0x9D, 0x19, 0x00, 0x2C, 0x3C, 0x37, 0x00
	.byte 0x01, 0x10, 0x27, 0x15, 0x02, 0xAB, 0xFF, 0xFD, 0x10, 0x16, 0x1A, 0xFE, 0x01, 0x10, 0x27, 0x15

