	@ field-script:0x264696 FieldScriptText_264D62
	.globl gText_Rom_264D62
gText_Rom_264D62: @ 0x08264D62
	.string "……　……　……　……\n……　……　……　……$"
	.if (. - gText_Rom_264D62) > 0x18
	.error "gText_Rom_264D62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264D62) < 0x18
	.space 0x18 - (. - gText_Rom_264D62)
	.endif
