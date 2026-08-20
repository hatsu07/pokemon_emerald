	@ data/text/trainers.inc:797 Route110_Text_EdwardIntro (+1 aliases)
	.globl gText_Rom_25B63E
gText_Rom_25B63E: @ 0x0825B63E
	.string "おまえの さくせんは すべて みえた!\nわたしが まけるはず ない!{EOS}"
	.if (. - gText_Rom_25B63E) > 0x23
	.error "gText_Rom_25B63E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B63E) < 0x23
	.space 0x23 - (. - gText_Rom_25B63E)
	.endif
