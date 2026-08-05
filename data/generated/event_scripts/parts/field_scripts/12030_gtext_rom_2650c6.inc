	@ field-script:0x2648E1 FieldScriptText_2650C6
	.globl gText_Rom_2650C6
gText_Rom_2650C6: @ 0x082650C6
	.string "えー！　ポロック　くれないの？$"
	.if (. - gText_Rom_2650C6) > 0x10
	.error "gText_Rom_2650C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2650C6) < 0x10
	.space 0x10 - (. - gText_Rom_2650C6)
	.endif
