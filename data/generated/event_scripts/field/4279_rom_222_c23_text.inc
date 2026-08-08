	@ field-script:0x222B6C FieldScriptText_222C23
	.globl gText_Rom_222C23
gText_Rom_222C23: @ 0x08222C23
	.string "バトルフロンティア　ランキングホール\nきざめ！　さいこうの　きろく！$"
	.if (. - gText_Rom_222C23) > 0x23
	.error "gText_Rom_222C23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222C23) < 0x23
	.space 0x23 - (. - gText_Rom_222C23)
	.endif
