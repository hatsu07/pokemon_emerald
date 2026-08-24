	@ src/data/text/gift_ribbon_descriptions.h:24 gGiftRibbonDescriptionPart2_ClearingAllChallenges
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart2_ClearingAllChallenges
gGiftRibbonDescriptionPart2_ClearingAllChallenges: @ 0x085F615B
	.string "のりこえた きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart2_ClearingAllChallenges) != 0xd
	.error "gGiftRibbonDescriptionPart2_ClearingAllChallenges must retain its original byte length"
	.endif
