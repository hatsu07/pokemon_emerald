	@ field-script:0x2578E0 FieldScriptText_257D88
	.globl gText_Rom_257D88
gText_Rom_257D88: @ 0x08257D88
	.string "{0xFD}{0x02}は　レベルで　いうと\n{0xFD}{0x03}くらい　そだって　おるぞ"
	.byte EOS
	.if (. - gText_Rom_257D88) > 0x1c
	.error "gText_Rom_257D88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257D88) < 0x1c
	.space 0x1c - (. - gText_Rom_257D88)
	.endif
	@ field-script:0x257A08 FieldScriptText_257DA4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_257DA4
gText_Rom_257DA4: @ 0x08257DA4
	.string "てもちの　ポケモンがいっぱいじゃよ！\nポケモンを　せいりしてから　きなさい"
	.byte EOS
	.if (. - gText_Rom_257DA4) != 0x26
	.error "gText_Rom_257DA4 must retain its original byte length"
	.endif
	@ Original ROM bytes: 0x257DCA-0x257DDC (0x13 bytes)
	.byte 0x45, 0x50, 0x11, 0x19, 0x00, 0x9F, 0x59, 0x73, 0x7E, 0x2D, 0x00, 0x1B, 0x07, 0x14, 0x29, 0x06
	.byte 0x02, 0xAC, 0xFF
	@ field-script:0x25797A FieldScriptText_257DDD
	.globl gText_Rom_257DDD
gText_Rom_257DDD: @ 0x08257DDD
	.string "{0xFD}{0x02}を　ひきとるなら\nりょうきんは　{0xFD}{0x03}円　だよ"
	.byte EOS
	.if (. - gText_Rom_257DDD) > 0x19
	.error "gText_Rom_257DDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257DDD) < 0x19
	.space 0x19 - (. - gText_Rom_257DDD)
	.endif
