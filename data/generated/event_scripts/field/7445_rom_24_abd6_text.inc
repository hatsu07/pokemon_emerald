	@ field-script:0x2490C7 FieldScriptText_24ABD6
	.globl gText_Rom_24ABD6
gText_Rom_24ABD6: @ 0x0824ABD6
	.string "しかい『さあ\nポケモンの　しょうかいが　おわりました\l1じ　しんさに　はいりましょう！{EOS}"
	.if (. - gText_Rom_24ABD6) > 0x2c
	.error "gText_Rom_24ABD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ABD6) < 0x2c
	.space 0x2c - (. - gText_Rom_24ABD6)
	.endif
