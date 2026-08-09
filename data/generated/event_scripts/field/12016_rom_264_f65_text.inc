	@ field-script:0x264802 FieldScriptText_264F65
	.globl gText_Rom_264F65
gText_Rom_264F65: @ 0x08264F65
	.string "クイズの　もんだい　つくるの　やめる？$"
	.if (. - gText_Rom_264F65) > 0x14
	.error "gText_Rom_264F65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264F65) < 0x14
	.space 0x14 - (. - gText_Rom_264F65)
	.endif
	@ Embedded ROM bytes: file offset 0x264F79, size 0x13
	@ semanticized-mass: charmap string (19 bytes including EOS)
	.string "クイズの　こたえ　きめるの　やめる？"
	.byte EOS
