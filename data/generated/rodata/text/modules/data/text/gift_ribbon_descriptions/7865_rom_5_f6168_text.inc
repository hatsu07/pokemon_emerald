	@ src/data/text/gift_ribbon_descriptions.h:25 gGiftRibbonDescriptionPart1_100StraightWin
	.globl gText_Rom_5F6168
gText_Rom_5F6168: @ 0x085F6168
	.string "100にんぬき たっせい{EOS}"
	.if (. - gText_Rom_5F6168) > 0xd
	.error "gText_Rom_5F6168 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6168) < 0xd
	.space 0xd - (. - gText_Rom_5F6168)
	.endif
