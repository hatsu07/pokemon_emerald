	@ field-script:0x211B59 FieldScriptText_211C95
	.globl gText_Rom_211C95
gText_Rom_211C95: @ 0x08211C95
	.string "パパより　ママが　つよくて\pママより　あたしが　つよくて\pあたしより　おばあちゃんが　つよくて\pでも　おばあちゃんより　つよかったのが\nあたしの　あにき　なの！{EOS}"
	.if (. - gText_Rom_211C95) > 0x51
	.error "gText_Rom_211C95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211C95) < 0x51
	.space 0x51 - (. - gText_Rom_211C95)
	.endif
