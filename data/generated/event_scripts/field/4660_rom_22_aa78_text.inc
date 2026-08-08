	@ field-script:0x22A112 FieldScriptText_22AA78
	.globl gText_Rom_22AA78
gText_Rom_22AA78: @ 0x0822AA78
	.string "ここには　ダブル　バトルホールと\nよばれる　ダブルバトルの　ための\lひろまを　いくつか　ようい　しておる\pここでの　たたかいには\nまもらなければ　ならない\lひとつの　おきてが　ある\pここでは　ポケモンは\nいれかえ　しか　できない！\pそれいがいの　めいれいは\nいっさい　きんし　して　おるのだ！\pポケモンには　せいかくの　ままに\nかんがえ　こうどう　して　もらう！\pおぬしは　じぶんの\nポケモンたちを　しんじて\lたたかいを　みまもって　やれ\pみごと　7にんの　トレーナーを\nうちやぶることが　できれば\lバトルポイントを　さしあげよう\pまた　とちゅうで　ちょうせんを\nちゅうだん　したい　ときは\lきちんと　レポートを　かかないと\lつづけて　ちょうせん　できんからな\lきを　つけてくれ……$"
	.if (. - gText_Rom_22AA78) > 0x156
	.error "gText_Rom_22AA78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AA78) < 0x156
	.space 0x156 - (. - gText_Rom_22AA78)
	.endif
