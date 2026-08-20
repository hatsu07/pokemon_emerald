	@ src/strings.c:419 gText_PutAway
	.globl gText_Rom_5CA6B4
gText_Rom_5CA6B4: @ 0x085CA6B4
	.string "グッズを もどす{EOS}"
	.if (. - gText_Rom_5CA6B4) > 0x9
	.error "gText_Rom_5CA6B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6B4) < 0x9
	.space 0x9 - (. - gText_Rom_5CA6B4)
	.endif

	@ src/strings.c:420 gText_Toss2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA6BD
gText_Rom_5CA6BD: @ 0x085CA6BD
	.string "グッズを すてる{EOS}"
	.if (. - gText_Rom_5CA6BD) != 0x9
	.error "gText_Rom_5CA6BD must retain its original byte length"
	.endif
	.globl gText_Rom_5CA6C2
	.set gText_Rom_5CA6C2, gText_Rom_5CA6BD + 0x5

	@ src/strings.c:421 gText_Color161Shadow161
	.globl gText_Rom_5CA6C6
gText_Rom_5CA6C6: @ 0x085CA6C6
	.string "{COLOR 161}{SHADOW 161}{EOS}"
	.if (. - gText_Rom_5CA6C6) > 0x7
	.error "gText_Rom_5CA6C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6C6) < 0x7
	.space 0x7 - (. - gText_Rom_5CA6C6)
	.endif
