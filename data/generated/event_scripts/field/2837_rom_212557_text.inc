	@ field-script:0x2124EB FieldScriptText_212557
	.globl gText_Rom_212557
gText_Rom_212557: @ 0x08212557
	.string "マユミ『あっ！　{0xFD}{0x01}{0xFD}{0x05}\pちらかっていて　ごめんなさい……\nけんきゅうに　むちゅうに　なると\lつい　こう　なっちゃうんです……\pはずかしいから　ヒミツに　してくださいね\nこれ　あげますから……$"
	.if (. - gText_Rom_212557) > 0x61
	.error "gText_Rom_212557 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212557) < 0x61
	.space 0x61 - (. - gText_Rom_212557)
	.endif
