	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_5CAFAF
gText_Rom_5CAFAF: @ 0x085CAFAF
	.string "トレーナー$"
	.if (. - gText_Rom_5CAFAF) > 0x6
	.error "gText_Rom_5CAFAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAFAF) < 0x6
	.space 0x6 - (. - gText_Rom_5CAFAF)
	.endif
	@ Decoded text from ROM range: offset=0x5CAFB5, size=0xB
	.string "ピラミッドの　めいろ$"

