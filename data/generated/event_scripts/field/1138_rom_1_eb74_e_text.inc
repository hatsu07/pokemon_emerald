	@ field-script:0x1EB523 FieldScriptText_1EB74E
	.globl gText_Rom_1EB74E
gText_Rom_1EB74E: @ 0x081EB74E
	.string "わたしの　ポケモン　ほえてばかりで\nみんなが　にげてしまって……\pあなた　よかったら\nこの　わざマシン　もらってください{EOS}"
	.if (. - gText_Rom_1EB74E) > 0x3d
	.error "gText_Rom_1EB74E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB74E) < 0x3d
	.space 0x3d - (. - gText_Rom_1EB74E)
	.endif
