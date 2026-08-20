	@ field-script:0x1EA549 FieldScriptText_1EAA3C
	.globl gText_Rom_1EAA3C
gText_Rom_1EAA3C: @ 0x081EAA3C
	.string "ママより　つよいなんて　すごーい！\pでも　あたし　だって　つよいんだから！\nほんと　なんだってば！{EOS}"
	.if (. - gText_Rom_1EAA3C) > 0x32
	.error "gText_Rom_1EAA3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAA3C) < 0x32
	.space 0x32 - (. - gText_Rom_1EAA3C)
	.endif
