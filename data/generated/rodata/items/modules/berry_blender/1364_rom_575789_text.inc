	@ src/berry_blender.c:272 berry_blender_line_272 (+1 aliases)
	.globl gText_Rom_575789
gText_Rom_575789: @ 0x08575789
	.string "おんなのこ$"
	.if (. - gText_Rom_575789) > 0x6
	.error "gText_Rom_575789 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575789) < 0x6
	.space 0x6 - (. - gText_Rom_575789)
	.endif
