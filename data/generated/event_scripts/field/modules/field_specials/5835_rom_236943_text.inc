	@ asm/field_specials.s:6023 sub_0813AAAC (+4 aliases)
	.globl gText_Rom_236943
gText_Rom_236943: @ 0x08236943
	.string "もたせると　ひかりが　あいてを　まどわして\nめいちゅうりつを　さげる"
	.byte EOS
	.if (. - gText_Rom_236943) > 0x23
	.error "gText_Rom_236943 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236943) < 0x23
	.space 0x23 - (. - gText_Rom_236943)
	.endif
