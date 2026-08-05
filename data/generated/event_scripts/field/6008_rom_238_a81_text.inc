	@ field-script:0x238905 FieldScriptText_238A81
	.globl gText_Rom_238A81
gText_Rom_238A81: @ 0x08238A81
	.string "いや　こんな　むかしばなしを\nしていても　はじまらないな！\pとにかく　こころ　ゆくまで\nポケモンしょうぶを　たのしんで　くれ！\pこれは　わたしと　{0xFD}{0x01}{0xFD}{0x05}が\nなんども　たびさきで　であった\lきねんだよ！"
	.byte EOS
	.if (. - gText_Rom_238A81) > 0x66
	.error "gText_Rom_238A81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238A81) < 0x66
	.space 0x66 - (. - gText_Rom_238A81)
	.endif
