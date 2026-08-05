	@ src/strings.c:1014 gText_Cancel3
	.globl gText_Rom_5DC11C
gText_Rom_5DC11C: @ 0x085DC11C
	.string "ちゅうし$"
	.if (. - gText_Rom_5DC11C) > 0x5
	.error "gText_Rom_5DC11C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC11C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC11C)
	.endif
