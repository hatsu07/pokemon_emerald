	@ data/text/trainers.inc:3422 Route134_Text_HudsonDefeat (+1 aliases)
	.globl gText_Rom_262358
gText_Rom_262358: @ 0x08262358
	.string "おー すごいな$"
	.if (. - gText_Rom_262358) > 0x8
	.error "gText_Rom_262358 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262358) < 0x8
	.space 0x8 - (. - gText_Rom_262358)
	.endif
