	@ src/data/text/gift_ribbon_descriptions.h:39 gGiftRibbonDescriptionPart1_Evergreen
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F620D
gText_Rom_5F620D: @ 0x085F620D
	.string "クリスマス きねんリボン{EOS}"
	.if (. - gText_Rom_5F620D) != 0xd
	.error "gText_Rom_5F620D must retain its original byte length"
	.endif
