	@ src/berry_blender.c:289 sText_MaximumSpeed
	.globl gText_Rom_30F83B
gText_Rom_30F83B: @ 0x0830F83B
	.string "さいこうそくど$"
	.if (. - gText_Rom_30F83B) > 0x8
	.error "gText_Rom_30F83B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F83B) < 0x8
	.space 0x8 - (. - gText_Rom_30F83B)
	.endif
