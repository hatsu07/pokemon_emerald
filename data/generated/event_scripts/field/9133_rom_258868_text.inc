	@ field-script:0x258EEA FieldScriptText_258868
	.globl gText_Rom_258868
gText_Rom_258868: @ 0x08258868
	.string "よっしっ！\nおにいさんが　せつめいして　あげよう！\pきのみブレンダーの　マークが\nじぶんの　ところに　きたら\lボタンを　おすんだよ！\pとっても\nかんたんな　ことだろう？"
	.byte EOS
	.if (. - gText_Rom_258868) > 0x55
	.error "gText_Rom_258868 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258868) < 0x55
	.space 0x55 - (. - gText_Rom_258868)
	.endif
