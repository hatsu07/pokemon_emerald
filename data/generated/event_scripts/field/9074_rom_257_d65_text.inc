	@ field-script:0x2579EF FieldScriptText_257D47
	.globl gText_Rom_257D47
gText_Rom_257D47: @ 0x08257D47
	.string "もう　1ぴきも　ひきとるかい？"
	.byte EOS
	.if (. - gText_Rom_257D47) > 0x10
	.error "gText_Rom_257D47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257D47) < 0x10
	.space 0x10 - (. - gText_Rom_257D47)
	.endif
	@ field-script:0x257895 FieldScriptText_257D57
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_257D57
gText_Rom_257D57: @ 0x08257D57
	.string "それじゃ　また　きておくれ"
	.byte EOS
	.if (. - gText_Rom_257D57) != 0xe
	.error "gText_Rom_257D57 must retain its original byte length"
	.endif
	.globl gText_Rom_257D61
	.set gText_Rom_257D61, gText_Rom_257D57 + 0xa
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
