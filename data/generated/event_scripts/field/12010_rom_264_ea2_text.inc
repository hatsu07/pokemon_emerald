	@ field-script:0x26478F FieldScriptText_264EA2
	.globl gText_Rom_264EA2
gText_Rom_264EA2: @ 0x08264EA2
	.string "じゃあー　まず\nクイズに　せいかいした　ひとに\lあげる　しょうひんを　きめてね！\pただし　クイズに　チャレンジした　ひとが\nこたえを　はずしちゃった　ときは\lおねえさんが　しょうひん　もらっちゃうよ！\lちゅうい　してね！$"
	.if (. - gText_Rom_264EA2) > 0x6f
	.error "gText_Rom_264EA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264EA2) < 0x6f
	.space 0x6f - (. - gText_Rom_264EA2)
	.endif
