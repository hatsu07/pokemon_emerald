	@ field-script:0x264785 FieldScriptText_264E8E
	.globl gText_Rom_264E8E
gText_Rom_264E8E: @ 0x08264E8E
	.string "そっか……\nじゃあー　また　こんどね！{EOS}"
	.if (. - gText_Rom_264E8E) > 0x14
	.error "gText_Rom_264E8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264E8E) < 0x14
	.space 0x14 - (. - gText_Rom_264E8E)
	.endif
