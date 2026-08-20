	@ field-script:0x21EB5B FieldScriptText_262B16
	.globl gText_Rom_262B16
gText_Rom_262B16: @ 0x08262B16
	.string "サファリゾーンの　かくちょう　こうじが\nしゅうりょう　しました\pあたらしい　エリアも\nたのしんで　くださいね！{EOS}"
	.if (. - gText_Rom_262B16) > 0x38
	.error "gText_Rom_262B16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262B16) < 0x38
	.space 0x38 - (. - gText_Rom_262B16)
	.endif
