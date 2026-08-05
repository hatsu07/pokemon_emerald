	@ src/data/easy_chat/easy_chat_group_endings.h:124 easy_chat_group_endings_line_124
	.globl gText_Rom_5763ED
gText_Rom_5763ED: @ 0x085763ED
	.string "だった$"
	.if (. - gText_Rom_5763ED) > 0x4
	.error "gText_Rom_5763ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763ED) < 0x4
	.space 0x4 - (. - gText_Rom_5763ED)
	.endif
	@ Decoded text from ROM range: offset=0x5763F1, size=0x6
	.string "だね$"
	.string "だよ$"
