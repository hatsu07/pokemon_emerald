	@ field-script:0x26241B FieldScriptText_2624B7
	.globl gText_Rom_2624B7
gText_Rom_2624B7: @ 0x082624B7
	.string "ポロックおきばに　ポロックを　おきますか？{EOS}"
	.if (. - gText_Rom_2624B7) > 0x16
	.error "gText_Rom_2624B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2624B7) < 0x16
	.space 0x16 - (. - gText_Rom_2624B7)
	.endif
