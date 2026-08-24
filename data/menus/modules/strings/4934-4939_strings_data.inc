	.globl gText_Rom_5CA6A6
	.set gText_Rom_5CA6A6, gText_Var3Var1SlashVar2 + 0x2
	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA6AC
gText_Rom_5CA6AC: @ 0x085CA6AC
	.string "グッズを　おく{EOS}"
	.if (. - gText_Rom_5CA6AC) > 0x8
	.error "gText_Rom_5CA6AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6AC) < 0x8
	.space 0x8 - (. - gText_Rom_5CA6AC)
	.endif
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
