	@ field-script:0x21D5AD FieldScriptText_2466F5
	.globl gText_Rom_2466F5
gText_Rom_2466F5: @ 0x082466F5
	.string "バトルタワーで　{0xFD}{0x02}にん　かちぬいた\nきねんの　{0xFD}{0x03}の　たて$"
	.if (. - gText_Rom_2466F5) > 0x1f
	.error "gText_Rom_2466F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2466F5) < 0x1f
	.space 0x1f - (. - gText_Rom_2466F5)
	.endif
