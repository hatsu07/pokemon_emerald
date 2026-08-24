	@ field-script:0x25779F FieldScriptText_257B57
	.globl FieldScriptText_257B57
FieldScriptText_257B57: @ 0x08257B57
	.string "おお　あんたか！　よくきたな\n{0xFD}{0x02}は　げんきじゃぞ"
	.byte EOS
	.if (. - FieldScriptText_257B57) > 0x1a
	.error "FieldScriptText_257B57 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257B57) < 0x1a
	.space 0x1a - (. - FieldScriptText_257B57)
	.endif
	@ field-script:0x25773E FieldScriptText_257B71
	.globl FieldScriptText_257B71
FieldScriptText_257B71: @ 0x08257B71
	.string "それじゃ　わしが　もらおう\nありがとよ"
	.byte EOS
	.if (. - FieldScriptText_257B71) > 0x14
	.error "FieldScriptText_257B71 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257B71) < 0x14
	.space 0x14 - (. - FieldScriptText_257B71)
	.endif
	@ field-script:0x25775E FieldScriptText_257B85
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_257B85
FieldScriptText_257B85: @ 0x08257B85
	.string "てもちが　いっぱいの　ようじゃな…\nてもちを　せいりしてから　またきなさい"
	.byte EOS
	.if (. - FieldScriptText_257B85) != 0x26
	.error "FieldScriptText_257B85 must retain its original byte length"
	.endif
	@ field-script:0x257767 FieldScriptText_257BAB
	.globl FieldScriptText_257BAB
FieldScriptText_257BAB: @ 0x08257BAB
	.string "{0xFD}{0x01}は　そだてや　じいさんから\nタマゴを　もらった！"
	.byte EOS
	.if (. - FieldScriptText_257BAB) > 0x1b
	.error "FieldScriptText_257BAB may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_257BAB) < 0x1b
	.space 0x1b - (. - FieldScriptText_257BAB)
	.endif
