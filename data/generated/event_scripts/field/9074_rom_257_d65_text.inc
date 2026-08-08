	@ field-script:0x2578FA FieldScriptText_257D65
	.globl gText_Rom_257D65
gText_Rom_257D65: @ 0x08257D65
	.string "おお　あんたか！　よくきたな\nおまえさんの　ポケモンは　ゲンキじゃぞ"
	.byte EOS
	.if (. - gText_Rom_257D65) > 0x23
	.error "gText_Rom_257D65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257D65) < 0x23
	.space 0x23 - (. - gText_Rom_257D65)
	.endif
