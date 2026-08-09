	@ field-script:0x249ADF FieldScriptText_24A483
	.globl gText_Rom_24A483
gText_Rom_24A483: @ 0x0824A483
	.string "それでは　しょうひんは　あとで\nうけつけで　おうけとり　ください！\lまたの　さんかを　おまち　してます！$"
	.if (. - gText_Rom_24A483) > 0x35
	.error "gText_Rom_24A483 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A483) < 0x35
	.space 0x35 - (. - gText_Rom_24A483)
	.endif
	@ Replaced baserom.gba range: offset=0x24A4B8, size=0x57
	@ semanticized-mass: charmap string (87 bytes including EOS)
	.string "こちらは　ポケモンコンテストの\n4めいさま　せんようの　うけつけです！\pおともだちが　あと3めい　そろえば\n4にんで　おなじ　コンテストに　でられます！\lさんか　しますか？"
	.byte EOS
