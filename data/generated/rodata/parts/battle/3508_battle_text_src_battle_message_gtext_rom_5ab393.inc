	@ src/battle_message.c:460 battle_message_line_460
	.globl gText_Rom_5AB393
gText_Rom_5AB393: @ 0x085AB393
	.string "{B_LAST_ITEM}の こうかで\n{B_CURRENT_MOVE}しか だすことができない!\p$"
	.if (. - gText_Rom_5AB393) > 0x1a
	.error "gText_Rom_5AB393 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB393) < 0x1a
	.space 0x1a - (. - gText_Rom_5AB393)
	.endif
