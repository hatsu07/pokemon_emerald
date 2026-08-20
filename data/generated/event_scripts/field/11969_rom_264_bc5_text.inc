	@ field-script:0x2644FF FieldScriptText_264BC5
	.globl gText_Rom_264BC5
gText_Rom_264BC5: @ 0x08264BC5
	.string "まぁ……\pなかなか　{0xFD}{0x02}な　{0xFD}{0x03}ね\nすてき　じゃない……　うっとり　するわ……\pありがとう……\nたいせつに　するわね……{EOS}"
	.if (. - gText_Rom_264BC5) > 0x3d
	.error "gText_Rom_264BC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264BC5) < 0x3d
	.space 0x3d - (. - gText_Rom_264BC5)
	.endif
