	@ src/strings.c:400 gText_XNatureHatchedAtYZ
	.globl gText_Rom_5CA4CC
gText_Rom_5CA4CC: @ 0x085CA4CC
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}で かえった$"
	.if (. - gText_Rom_5CA4CC) > 0x26
	.error "gText_Rom_5CA4CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA4CC) < 0x26
	.space 0x26 - (. - gText_Rom_5CA4CC)
	.endif
