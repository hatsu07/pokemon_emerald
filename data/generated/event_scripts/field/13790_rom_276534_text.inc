	@ field-script:0x276B17 FieldScriptText_276534
	.globl gText_Rom_276534
gText_Rom_276534: @ 0x08276534
	.string "もう　できんわ！\pぜったい　ムリだわ！\pかくとうタイプの　オレは\nトクサネの　ジムでは\lぜんぜん　かてんわ！\pちきしょーっ！　ボカ　ボカ！\nボカ　ボカ！　ボカ　ボカ！\pなんだよ\nそんな　めで　みるなよ！\lじめんを　なぐってる　だけだろ！\pそれとも　おまえの　ポケモンに\nばくれつパンチを　おしえて　ほしいのかよ？{EOS}"
	.if (. - gText_Rom_276534) > 0x9d
	.error "gText_Rom_276534 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276534) < 0x9d
	.space 0x9d - (. - gText_Rom_276534)
	.endif
