	@ src/data/text/gift_ribbon_descriptions.h:40 gGiftRibbonDescriptionPart1_SpecialHoliday
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F621A
gText_Rom_5F621A: @ 0x085F621A
	.string "きねんび きねんリボン{EOS}"
	.if (. - gText_Rom_5F621A) != 0xc
	.error "gText_Rom_5F621A must retain its original byte length"
	.endif
