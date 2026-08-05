	@ field-script:0x21E5B4 FieldScriptText_21E7A3
	.globl gText_Rom_21E7A3
gText_Rom_21E7A3: @ 0x0821E7A3
	.string "カホ『ふたりの　ラブラブ　パワーでも\nかてない　だなんて\lあなた　すごい　トレーナー　なのね！"
	.byte EOS
	.if (. - gText_Rom_21E7A3) > 0x30
	.error "gText_Rom_21E7A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E7A3) < 0x30
	.space 0x30 - (. - gText_Rom_21E7A3)
	.endif
