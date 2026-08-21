	@ src/data/text/gift_ribbon_descriptions.h:4 gGiftRibbonDescriptionPart1_2003GlobalCup
	.globl gText_Rom_5F6056
gText_Rom_5F6056: @ 0x085F6056
	.string "2003ねん ワールドカップ{EOS}"
	.if (. - gText_Rom_5F6056) > 0xf
	.error "gText_Rom_5F6056 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6056) < 0xf
	.space 0xf - (. - gText_Rom_5F6056)
	.endif
