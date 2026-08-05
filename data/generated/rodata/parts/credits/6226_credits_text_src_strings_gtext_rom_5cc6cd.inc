	@ src/strings.c:738 gText_RegisteredTextChangedOKToSave
	.globl gText_Rom_5CC6CD
gText_Rom_5CC6CD: @ 0x085CC6CD
	.string "とうろくが かわりました\nポケモンレポートに かきこみますか?$"
	.if (. - gText_Rom_5CC6CD) > 0x20
	.error "gText_Rom_5CC6CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC6CD) < 0x20
	.space 0x20 - (. - gText_Rom_5CC6CD)
	.endif
