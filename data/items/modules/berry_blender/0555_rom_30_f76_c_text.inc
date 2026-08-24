	.globl gText_Rom_30F766
	.globl gText_Rom_30F766
	.set gText_Rom_30F766, gText_Rom_30F765 + 0x1
	.globl gText_Rom_30F76C

	@ src/berry_blender.c:275 berry_blender_line_275 (+1 aliases)
	.globl gText_Rom_30F76C
gText_Rom_30F76C: @ 0x0830F76C
	.string "おばさん{EOS}"
	.if (. - gText_Rom_30F76C) > 0x5
	.error "gText_Rom_30F76C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F76C) < 0x5
	.space 0x5 - (. - gText_Rom_30F76C)
	.endif
	@ analyzed canonical ROM range 0x0830F771-0x0830F77B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0xBB, 0x9A, 0x60, 0x7E, 0x44, 0x00, 0x5D, 0x60, 0xAE, 0x64
