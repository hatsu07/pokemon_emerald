	@ field-script:0x258E12 FieldScriptText_258642
	.globl gText_Rom_258642
gText_Rom_258642: @ 0x08258642
	.string "よし　せつめいするぞ！\pなぁに　かんたんな　ことだ！\pきのみブレンダーの　マークが\nじぶんの　ところに　きたら\lボタンを　おせば　いいだけだ\pまあ　じっさいに　やってみれば\nすぐ　わかるさ！"
	.byte EOS
	.if (. - gText_Rom_258642) > 0x60
	.error "gText_Rom_258642 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258642) < 0x60
	.space 0x60 - (. - gText_Rom_258642)
	.endif
