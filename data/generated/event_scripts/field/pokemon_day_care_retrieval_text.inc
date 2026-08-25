	@ field-script:0x2578D6 FieldScriptText_257D0D
	.globl FieldScriptText_257D0D
FieldScriptText_257D0D: @ 0x08257D0D
	.string "じいさんが　あんたを　さがして　おったぞ"
	.byte EOS
	.if (. - FieldScriptText_257D0D) > 0x15
	.error "FieldScriptText_257D0D may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257D0D) < 0x15
	.space 0x15 - (. - FieldScriptText_257D0D)
	.endif
	@ field-script:0x257817 FieldScriptText_257D22
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_257D22
FieldScriptText_257D22: @ 0x08257D22
	.string "そうかい　それじゃ　また　きておくれ"
	.byte EOS
	.if (. - FieldScriptText_257D22) != 0x13
	.error "FieldScriptText_257D22 must retain its original byte length"
	.endif
	@ field-script:0x2579A3 FieldScriptText_257D35
	.globl FieldScriptText_257D35
FieldScriptText_257D35: @ 0x08257D35
	.string "おかねが　たりない　ようじゃのう…"
	.byte EOS
	.if (. - FieldScriptText_257D35) > 0x12
	.error "FieldScriptText_257D35 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257D35) < 0x12
	.space 0x12 - (. - FieldScriptText_257D35)
	.endif
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
	@ field-script:0x2578E0 FieldScriptText_257D88
	.globl FieldScriptText_257D88
FieldScriptText_257D88: @ 0x08257D88
	.string "{0xFD}{0x02}は　レベルで　いうと\n{0xFD}{0x03}くらい　そだって　おるぞ"
	.byte EOS
	.if (. - FieldScriptText_257D88) > 0x1c
	.error "FieldScriptText_257D88 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257D88) < 0x1c
	.space 0x1c - (. - FieldScriptText_257D88)
	.endif
	@ field-script:0x257A08 FieldScriptText_257DA4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_257DA4
FieldScriptText_257DA4: @ 0x08257DA4
	.string "てもちの　ポケモンがいっぱいじゃよ！\nポケモンを　せいりしてから　きなさい"
	.byte EOS
	.if (. - FieldScriptText_257DA4) != 0x26
	.error "FieldScriptText_257DA4 must retain its original byte length"
	.endif
	@ Original ROM bytes: 0x257DCA-0x257DDC (0x13 bytes)
	.byte 0x45, 0x50, 0x11, 0x19, 0x00, 0x9F, 0x59, 0x73, 0x7E, 0x2D, 0x00, 0x1B, 0x07, 0x14, 0x29, 0x06
	.byte 0x02, 0xAC, 0xFF
	@ field-script:0x25797A FieldScriptText_257DDD
	.globl FieldScriptText_257DDD
FieldScriptText_257DDD: @ 0x08257DDD
	.string "{0xFD}{0x02}を　ひきとるなら\nりょうきんは　{0xFD}{0x03}円　だよ"
	.byte EOS
	.if (. - FieldScriptText_257DDD) > 0x19
	.error "FieldScriptText_257DDD may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257DDD) < 0x19
	.space 0x19 - (. - FieldScriptText_257DDD)
	.endif
