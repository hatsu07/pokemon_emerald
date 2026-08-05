	@ field-script:0x1DC13E FieldScriptText_243920
	.globl gText_Rom_243920
gText_Rom_243920: @ 0x08243920
	.string "またどうぞ！$"
	.if (. - gText_Rom_243920) > 0x7
	.error "gText_Rom_243920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243920) < 0x7
	.space 0x7 - (. - gText_Rom_243920)
	.endif
