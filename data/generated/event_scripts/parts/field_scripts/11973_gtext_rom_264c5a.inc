	@ field-script:0x264524 FieldScriptText_264C5A
	.globl gText_Rom_264C5A
gText_Rom_264C5A: @ 0x08264C5A
	.string "すてきな　ものを　くれた　おれいに\nとっておきの　プレゼントを　あ・げ・る！\lだいじにして　ちょうだいね……$"
	.if (. - gText_Rom_264C5A) > 0x37
	.error "gText_Rom_264C5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264C5A) < 0x37
	.space 0x37 - (. - gText_Rom_264C5A)
	.endif
