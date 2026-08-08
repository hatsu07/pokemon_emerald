	@ field-script:0x2579C2 FieldScriptText_257DF6
	.globl gText_Rom_257DF6
gText_Rom_257DF6: @ 0x08257DF6
	.string "はいよ　たしかに！\nじゃあ　ポケモンを　つれていきなさい！"
	.byte EOS
	.if (. - gText_Rom_257DF6) > 0x1e
	.error "gText_Rom_257DF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257DF6) < 0x1e
	.space 0x1e - (. - gText_Rom_257DF6)
	.endif
