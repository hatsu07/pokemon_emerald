	@ src/field_specials.c:176 sText_BigGirl
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB031
gText_Rom_5CB031: @ 0x085CB031
	.string "おねえちゃん$"
	.if (. - gText_Rom_5CB031) != 0x7
	.error "gText_Rom_5CB031 must retain its original byte length"
	.endif
