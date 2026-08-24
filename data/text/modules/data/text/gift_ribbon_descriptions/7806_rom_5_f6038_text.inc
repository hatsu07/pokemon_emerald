	@ src/data/text/gift_ribbon_descriptions.h:2 gGiftRibbonDescriptionPart2_Champion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart2_Champion
gGiftRibbonDescriptionPart2_Champion: @ 0x085F6038
	.string "ゆうしょう きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart2_Champion) != 0xd
	.error "gGiftRibbonDescriptionPart2_Champion must retain its original byte length"
	.endif
