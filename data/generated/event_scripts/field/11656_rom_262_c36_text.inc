	@ field-script:0x21EB91 FieldScriptText_262C36
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_262C36
gText_Rom_262C36: @ 0x08262C36
	.string "ピカチュウが　ここで　みられるって\nきいたんだけど　どこに　いるのかしら{EOS}"
	.if (. - gText_Rom_262C36) != 0x25
	.error "gText_Rom_262C36 must retain its original byte length"
	.endif
