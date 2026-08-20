	@ field-script:0x22A18F FieldScriptText_22AA61
	.globl gText_Rom_22AA61
gText_Rom_22AA61: @ 0x0822AA61
	.string "ダブル　バトルホールに\nちょうせん　するか？{EOS}"
	.if (. - gText_Rom_22AA61) > 0x17
	.error "gText_Rom_22AA61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AA61) < 0x17
	.space 0x17 - (. - gText_Rom_22AA61)
	.endif
