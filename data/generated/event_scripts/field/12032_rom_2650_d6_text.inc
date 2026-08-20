	@ field-script:0x2648BA FieldScriptText_2650D6
	.globl gText_Rom_2650D6
gText_Rom_2650D6: @ 0x082650D6
	.string "ちぇっ！　けちー！{EOS}"
	.if (. - gText_Rom_2650D6) > 0xa
	.error "gText_Rom_2650D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2650D6) < 0xa
	.space 0xa - (. - gText_Rom_2650D6)
	.endif
