	@ data/text/tv.inc:1144 GabbyAndTy_Text_GabbyDefeatFirstTime (+1 aliases)
	.globl gText_Rom_252F11
gText_Rom_252F11: @ 0x08252F11
	.string "マリ『わたしの めに くるいはないわ\nすごい トレーナーの はっけんよ!"
	.byte EOS
	.if (. - gText_Rom_252F11) > 0x25
	.error "gText_Rom_252F11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252F11) < 0x25
	.space 0x25 - (. - gText_Rom_252F11)
	.endif
