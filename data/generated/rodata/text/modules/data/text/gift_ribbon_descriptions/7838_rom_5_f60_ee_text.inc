	@ src/data/text/gift_ribbon_descriptions.h:14 gGiftRibbonDescriptionPart2_Participation
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F60EE
gText_Rom_5F60EE: @ 0x085F60EE
	.string "さんか きねんリボン$"
	.if (. - gText_Rom_5F60EE) != 0xb
	.error "gText_Rom_5F60EE must retain its original byte length"
	.endif
