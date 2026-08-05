	@ src/battle_message.c:208 battle_message_line_208
	.globl gText_Rom_5A97B2
gText_Rom_5A97B2: @ 0x085A97B2
	.string "{B_PLAYER_NAME}は しょうきんとして\n{B_BUFF1}円 てにいれた！\p$"
	.if (. - gText_Rom_5A97B2) > 0x19
	.error "gText_Rom_5A97B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A97B2) < 0x19
	.space 0x19 - (. - gText_Rom_5A97B2)
	.endif
