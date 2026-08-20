	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CAFD6
gText_Rom_5CAFD6: @ 0x085CAFD6
	.string "どうぐ{EOS}"
	.if (. - gText_Rom_5CAFD6) > 0x4
	.error "gText_Rom_5CAFD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAFD6) < 0x4
	.space 0x4 - (. - gText_Rom_5CAFD6)
	.endif
	@ Decoded text from ROM range: offset=0x5CAFDA, size=0xC
	.string "ポケモンの　じゅんばん{EOS}"
