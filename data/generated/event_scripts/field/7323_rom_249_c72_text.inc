	@ field-script:0x248B1B FieldScriptText_249C72
	.globl gText_Rom_249C72
gText_Rom_249C72: @ 0x08249C72
	.string "こんにちは！\pこちらでは　ポケモンコンテスト\nうけつけを　おこなって　います！$"
	.if (. - gText_Rom_249C72) > 0x28
	.error "gText_Rom_249C72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249C72) < 0x28
	.space 0x28 - (. - gText_Rom_249C72)
	.endif
	@ Replaced baserom.gba range: offset=0x249C9A, size=0x2A
	@ semanticized-mass: charmap string (42 bytes including EOS)
	.string "こんにちは\pこちらは　ポケモンコンテストの\n4めいさま　せんようの　うけつけです！"
	.byte EOS
