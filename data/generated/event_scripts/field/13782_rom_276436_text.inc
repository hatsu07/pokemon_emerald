	@ field-script:0x276AAF FieldScriptText_276436
	.globl gText_Rom_276436
gText_Rom_276436: @ 0x08276436
	.string "ふう\nこうやって　おくじょうから\lひろい　せかいを　みていると……\pなんにんもの　じぶんが　いて\nいくつもの　じんせいを　たのしめたらなー\lって　おもうの！\lムリな　はなしだけどね　うふふ\pそうだわ　あなたの　ポケモンちゃん！\nみがわりの　わざ　おぼえてみない？{EOS}"
	.if (. - gText_Rom_276436) > 0x84
	.error "gText_Rom_276436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276436) < 0x84
	.space 0x84 - (. - gText_Rom_276436)
	.endif
