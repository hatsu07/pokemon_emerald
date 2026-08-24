	@ field-script:0x257875 FieldScriptText_257CC0
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_257CC0
gText_Rom_257CC0: @ 0x08257CC0
	.string "それでは　{0xFD}{0x02}を\nしばらく　あずかるぞ\pてきとうに　じかんが\nたったら　またきなさい"
	.byte EOS
	.if (. - gText_Rom_257CC0) != 0x2b
	.error "gText_Rom_257CC0 must retain its original byte length"
	.endif
	.globl gText_Rom_257CE7
	.set gText_Rom_257CE7, gText_Rom_257CC0 + 0x27
	@ field-script:0x25789F FieldScriptText_257CEB
	.globl gText_Rom_257CEB
gText_Rom_257CEB: @ 0x08257CEB
	.string "2ひき　までなら　あずかれるけど\nもう　1ぴき　そだててみるかい？"
	.byte EOS
	.if (. - gText_Rom_257CEB) > 0x22
	.error "gText_Rom_257CEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257CEB) < 0x22
	.space 0x22 - (. - gText_Rom_257CEB)
	.endif
