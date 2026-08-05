	@ field-script:0x2070A2 FieldScriptText_249FDD
	.globl gText_Rom_249FDD
gText_Rom_249FDD: @ 0x08249FDD
	.string "もうしわけ　ないのですが\nおきゃくさまの　ポケモンですと\lこのランクには　まだ　しゅつじょう\lできないようです…$"
	.if (. - gText_Rom_249FDD) > 0x39
	.error "gText_Rom_249FDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249FDD) < 0x39
	.space 0x39 - (. - gText_Rom_249FDD)
	.endif
