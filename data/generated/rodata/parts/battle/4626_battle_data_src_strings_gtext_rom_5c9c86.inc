	@ src/strings.c:264 gText_PkmnAlreadyHoldingItemSwitch
	.globl gText_Rom_5C9C86
gText_Rom_5C9C86: @ 0x085C9C86
	.string "{STR_VAR_1}は すでに\n{STR_VAR_2}を もっています\pもっている どうぐを\nとりかえますか?$"
	.if (. - gText_Rom_5C9C86) > 0x27
	.error "gText_Rom_5C9C86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9C86) < 0x27
	.space 0x27 - (. - gText_Rom_5C9C86)
	.endif
