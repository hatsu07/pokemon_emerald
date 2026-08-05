	@ field-script:0x258F73 FieldScriptText_258B45
	.globl gText_Rom_258B45
gText_Rom_258B45: @ 0x08258B45
	.string "あらあら！\nあなた　まぜるの　うまそうね！\lいっしょに　やらない？"
	.byte EOS
	.if (. - gText_Rom_258B45) > 0x22
	.error "gText_Rom_258B45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258B45) < 0x22
	.space 0x22 - (. - gText_Rom_258B45)
	.endif
