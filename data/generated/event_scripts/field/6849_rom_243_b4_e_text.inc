	@ field-script:0x244104 FieldScriptText_243B4E
	.globl gText_Rom_243B4E
gText_Rom_243B4E: @ 0x08243B4E
	.string "{0xFD}{0x01}の　てもとには\nたたかえるポケモンが　もういない！\p{0xFD}{0x01}は\nめのまえが　まっくらに　なった！$"
	.if (. - gText_Rom_243B4E) > 0x31
	.error "gText_Rom_243B4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243B4E) < 0x31
	.space 0x31 - (. - gText_Rom_243B4E)
	.endif
