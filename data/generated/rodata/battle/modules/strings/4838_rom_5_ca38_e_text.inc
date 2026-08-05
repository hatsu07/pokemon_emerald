	@ src/strings.c:375 gText_OTSlash
	.globl gText_Rom_5CA38E
gText_Rom_5CA38E: @ 0x085CA38E
	.string "おや/$"
	.if (. - gText_Rom_5CA38E) > 0x4
	.error "gText_Rom_5CA38E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA38E) < 0x4
	.space 0x4 - (. - gText_Rom_5CA38E)
	.endif
