	@ field-script:0x211AFE FieldScriptText_211BA1
	.globl gText_Rom_211BA1
gText_Rom_211BA1: @ 0x08211BA1
	.string "きみほど　ポケモンを　じょうずに\nつかいこなす　トレーナーは　はじめてだ！\pだが　きみよりも\nわたしの　むすこの　ほうが　つよいぞ！\pなんたって　ポケモン　リーグへ\nちょうせんに　いった　ぐらい　だからな！$"
	.if (. - gText_Rom_211BA1) > 0x68
	.error "gText_Rom_211BA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211BA1) < 0x68
	.space 0x68 - (. - gText_Rom_211BA1)
	.endif
