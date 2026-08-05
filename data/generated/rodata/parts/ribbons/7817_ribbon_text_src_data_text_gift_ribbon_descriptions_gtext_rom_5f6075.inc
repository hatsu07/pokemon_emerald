	@ src/data/text/gift_ribbon_descriptions.h:6 gGiftRibbonDescriptionPart2_Semifinalist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6075
gText_Rom_5F6075: @ 0x085F6075
	.string "ベスト4 きねんリボン$"
	.if (. - gText_Rom_5F6075) != 0xc
	.error "gText_Rom_5F6075 must retain its original byte length"
	.endif
