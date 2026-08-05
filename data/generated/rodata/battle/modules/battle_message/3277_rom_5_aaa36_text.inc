	@ src/battle_message.c:86 sText_WildFled
	.globl gText_Rom_5AAA36
gText_Rom_5AAA36: @ 0x085AAA36
	.string "{PLAY_SE SE_FLEE}{B_LINK_OPPONENT1_NAME}は にげだした！$"
	.if (. - gText_Rom_5AAA36) > 0xf
	.error "gText_Rom_5AAA36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA36) < 0xf
	.space 0xf - (. - gText_Rom_5AAA36)
	.endif
