	@ src/strings.c:80 gText_DexSortLightestTitle
	.globl gText_Rom_5C9131
gText_Rom_5C9131: @ 0x085C9131
	.string "かるい じゅん$"
	.if (. - gText_Rom_5C9131) > 0x8
	.error "gText_Rom_5C9131 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9131) < 0x8
	.space 0x8 - (. - gText_Rom_5C9131)
	.endif
