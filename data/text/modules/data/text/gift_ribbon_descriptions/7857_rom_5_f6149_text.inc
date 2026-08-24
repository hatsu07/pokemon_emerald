	@ src/data/text/gift_ribbon_descriptions.h:22 gGiftRibbonDescriptionPart2_Commemorative
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart2_Commemorative
gGiftRibbonDescriptionPart2_Commemorative: @ 0x085F6149
	.string "きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart2_Commemorative) != 0x7
	.error "gGiftRibbonDescriptionPart2_Commemorative must retain its original byte length"
	.endif
