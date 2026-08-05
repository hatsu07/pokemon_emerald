	@ src/battle_message.c:1541 battle_message_line_1541
	.globl gText_Rom_5ABEE3
gText_Rom_5ABEE3: @ 0x085ABEE3
	.string "しんぱん『そこまでーーー!\nこの たいけつは はんていに なります!$"
	.if (. - gText_Rom_5ABEE3) > 0x23
	.error "gText_Rom_5ABEE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABEE3) < 0x23
	.space 0x23 - (. - gText_Rom_5ABEE3)
	.endif
