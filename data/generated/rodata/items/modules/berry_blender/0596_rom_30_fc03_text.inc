	@ src/berry_blender.c:918 sJPText_BadTvReady
	.globl gText_Rom_30FC03
gText_Rom_30FC03: @ 0x0830FC03
	.string "\nダメTVができました $"
	.if (. - gText_Rom_30FC03) > 0xd
	.error "gText_Rom_30FC03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC03) < 0xd
	.space 0xd - (. - gText_Rom_30FC03)
	.endif
