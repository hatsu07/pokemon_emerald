	@ field-script:0x26244A FieldScriptText_2624CD
	.globl gText_Rom_2624CD
gText_Rom_2624CD: @ 0x082624CD
	.string "まだ　{0xFD}{0x02}が　のこっています$"
	.if (. - gText_Rom_2624CD) > 0xf
	.error "gText_Rom_2624CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2624CD) < 0xf
	.space 0xf - (. - gText_Rom_2624CD)
	.endif
