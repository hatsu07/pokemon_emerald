	@ src/strings.c:419 gText_PutAway
	.globl gText_PutAway
gText_PutAway: @ 0x085CA6B4
	.string "グッズを もどす{EOS}"
	.if (. - gText_PutAway) > 0x9
	.error "gText_PutAway may not grow beyond its original slot"
	.endif
	.if (. - gText_PutAway) < 0x9
	.space 0x9 - (. - gText_PutAway)
	.endif

	@ src/strings.c:420 gText_Toss2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Toss2
gText_Toss2: @ 0x085CA6BD
	.string "グッズを すてる{EOS}"
	.if (. - gText_Toss2) != 0x9
	.error "gText_Toss2 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA6C2
	.set gText_Rom_5CA6C2, gText_Toss2 + 0x5

	@ src/strings.c:421 gText_Color161Shadow161
	.globl gText_Color161Shadow161
gText_Color161Shadow161: @ 0x085CA6C6
	.string "{COLOR 161}{SHADOW 161}{EOS}"
	.if (. - gText_Color161Shadow161) > 0x7
	.error "gText_Color161Shadow161 may not grow beyond its original slot"
	.endif
	.if (. - gText_Color161Shadow161) < 0x7
	.space 0x7 - (. - gText_Color161Shadow161)
	.endif
