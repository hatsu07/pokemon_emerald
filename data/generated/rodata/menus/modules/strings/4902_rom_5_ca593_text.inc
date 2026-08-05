	@ src/strings.c:406 gText_XNatureHatchedSomewhereAt
	.globl gText_Rom_5CA593
gText_Rom_5CA593: @ 0x085CA593
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\nどこかで かえった$"
	.if (. - gText_Rom_5CA593) > 0x23
	.error "gText_Rom_5CA593 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA593) < 0x23
	.space 0x23 - (. - gText_Rom_5CA593)
	.endif
