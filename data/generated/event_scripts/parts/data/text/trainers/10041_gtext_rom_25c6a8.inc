	@ data/text/trainers.inc:1178 Route113_Text_MadelineDefeat (+1 aliases)
	.globl gText_Rom_25C6A8
gText_Rom_25C6A8: @ 0x0825C6A8
	.string "はあ はあ……\nつかれましたわ……$"
	.if (. - gText_Rom_25C6A8) > 0x12
	.error "gText_Rom_25C6A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C6A8) < 0x12
	.space 0x12 - (. - gText_Rom_25C6A8)
	.endif
