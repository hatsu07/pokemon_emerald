	@ src/data/text/gift_ribbon_descriptions.h:43 gGiftRibbonDescriptionPart1_FullOfEnergy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6246
gText_Rom_5F6246: @ 0x085F6246
	.string "げんき いっぱい きねんリボン{EOS}"
	.if (. - gText_Rom_5F6246) != 0x10
	.error "gText_Rom_5F6246 must retain its original byte length"
	.endif
