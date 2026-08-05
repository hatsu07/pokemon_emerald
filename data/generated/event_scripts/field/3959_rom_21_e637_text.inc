	@ field-script:0x21E550 FieldScriptText_21E637
	.globl gText_Rom_21E637
gText_Rom_21E637: @ 0x0821E637
	.string "つぎの　コンテストには\nどんな　ポケモンが　でるのか\lたのしみで　たまらないよ"
	.byte EOS
	.if (. - gText_Rom_21E637) > 0x28
	.error "gText_Rom_21E637 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E637) < 0x28
	.space 0x28 - (. - gText_Rom_21E637)
	.endif
