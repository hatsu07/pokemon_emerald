	@ src/field_specials.c:175 sText_BigGuy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB02A
gText_Rom_5CB02A: @ 0x085CB02A
	.string "おにいちゃん$"
	.if (. - gText_Rom_5CB02A) != 0x7
	.error "gText_Rom_5CB02A must retain its original byte length"
	.endif
