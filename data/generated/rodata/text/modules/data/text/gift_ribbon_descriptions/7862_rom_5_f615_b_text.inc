	@ src/data/text/gift_ribbon_descriptions.h:24 gGiftRibbonDescriptionPart2_ClearingAllChallenges
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F615B
gText_Rom_5F615B: @ 0x085F615B
	.string "のりこえた きねんリボン$"
	.if (. - gText_Rom_5F615B) != 0xd
	.error "gText_Rom_5F615B must retain its original byte length"
	.endif
