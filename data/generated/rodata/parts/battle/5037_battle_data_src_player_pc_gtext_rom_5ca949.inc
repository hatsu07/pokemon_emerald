	@ src/player_pc.c:177 sText_WithdrawXItems
	.globl gText_Rom_5CA949
gText_Rom_5CA949: @ 0x085CA949
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ ひきだしました$"
	.if (. - gText_Rom_5CA949) > 0x10
	.error "gText_Rom_5CA949 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA949) < 0x10
	.space 0x10 - (. - gText_Rom_5CA949)
	.endif
