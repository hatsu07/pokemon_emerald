	@ src/strings.c:420 gText_Toss2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA6BD
gText_Rom_5CA6BD: @ 0x085CA6BD
	.string "グッズを すてる$"
	.if (. - gText_Rom_5CA6BD) != 0x9
	.error "gText_Rom_5CA6BD must retain its original byte length"
	.endif
