	@ src/data/text/gift_ribbon_descriptions.h:18 gGiftRibbonDescriptionPart2_Participation2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart2_Participation2
gGiftRibbonDescriptionPart2_Participation2: @ 0x085F6118
	.string "さんかした きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart2_Participation2) != 0xd
	.error "gGiftRibbonDescriptionPart2_Participation2 must retain its original byte length"
	.endif
