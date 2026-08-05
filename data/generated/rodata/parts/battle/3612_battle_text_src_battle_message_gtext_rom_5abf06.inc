	@ src/battle_message.c:1542 battle_message_line_1542
	.globl gText_Rom_5ABF06
gText_Rom_5ABF06: @ 0x085ABF06
	.string "しんぱん『はんてい その1! 「こころ」!\nせめる きもちを みせたもの!\p$"
	.if (. - gText_Rom_5ABF06) > 0x27
	.error "gText_Rom_5ABF06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABF06) < 0x27
	.space 0x27 - (. - gText_Rom_5ABF06)
	.endif
