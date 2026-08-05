	@ src/battle_message.c:1540 battle_message_line_1540
	.globl gText_Rom_5ABEBC
gText_Rom_5ABEBC: @ 0x085ABEBC
	.string "しんぱん『あと 3ターンで けっちゃくが\nつかないと はんていに なります!$"
	.if (. - gText_Rom_5ABEBC) > 0x27
	.error "gText_Rom_5ABEBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABEBC) < 0x27
	.space 0x27 - (. - gText_Rom_5ABEBC)
	.endif
