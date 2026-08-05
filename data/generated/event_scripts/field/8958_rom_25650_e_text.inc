	@ field-script:0x254E5A FieldScriptText_25650E
	.globl gText_Rom_25650E
gText_Rom_25650E: @ 0x0825650E
	.string "よし　わかった！\nしばらく　このうたを　うたって　みるよ！"
	.byte EOS
	.if (. - gText_Rom_25650E) > 0x1e
	.error "gText_Rom_25650E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25650E) < 0x1e
	.space 0x1e - (. - gText_Rom_25650E)
	.endif
