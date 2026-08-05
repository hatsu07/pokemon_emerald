	@ src/player_pc.c:176 sText_WithdrawHowManyItems
	.globl gText_Rom_5CA938
gText_Rom_5CA938: @ 0x085CA938
	.string "{STR_VAR_1}を\nいくつ ひきだしますか?$"
	.if (. - gText_Rom_5CA938) > 0x11
	.error "gText_Rom_5CA938 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA938) < 0x11
	.space 0x11 - (. - gText_Rom_5CA938)
	.endif
