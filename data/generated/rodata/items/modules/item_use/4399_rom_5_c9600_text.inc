	@ src/item_use.c:94 sText_BootedUpTM
	.globl gText_Rom_5C9600
gText_Rom_5C9600: @ 0x085C9600
	.string "わざマシンを きどうした!$"
	.if (. - gText_Rom_5C9600) > 0xe
	.error "gText_Rom_5C9600 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9600) < 0xe
	.space 0xe - (. - gText_Rom_5C9600)
	.endif
