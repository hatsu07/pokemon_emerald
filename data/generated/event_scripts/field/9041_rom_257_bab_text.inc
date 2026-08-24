	@ field-script:0x25775E FieldScriptText_257B85
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_257B85
gText_Rom_257B85: @ 0x08257B85
	.string "てもちが　いっぱいの　ようじゃな…\nてもちを　せいりしてから　またきなさい"
	.byte EOS
	.if (. - gText_Rom_257B85) != 0x26
	.error "gText_Rom_257B85 must retain its original byte length"
	.endif
	.globl gText_Rom_257BA7
	.set gText_Rom_257BA7, gText_Rom_257B85 + 0x22
	@ field-script:0x257767 FieldScriptText_257BAB
	.globl gText_Rom_257BAB
gText_Rom_257BAB: @ 0x08257BAB
	.string "{0xFD}{0x01}は　そだてや　じいさんから\nタマゴを　もらった！"
	.byte EOS
	.if (. - gText_Rom_257BAB) > 0x1b
	.error "gText_Rom_257BAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257BAB) < 0x1b
	.space 0x1b - (. - gText_Rom_257BAB)
	.endif
