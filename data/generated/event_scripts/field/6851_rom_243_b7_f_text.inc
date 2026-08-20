	@ field-script:0x244D04 FieldScriptText_243B7F
	.globl gText_Rom_243B7F
gText_Rom_243B7F: @ 0x08243B7F
	.string "{0xFD}{0x02}の　{0xFD}{0x03}を\nポケナビに　とうろく　した！{EOS}"
	.if (. - gText_Rom_243B7F) > 0x17
	.error "gText_Rom_243B7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243B7F) < 0x17
	.space 0x17 - (. - gText_Rom_243B7F)
	.endif
