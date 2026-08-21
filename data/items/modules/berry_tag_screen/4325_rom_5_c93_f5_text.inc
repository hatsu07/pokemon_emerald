	@ asm/berry_tag_screen.s:704 sub_0817804C
	.globl gText_Rom_5C93F5
gText_Rom_5C93F5: @ 0x085C93F5
	.string "？？？{EOS}"
	.if (. - gText_Rom_5C93F5) > 0x4
	.error "gText_Rom_5C93F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93F5) < 0x4
	.space 0x4 - (. - gText_Rom_5C93F5)
	.endif
