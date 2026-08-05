	@ field-script:0x264689 FieldScriptText_264D97
	.globl gText_Rom_264D97
gText_Rom_264D97: @ 0x08264D97
	.string "また　チャレンジ　してねー！$"
	.if (. - gText_Rom_264D97) > 0xf
	.error "gText_Rom_264D97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264D97) < 0xf
	.space 0xf - (. - gText_Rom_264D97)
	.endif
