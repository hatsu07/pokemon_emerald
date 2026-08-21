	@ src/data/text/gift_ribbon_descriptions.h:22 gGiftRibbonDescriptionPart2_Commemorative
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6149
gText_Rom_5F6149: @ 0x085F6149
	.string "きねんリボン{EOS}"
	.if (. - gText_Rom_5F6149) != 0x7
	.error "gText_Rom_5F6149 must retain its original byte length"
	.endif
