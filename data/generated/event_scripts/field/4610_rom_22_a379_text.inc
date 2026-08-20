	@ field-script:0x22A189 FieldScriptText_22A379
	.globl gText_Rom_22A379
gText_Rom_22A379: @ 0x0822A379
	.string "シングル　バトルホールに\nちょうせん　するか？{EOS}"
	.if (. - gText_Rom_22A379) > 0x18
	.error "gText_Rom_22A379 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A379) < 0x18
	.space 0x18 - (. - gText_Rom_22A379)
	.endif
