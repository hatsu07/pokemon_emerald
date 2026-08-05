	@ field-script:0x2572F8 FieldScriptText_257557
	.globl gText_Rom_257557
gText_Rom_257557: @ 0x08257557
	.string "やった！　ありがとう！\nじゃ　さっそく　きかせてよ！"
	.byte EOS
	.if (. - gText_Rom_257557) > 0x1b
	.error "gText_Rom_257557 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257557) < 0x1b
	.space 0x1b - (. - gText_Rom_257557)
	.endif
