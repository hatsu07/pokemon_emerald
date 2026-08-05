	@ src/data/easy_chat/easy_chat_group_people.h:4 easy_chat_group_people_line_4 (+1 aliases)
	.globl gText_Rom_5CAD1A
gText_Rom_5CAD1A: @ 0x085CAD1A
	.string "あいて$"
	.if (. - gText_Rom_5CAD1A) > 0x4
	.error "gText_Rom_5CAD1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD1A) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD1A)
	.endif
	@ Decoded text from ROM range: offset=0x5CAD1E, size=0x15
	.string "トーナメントひょう$"
	.string "じゅんび　かんりょう$"
