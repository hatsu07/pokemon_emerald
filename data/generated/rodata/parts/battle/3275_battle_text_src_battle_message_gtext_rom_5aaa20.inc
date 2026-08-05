	@ src/battle_message.c:85 sText_PlayerBattledToDrawVsTwo
	.globl gText_Rom_5AAA20
gText_Rom_5AAA20: @ 0x085AAA20
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに ひきわけた！$"
	.if (. - gText_Rom_5AAA20) > 0x16
	.error "gText_Rom_5AAA20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA20) < 0x16
	.space 0x16 - (. - gText_Rom_5AAA20)
	.endif
