	@ data/text/trainers.inc:91 Route103_Text_AmyRematchDefeated (+1 aliases)
	.globl gText_Rom_259950
gText_Rom_259950: @ 0x08259950
	.string "クミ『くやしい……\nまた かてなかったよぉ……"
	.byte EOS
	.if (. - gText_Rom_259950) > 0x18
	.error "gText_Rom_259950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259950) < 0x18
	.space 0x18 - (. - gText_Rom_259950)
	.endif
