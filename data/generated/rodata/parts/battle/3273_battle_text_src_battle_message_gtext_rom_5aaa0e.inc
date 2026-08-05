	@ src/battle_message.c:84 sText_PlayerBattledToDrawLinkTrainer
	.globl gText_Rom_5AAA0E
gText_Rom_5AAA0E: @ 0x085AAA0E
	.string "{B_LINK_OPPONENT1_NAME}との\nしょうぶに ひきわけた！$"
	.if (. - gText_Rom_5AAA0E) > 0x12
	.error "gText_Rom_5AAA0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA0E) < 0x12
	.space 0x12 - (. - gText_Rom_5AAA0E)
	.endif
