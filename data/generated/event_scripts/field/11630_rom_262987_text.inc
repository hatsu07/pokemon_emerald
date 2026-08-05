	@ field-script:0x21EA9E FieldScriptText_262987
	.globl gText_Rom_262987
gText_Rom_262987: @ 0x08262987
	.string "ポロックおきばに　おいた　ポロックが\nいつのまにか　なくなっていた……\pしらない　うちに\nポケモンが　たべちゃったのかな？$"
	.if (. - gText_Rom_262987) > 0x3e
	.error "gText_Rom_262987 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262987) < 0x3e
	.space 0x3e - (. - gText_Rom_262987)
	.endif
