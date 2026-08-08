	@ field-script:0x23C467 FieldScriptText_23C66D
	.globl gText_Rom_23C66D
gText_Rom_23C66D: @ 0x0823C66D
	.string "と　おもったけど　バッグ　いっぱいかー\nじゃあ　あずかっておくよー"
	.byte EOS
	.if (. - gText_Rom_23C66D) > 0x22
	.error "gText_Rom_23C66D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C66D) < 0x22
	.space 0x22 - (. - gText_Rom_23C66D)
	.endif
