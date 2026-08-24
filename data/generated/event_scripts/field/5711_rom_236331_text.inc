	@ field-script:0x235CAE FieldScriptText_2362F6
	.globl gText_Rom_2362F6
gText_Rom_2362F6: @ 0x082362F6
	.string "キッスポスターで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_2362F6) > 0x13
	.error "gText_Rom_2362F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2362F6) < 0x13
	.space 0x13 - (. - gText_Rom_2362F6)
	.endif
	@ field-script:0x235CD1 FieldScriptText_236309
	.globl gText_Rom_236309
gText_Rom_236309: @ 0x08236309
	.string "キッスクッションで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236309) > 0x14
	.error "gText_Rom_236309 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236309) < 0x14
	.space 0x14 - (. - gText_Rom_236309)
	.endif
	@ field-script:0x235CF4 FieldScriptText_23631D
	.globl gText_Rom_23631D
gText_Rom_23631D: @ 0x0823631D
	.string "ムチュールドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_23631D) > 0x14
	.error "gText_Rom_23631D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23631D) < 0x14
	.space 0x14 - (. - gText_Rom_23631D)
	.endif
	@ field-script:0x235D17 FieldScriptText_236331
	.globl gText_Rom_236331
gText_Rom_236331: @ 0x08236331
	.string "トゲピードールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236331) > 0x13
	.error "gText_Rom_236331 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236331) < 0x13
	.space 0x13 - (. - gText_Rom_236331)
	.endif

	@ field-script:0x235D3A FieldScriptText_236344
	.globl gText_Rom_236344
gText_Rom_236344: @ 0x08236344
	.string "ニャースドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236344) > 0x13
	.error "gText_Rom_236344 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236344) < 0x13
	.space 0x13 - (. - gText_Rom_236344)
	.endif
