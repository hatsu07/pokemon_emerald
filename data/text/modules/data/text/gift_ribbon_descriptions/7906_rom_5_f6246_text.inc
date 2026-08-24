	@ src/data/text/gift_ribbon_descriptions.h:43 gGiftRibbonDescriptionPart1_FullOfEnergy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_FullOfEnergy
gGiftRibbonDescriptionPart1_FullOfEnergy: @ 0x085F6246
	.string "げんき いっぱい きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_FullOfEnergy) != 0x10
	.error "gGiftRibbonDescriptionPart1_FullOfEnergy must retain its original byte length"
	.endif
