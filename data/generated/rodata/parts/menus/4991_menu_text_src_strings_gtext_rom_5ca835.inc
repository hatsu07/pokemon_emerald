	@ src/strings.c:447 gText_StopPuttingAwayDecorations
	.globl gText_Rom_5CA835
gText_Rom_5CA835: @ 0x085CA835
	.string "もどすのを やめますか?$"
	.if (. - gText_Rom_5CA835) > 0xd
	.error "gText_Rom_5CA835 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA835) < 0xd
	.space 0xd - (. - gText_Rom_5CA835)
	.endif
