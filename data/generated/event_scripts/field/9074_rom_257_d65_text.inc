	@ field-script:0x2579EF FieldScriptText_257D47
	.globl FieldScriptText_257D47
FieldScriptText_257D47: @ 0x08257D47
	.string "もう　1ぴきも　ひきとるかい？"
	.byte EOS
	.if (. - FieldScriptText_257D47) > 0x10
	.error "FieldScriptText_257D47 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257D47) < 0x10
	.space 0x10 - (. - FieldScriptText_257D47)
	.endif
	@ field-script:0x257895 FieldScriptText_257D57
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_257D57
FieldScriptText_257D57: @ 0x08257D57
	.string "それじゃ　また　きておくれ"
	.byte EOS
	.if (. - FieldScriptText_257D57) != 0xe
	.error "FieldScriptText_257D57 must retain its original byte length"
	.endif
	@ field-script:0x2578FA FieldScriptText_257D65
	.globl FieldScriptText_257D65
FieldScriptText_257D65: @ 0x08257D65
	.string "おお　あんたか！　よくきたな\nおまえさんの　ポケモンは　ゲンキじゃぞ"
	.byte EOS
	.if (. - FieldScriptText_257D65) > 0x23
	.error "FieldScriptText_257D65 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257D65) < 0x23
	.space 0x23 - (. - FieldScriptText_257D65)
	.endif
