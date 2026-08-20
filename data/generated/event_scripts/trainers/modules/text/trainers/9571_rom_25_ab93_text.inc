	@ data/text/trainers.inc:509 Route108_Text_JeromeDefeated (+1 aliases)
	.globl gText_Rom_25AB93
gText_Rom_25AB93: @ 0x0825AB93
	.string "これじゃ\n7つのうみ すべてで およげない……{EOS}"
	.if (. - gText_Rom_25AB93) > 0x18
	.error "gText_Rom_25AB93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AB93) < 0x18
	.space 0x18 - (. - gText_Rom_25AB93)
	.endif
