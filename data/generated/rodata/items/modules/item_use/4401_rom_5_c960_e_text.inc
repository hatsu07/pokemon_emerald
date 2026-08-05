	@ src/item_use.c:95 sText_BootedUpHM
	.globl gText_Rom_5C960E
gText_Rom_5C960E: @ 0x085C960E
	.string "ひでんマシンを きどうした!$"
	.if (. - gText_Rom_5C960E) > 0xf
	.error "gText_Rom_5C960E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C960E) < 0xf
	.space 0xf - (. - gText_Rom_5C960E)
	.endif
