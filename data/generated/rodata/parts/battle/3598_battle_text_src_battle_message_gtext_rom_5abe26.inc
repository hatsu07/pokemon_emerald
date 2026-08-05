	@ src/battle_message.c:109 sText_GoPkmn
	.globl gText_Rom_5ABE26
gText_Rom_5ABE26: @ 0x085ABE26
	.string "ゆけっ！ {B_PLAYER_MON1_NAME}！$"
	.if (. - gText_Rom_5ABE26) > 0x9
	.error "gText_Rom_5ABE26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE26) < 0x9
	.space 0x9 - (. - gText_Rom_5ABE26)
	.endif
