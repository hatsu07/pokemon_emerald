	@ field-script:0x21ECAD FieldScriptText_21EED6
	.globl gText_Rom_21EED6
gText_Rom_21EED6: @ 0x0821EED6
	.string "ここは　バトルファクトリー！\nさがせ！　さいきょう　ポケモン！"
	.byte EOS
	.if (. - gText_Rom_21EED6) > 0x20
	.error "gText_Rom_21EED6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EED6) < 0x20
	.space 0x20 - (. - gText_Rom_21EED6)
	.endif
