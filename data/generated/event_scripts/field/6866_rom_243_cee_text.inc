	@ field-script:0x247016 FieldScriptText_243CEE
	.globl gText_Rom_243CEE
gText_Rom_243CEE: @ 0x08243CEE
	.string "もうしわけ　ございません\nポケモン　ワイヤレス　クラブは\lただいま　ちょうせいちゅう　です{EOS}"
	.if (. - gText_Rom_243CEE) > 0x2e
	.error "gText_Rom_243CEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243CEE) < 0x2e
	.space 0x2e - (. - gText_Rom_243CEE)
	.endif
