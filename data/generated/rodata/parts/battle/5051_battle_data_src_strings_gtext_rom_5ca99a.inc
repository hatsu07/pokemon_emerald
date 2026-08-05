	@ src/strings.c:455 gText_MessageWillBeLost
	.globl gText_Rom_5CA99A
gText_Rom_5CA99A: @ 0x085CA99A
	.string "ないようは きえてしまいますが\nよろしいですか?$"
	.if (. - gText_Rom_5CA99A) > 0x19
	.error "gText_Rom_5CA99A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA99A) < 0x19
	.space 0x19 - (. - gText_Rom_5CA99A)
	.endif
