	@ src/data/text/gift_ribbon_descriptions.h:6 gGiftRibbonDescriptionPart2_Semifinalist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart2_Semifinalist
gGiftRibbonDescriptionPart2_Semifinalist: @ 0x085F6075
	.string "ベスト4 きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart2_Semifinalist) != 0xc
	.error "gGiftRibbonDescriptionPart2_Semifinalist must retain its original byte length"
	.endif
