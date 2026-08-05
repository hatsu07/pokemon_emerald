	@ asm/field_specials.s:6023 sub_0813AAAC (+4 aliases)
	.globl gText_Rom_2368C1
gText_Rom_2368C1: @ 0x082368C1
	.string "もたせると　たいりょくが　せんとうの　あいだ\nすこしずつ　かいふくする"
	.byte EOS
	.if (. - gText_Rom_2368C1) > 0x24
	.error "gText_Rom_2368C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2368C1) < 0x24
	.space 0x24 - (. - gText_Rom_2368C1)
	.endif
