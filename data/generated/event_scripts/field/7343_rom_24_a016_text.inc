	@ field-script:0x248D9A FieldScriptText_24A016
	.globl gText_Rom_24A016
gText_Rom_24A016: @ 0x0824A016
	.string "ごめんなさい！\nタマゴは　しゅつじょう　できないんです……{EOS}"
	.if (. - gText_Rom_24A016) > 0x1e
	.error "gText_Rom_24A016 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A016) < 0x1e
	.space 0x1e - (. - gText_Rom_24A016)
	.endif
