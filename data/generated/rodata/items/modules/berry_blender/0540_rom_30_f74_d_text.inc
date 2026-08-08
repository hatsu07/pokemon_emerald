	@ src/berry_blender.c:270 berry_blender_line_270
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_30F74D
gText_Rom_30F74D: @ 0x0830F74D
	.string " おじさん$"
	.if (. - gText_Rom_30F74D) != 0x6
	.error "gText_Rom_30F74D must retain its original byte length"
	.endif
