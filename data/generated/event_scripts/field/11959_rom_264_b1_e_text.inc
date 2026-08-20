	@ field-script:0x26443F FieldScriptText_264B1E
	.globl gText_Rom_264B1E
gText_Rom_264B1E: @ 0x08264B1E
	.string "ねえ……　もし　よかったら\nあなたの　もってる　{0xFD}{0x02}な　もの\lわたしに　わけて　くれない　かしら？{EOS}"
	.if (. - gText_Rom_264B1E) > 0x32
	.error "gText_Rom_264B1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264B1E) < 0x32
	.space 0x32 - (. - gText_Rom_264B1E)
	.endif
