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
