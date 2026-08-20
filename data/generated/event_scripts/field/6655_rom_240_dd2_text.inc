	@ field-script:0x2408ED FieldScriptText_240DD2
	.globl gText_Rom_240DD2
gText_Rom_240DD2: @ 0x08240DD2
	.string "{0xFD}{0x02}　だね　ペコペコ！\nほんとうに　それで　いいんだね？　ペコペコ{EOS}"
	.if (. - gText_Rom_240DD2) > 0x22
	.error "gText_Rom_240DD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240DD2) < 0x22
	.space 0x22 - (. - gText_Rom_240DD2)
	.endif
