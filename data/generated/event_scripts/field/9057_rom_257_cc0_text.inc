	@ field-script:0x257875 FieldScriptText_257CC0
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_257CC0
gText_Rom_257CC0: @ 0x08257CC0
	.string "それでは　{0xFD}{0x02}を\nしばらく　あずかるぞ\pてきとうに　じかんが\nたったら　またきなさい"
	.byte EOS
	.if (. - gText_Rom_257CC0) != 0x2b
	.error "gText_Rom_257CC0 must retain its original byte length"
	.endif
