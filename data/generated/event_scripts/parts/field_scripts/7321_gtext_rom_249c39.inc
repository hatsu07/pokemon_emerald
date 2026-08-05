	@ field-script:0x248B3B FieldScriptText_249C39
	.globl gText_Rom_249C39
gText_Rom_249C39: @ 0x08249C39
	.string "というわけで　あらためまして……\pこんにちは！\pこちらでは　ポケモンコンテスト\nうけつけを　おこなって　います！$"
	.if (. - gText_Rom_249C39) > 0x39
	.error "gText_Rom_249C39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249C39) < 0x39
	.space 0x39 - (. - gText_Rom_249C39)
	.endif
