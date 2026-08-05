	@ field-script:0x2229E2 FieldScriptText_222BAD
	.globl gText_Rom_222BAD
gText_Rom_222BAD: @ 0x08222BAD
	.string "ここは　バトルタワー！\nかちぬけ！　さいきょう　トレーナー！$"
	.if (. - gText_Rom_222BAD) > 0x1f
	.error "gText_Rom_222BAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222BAD) < 0x1f
	.space 0x1f - (. - gText_Rom_222BAD)
	.endif
