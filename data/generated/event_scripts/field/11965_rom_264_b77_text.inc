	@ field-script:0x264498 FieldScriptText_264B77
	.globl gText_Rom_264B77
gText_Rom_264B77: @ 0x08264B77
	.string "あら……　いただけないの？$"
	.if (. - gText_Rom_264B77) > 0xe
	.error "gText_Rom_264B77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264B77) < 0xe
	.space 0xe - (. - gText_Rom_264B77)
	.endif
