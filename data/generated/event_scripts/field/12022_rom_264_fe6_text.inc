	@ field-script:0x264876 FieldScriptText_264FE6
	.globl gText_Rom_264FE6
gText_Rom_264FE6: @ 0x08264FE6
	.string "このまえは　ポロック　ありがとー！{EOS}"
	.if (. - gText_Rom_264FE6) > 0x12
	.error "gText_Rom_264FE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264FE6) < 0x12
	.space 0x12 - (. - gText_Rom_264FE6)
	.endif
