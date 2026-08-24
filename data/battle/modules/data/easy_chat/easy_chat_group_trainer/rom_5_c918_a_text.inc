	@ src/data/easy_chat/easy_chat_group_trainer.h:142 easy_chat_group_trainer_line_142 (+1 aliases)
	.globl gText_Rom_5C918A
gText_Rom_5C918A: @ 0x085C918A
	.string "みどり{EOS}"
	.if (. - gText_Rom_5C918A) > 0x4
	.error "gText_Rom_5C918A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C918A) < 0x4
	.space 0x4 - (. - gText_Rom_5C918A)
	.endif
	@ Decoded text from ROM range: offset=0x5C918E, size=0x3
	.string "くろ{EOS}"
