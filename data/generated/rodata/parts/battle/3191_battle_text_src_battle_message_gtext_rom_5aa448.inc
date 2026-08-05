	@ src/battle_message.c:470 battle_message_line_470
	.globl gText_Rom_5AA448
gText_Rom_5AA448: @ 0x085AA448
	.string "でんきの いりょくが よわまった!$"
	.if (. - gText_Rom_5AA448) > 0x12
	.error "gText_Rom_5AA448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA448) < 0x12
	.space 0x12 - (. - gText_Rom_5AA448)
	.endif
