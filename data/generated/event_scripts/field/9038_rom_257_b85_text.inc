	@ field-script:0x25775E FieldScriptText_257B85
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_257B85
gText_Rom_257B85: @ 0x08257B85
	.string "てもちが　いっぱいの　ようじゃな…\nてもちを　せいりしてから　またきなさい"
	.byte EOS
	.if (. - gText_Rom_257B85) != 0x26
	.error "gText_Rom_257B85 must retain its original byte length"
	.endif
