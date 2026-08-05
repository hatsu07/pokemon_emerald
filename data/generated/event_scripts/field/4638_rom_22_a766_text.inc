	@ field-script:0x1F6474 FieldScriptText_22A766
	.globl gText_Rom_22A766
gText_Rom_22A766: @ 0x0822A766
	.string "どうぐが　いっぱいの　ようだな……\pどうぐを　せいりしてから\nまた　くるがよい……$"
	.if (. - gText_Rom_22A766) > 0x2a
	.error "gText_Rom_22A766 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A766) < 0x2a
	.space 0x2a - (. - gText_Rom_22A766)
	.endif
