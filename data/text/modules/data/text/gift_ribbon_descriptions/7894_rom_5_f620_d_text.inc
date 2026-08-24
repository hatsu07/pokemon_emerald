	@ src/data/text/gift_ribbon_descriptions.h:39 gGiftRibbonDescriptionPart1_Evergreen
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_Evergreen
gGiftRibbonDescriptionPart1_Evergreen: @ 0x085F620D
	.string "クリスマス きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_Evergreen) != 0xd
	.error "gGiftRibbonDescriptionPart1_Evergreen must retain its original byte length"
	.endif
