	@ src/data/text/gift_ribbon_descriptions.h:18 gGiftRibbonDescriptionPart2_Participation2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6118
gText_Rom_5F6118: @ 0x085F6118
	.string "さんかした きねんリボン{EOS}"
	.if (. - gText_Rom_5F6118) != 0xd
	.error "gText_Rom_5F6118 must retain its original byte length"
	.endif
