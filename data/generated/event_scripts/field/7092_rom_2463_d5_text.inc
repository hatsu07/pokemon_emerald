	@ field-script:0x24654A FieldScriptText_2463D5
	.globl gText_Rom_2463D5
gText_Rom_2463D5: @ 0x082463D5
	.string "ツルが　おちそうな　きにむかって\nひみつのちからを　つかってごらん！\lツルが　おちてきて　きのうえに　のぼれるよ！\pそれでね　うえには　ひろいへやが　あるから\nぼくは　そこに　すきなものを　おくんだ！\lじぶんだけの　ひみつのへや…\lそう　ひみつきちさ！\lきみも　つくると　いいよー\pそうそう　ひみつきちを　つくれる　ばしょは\nきのうえ　だけじゃ　ないよ！\pちいさな　くぼみがある　かべなんかにも\nひみつのちからを　つかって　みるといいよ！\pぼくも　ほかの　ばしょを　さがして　みるね\nそれじゃ！$"
	.if (. - gText_Rom_2463D5) > 0xf8
	.error "gText_Rom_2463D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2463D5) < 0xf8
	.space 0xf8 - (. - gText_Rom_2463D5)
	.endif
