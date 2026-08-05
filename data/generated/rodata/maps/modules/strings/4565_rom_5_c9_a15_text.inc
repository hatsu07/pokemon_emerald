	@ src/strings.c:236 gText_CanIHelpWithAnythingElse
	.globl gText_Rom_5C9A15
gText_Rom_5C9A15: @ 0x085C9A15
	.string "その ほかに\nなにか ちからに なれることは?$"
	.if (. - gText_Rom_5C9A15) > 0x18
	.error "gText_Rom_5C9A15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A15) < 0x18
	.space 0x18 - (. - gText_Rom_5C9A15)
	.endif
