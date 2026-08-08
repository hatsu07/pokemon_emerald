	@ field-script:0x257A08 FieldScriptText_257DA4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_257DA4
gText_Rom_257DA4: @ 0x08257DA4
	.string "てもちの　ポケモンがいっぱいじゃよ！\nポケモンを　せいりしてから　きなさい"
	.byte EOS
	.if (. - gText_Rom_257DA4) != 0x26
	.error "gText_Rom_257DA4 must retain its original byte length"
	.endif
