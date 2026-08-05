	@ field-script:0x207025 FieldScriptText_24A9B5
	.globl gText_Rom_24A9B5
gText_Rom_24A9B5: @ 0x0824A9B5
	.string "エメラルドモードでは\nつうしんケーブルか　ワイヤレスアダプタを\lつなげた　ともだちが\l2にん　いじょう　あつまれば\lつうしんコンテストが　おこなえます！\p4にん　いない　ときは\nかいじょうに　いる　トレーナーが\lコンテストに　さんかして　くれますよ！\pただし　モードを　えらぶことが　できない\n4にんせんようの　うけつけから\lさんかする　ともだちが　いるばあいは\lこちらの　モードでは　できませんので\lごちゅうい　ください！$"
	.if (. - gText_Rom_24A9B5) > 0xd5
	.error "gText_Rom_24A9B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A9B5) < 0xd5
	.space 0xd5 - (. - gText_Rom_24A9B5)
	.endif
