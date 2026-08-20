	@ field-script:0x22A105 FieldScriptText_22A391
	.globl gText_Rom_22A391
gText_Rom_22A391: @ 0x0822A391
	.string "ここには　シングル　バトルホールと\nよばれる　シングルバトルの　ための\lひろまを　いくつか　ようい　しておる\pここでの　たたかいには\nまもらなければ　ならない\lひとつの　おきてが　ある\pここでは　ポケモンは\nいれかえ　しか　できない！\pそれいがいの　めいれいは\nいっさい　きんし　して　おるのだ！\pポケモンには　せいかくの　ままに\nかんがえ　こうどう　して　もらう！\pおぬしは　じぶんの\nポケモンたちを　しんじて\lたたかいを　みまもって　やれ\pみごと　7にんの　トレーナーを\nうちやぶることが　できれば\lバトルポイントを　さしあげよう\pまた　とちゅうで　ちょうせんを\nちゅうだん　したい　ときは\lきちんと　レポートを　かかないと\lつづけて　ちょうせん　できんからな\lきを　つけてくれ……{EOS}"
	.if (. - gText_Rom_22A391) > 0x158
	.error "gText_Rom_22A391 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A391) < 0x158
	.space 0x158 - (. - gText_Rom_22A391)
	.endif
