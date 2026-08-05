	@ field-script:0x1EA5A6 FieldScriptText_1EAA9A
	.globl gText_Rom_1EAA9A
gText_Rom_1EAA9A: @ 0x081EAA9A
	.string "こらーっ！\nわしの　かわいい　まごに　なにすんじゃ！\pこうなったら　わしが　おまえさんを\nメタメタに　してやるから　かくごせぇ！$"
	.if (. - gText_Rom_1EAA9A) > 0x41
	.error "gText_Rom_1EAA9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAA9A) < 0x41
	.space 0x41 - (. - gText_Rom_1EAA9A)
	.endif
