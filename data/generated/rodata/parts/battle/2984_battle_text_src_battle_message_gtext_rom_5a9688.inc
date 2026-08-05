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
