	@ data/text/trainers.inc:2567 Route123_Text_JonasDefeat (+1 aliases)
	.globl gText_Rom_260050
gText_Rom_260050: @ 0x08260050
	.string "まけて くれなきゃ\nニンジャごっこ できないよ$"
	.if (. - gText_Rom_260050) > 0x18
	.error "gText_Rom_260050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260050) < 0x18
	.space 0x18 - (. - gText_Rom_260050)
	.endif
