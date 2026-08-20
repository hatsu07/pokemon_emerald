	@ field-script:0x22A033 FieldScriptText_22A69B
	.globl gText_Rom_22A69B
gText_Rom_22A69B: @ 0x0822A69B
	.string "バトルホールへ　むかうまえに\nレポートを　かくが　よろしいか？{EOS}"
	.if (. - gText_Rom_22A69B) > 0x20
	.error "gText_Rom_22A69B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A69B) < 0x20
	.space 0x20 - (. - gText_Rom_22A69B)
	.endif
