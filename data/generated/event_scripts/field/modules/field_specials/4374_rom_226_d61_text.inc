	@ asm/field_specials.s:7592 sub_0813B5B4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_226D61
gText_Rom_226D61: @ 0x08226D61
	.string "パートナーが　リタイアされました\pバトルルームの　ちょうせんを\nちゅうし　いたします$"
	.if (. - gText_Rom_226D61) != 0x2b
	.error "gText_Rom_226D61 must retain its original byte length"
	.endif
