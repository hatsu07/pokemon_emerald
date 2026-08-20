	@ data/text/trainers.inc:2645 Route124_Text_LilaPostBattle
	.globl gText_Rom_2603D6
gText_Rom_2603D6: @ 0x082603D6
	.string "カコ『はーあ\pとなりに いるのが おとうと じゃなくて\nすてきな かれし だったら いいのに……{EOS}"
	.if (. - gText_Rom_2603D6) > 0x31
	.error "gText_Rom_2603D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2603D6) < 0x31
	.space 0x31 - (. - gText_Rom_2603D6)
	.endif
