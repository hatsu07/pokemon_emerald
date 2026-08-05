	@ field-script:0x23897B FieldScriptText_238B00
	.globl gText_Rom_238B00
gText_Rom_238B00: @ 0x08238B00
	.string "エニシダ『バトルポイントは\nフロンティアパスで　みられるからね！\lポイントは　この　フロンティアで\lかつやく　すれば　するほど\lたまっていく　ものなんだ！\pほしい　ものと　ひきかえたり\nすきなように　かつようして　くれ！"
	.byte EOS
	.if (. - gText_Rom_238B00) > 0x6f
	.error "gText_Rom_238B00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238B00) < 0x6f
	.space 0x6f - (. - gText_Rom_238B00)
	.endif
