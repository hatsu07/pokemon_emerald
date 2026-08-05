	@ field-script:0x21E567 FieldScriptText_21E67E
	.globl gText_Rom_21E67E
gText_Rom_21E67E: @ 0x0821E67E
	.string "にんげん　だけが　ともだち　じゃない\nわたしに　とっては　ポケモンが\lたいせつな　ともだち　なんだよ！"
	.byte EOS
	.if (. - gText_Rom_21E67E) > 0x34
	.error "gText_Rom_21E67E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E67E) < 0x34
	.space 0x34 - (. - gText_Rom_21E67E)
	.endif
