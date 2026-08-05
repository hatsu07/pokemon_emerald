	@ src/strings.c:402 gText_XNatureFatefulEncounter
	.globl gText_Rom_5CA512
gText_Rom_5CA512: @ 0x085CA512
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\nうんめいてきな であいを した$"
	.if (. - gText_Rom_5CA512) > 0x29
	.error "gText_Rom_5CA512 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA512) < 0x29
	.space 0x29 - (. - gText_Rom_5CA512)
	.endif
