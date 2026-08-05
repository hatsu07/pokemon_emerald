	@ src/battle_message.c:395 battle_message_line_395
	.globl gText_Rom_5AAAEA
gText_Rom_5AAAEA: @ 0x085AAAEA
	.string "あめが ふりはじめた!$"
	.if (. - gText_Rom_5AAAEA) > 0xc
	.error "gText_Rom_5AAAEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAAEA) < 0xc
	.space 0xc - (. - gText_Rom_5AAAEA)
	.endif
