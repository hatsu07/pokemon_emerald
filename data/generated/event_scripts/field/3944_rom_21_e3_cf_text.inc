	@ field-script:0x21DF77 FieldScriptText_21E3CF
	.globl gText_Rom_21E3CF
gText_Rom_21E3CF: @ 0x0821E3CF
	.string "2ごうしつ"
	.byte EOS
	.if (. - gText_Rom_21E3CF) > 0x6
	.error "gText_Rom_21E3CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E3CF) < 0x6
	.space 0x6 - (. - gText_Rom_21E3CF)
	.endif
