	@ src/battle_message.c:503 battle_message_line_503
	.globl gText_Rom_5AA501
gText_Rom_5AA501: @ 0x085AA501
	.string "かべが こわれた!$"
	.if (. - gText_Rom_5AA501) > 0xa
	.error "gText_Rom_5AA501 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA501) < 0xa
	.space 0xa - (. - gText_Rom_5AA501)
	.endif
