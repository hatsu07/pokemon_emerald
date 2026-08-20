	@ field-script:0x2070B0 FieldScriptText_24A790
	.globl gText_Rom_24A790
gText_Rom_24A790: @ 0x0824A790
	.string "ごめんなさい！\nタマゴは　コンテストに　でられないんです…{EOS}"
	.if (. - gText_Rom_24A790) > 0x1e
	.error "gText_Rom_24A790 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A790) < 0x1e
	.space 0x1e - (. - gText_Rom_24A790)
	.endif
