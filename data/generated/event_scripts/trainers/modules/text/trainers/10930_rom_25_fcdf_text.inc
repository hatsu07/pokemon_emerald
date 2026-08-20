	@ data/text/trainers.inc:2480 Route123_Text_YukiDefeat (+1 aliases)
	.globl gText_Rom_25FCDF
gText_Rom_25FCDF: @ 0x0825FCDF
	.string "ユキ『まけちゃったね……{EOS}"
	.if (. - gText_Rom_25FCDF) > 0xd
	.error "gText_Rom_25FCDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FCDF) < 0xd
	.space 0xd - (. - gText_Rom_25FCDF)
	.endif
