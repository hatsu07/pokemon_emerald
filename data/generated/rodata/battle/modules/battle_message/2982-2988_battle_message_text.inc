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
	@ analyzed canonical ROM range 0x085A96DE-0x085A96F2
sAnalyzedData_085A96DE: @ 0x085A96DE
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFC, 0x08, 0x20, 0x0F, 0x2A, 0x44, 0x1A, 0xB0, 0xB0, 0x00, 0xFD, 0x01, 0x2D, 0xFE, 0x05, 0x4A
	.byte 0x04, 0x29, 0x19, 0x2D, 0x00
