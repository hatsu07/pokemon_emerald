	@ src/battle_message.c:1547 battle_message_line_1547
	.globl gText_Rom_5ABFC7
gText_Rom_5ABFC7: @ 0x085ABFC7
	.string "しんぱん『はんてい 3 たい 3\nひきわけーーー!\p$"
	.if (. - gText_Rom_5ABFC7) > 0x1b
	.error "gText_Rom_5ABFC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABFC7) < 0x1b
	.space 0x1b - (. - gText_Rom_5ABFC7)
	.endif
