	@ src/berry_blender.c:917 sJPText_GoodTvReady
	.globl gText_Rom_30FBF6
gText_Rom_30FBF6: @ 0x0830FBF6
	.string "\nいいTVができました $"
	.if (. - gText_Rom_30FBF6) > 0xd
	.error "gText_Rom_30FBF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FBF6) < 0xd
	.space 0xd - (. - gText_Rom_30FBF6)
	.endif
