	@ field-script:0x21EA1F FieldScriptText_26295B
	.globl gText_Rom_26295B
gText_Rom_26295B: @ 0x0826295B
	.string "ここで　めずらしい　ポケモンを\nたくさん　つかまえて\lともだちと　こうかん　するんだ！{EOS}"
	.if (. - gText_Rom_26295B) > 0x2c
	.error "gText_Rom_26295B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26295B) < 0x2c
	.space 0x2c - (. - gText_Rom_26295B)
	.endif
