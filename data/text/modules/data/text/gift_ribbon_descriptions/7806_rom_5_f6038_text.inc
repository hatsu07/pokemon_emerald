	@ src/data/text/gift_ribbon_descriptions.h:2 gGiftRibbonDescriptionPart2_Champion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6038
gText_Rom_5F6038: @ 0x085F6038
	.string "ゆうしょう きねんリボン{EOS}"
	.if (. - gText_Rom_5F6038) != 0xd
	.error "gText_Rom_5F6038 must retain its original byte length"
	.endif
