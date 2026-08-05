	@ field-script:0x223560 FieldScriptText_22375E
	.globl gText_Rom_22375E
gText_Rom_22375E: @ 0x0822375E
	.string "{0xFD}{0x01}さんは\nまだ　パートナーを　みつけていません！\pパートナーを　さがすのを　やめて\nうけつけへ　もどりますか？$"
	.if (. - gText_Rom_22375E) > 0x39
	.error "gText_Rom_22375E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22375E) < 0x39
	.space 0x39 - (. - gText_Rom_22375E)
	.endif
