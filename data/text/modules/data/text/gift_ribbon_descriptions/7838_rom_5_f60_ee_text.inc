	@ src/data/text/gift_ribbon_descriptions.h:14 gGiftRibbonDescriptionPart2_Participation
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart2_Participation
gGiftRibbonDescriptionPart2_Participation: @ 0x085F60EE
	.string "さんか きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart2_Participation) != 0xb
	.error "gGiftRibbonDescriptionPart2_Participation must retain its original byte length"
	.endif
