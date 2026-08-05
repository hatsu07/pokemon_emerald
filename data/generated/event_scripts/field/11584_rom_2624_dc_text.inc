	@ field-script:0x262441 FieldScriptText_2624DC
	.globl gText_Rom_2624DC
gText_Rom_2624DC: @ 0x082624DC
	.string "{0xFD}{0x02}を\nおきました！$"
	.if (. - gText_Rom_2624DC) > 0xb
	.error "gText_Rom_2624DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2624DC) < 0xb
	.space 0xb - (. - gText_Rom_2624DC)
	.endif
