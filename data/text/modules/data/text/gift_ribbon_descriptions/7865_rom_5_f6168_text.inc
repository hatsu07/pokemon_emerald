	@ src/data/text/gift_ribbon_descriptions.h:25 gGiftRibbonDescriptionPart1_100StraightWin
	.globl gGiftRibbonDescriptionPart1_100StraightWin
gGiftRibbonDescriptionPart1_100StraightWin: @ 0x085F6168
	.string "100にんぬき たっせい{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_100StraightWin) > 0xd
	.error "gGiftRibbonDescriptionPart1_100StraightWin may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_100StraightWin) < 0xd
	.space 0xd - (. - gGiftRibbonDescriptionPart1_100StraightWin)
	.endif
