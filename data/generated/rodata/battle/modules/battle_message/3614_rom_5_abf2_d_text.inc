	@ src/battle_message.c:1543 battle_message_line_1543
	.globl gText_Rom_5ABF2D
gText_Rom_5ABF2D: @ 0x085ABF2D
	.string "しんぱん『はんてい その2! 「わざ」!\nてきかくに わざを くりだしたもの!\p$"
	.if (. - gText_Rom_5ABF2D) > 0x29
	.error "gText_Rom_5ABF2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABF2D) < 0x29
	.space 0x29 - (. - gText_Rom_5ABF2D)
	.endif
