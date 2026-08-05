	@ src/berry_blender.c:278 sText_CommunicationStandby
	.globl gText_Rom_30F78E
gText_Rom_30F78E: @ 0x0830F78E
	.string "つうしんたいきちゅうです$"
	.if (. - gText_Rom_30F78E) > 0xd
	.error "gText_Rom_30F78E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F78E) < 0xd
	.space 0xd - (. - gText_Rom_30F78E)
	.endif
