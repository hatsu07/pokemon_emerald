	@ src/data/text/gift_ribbon_descriptions.h:40 gGiftRibbonDescriptionPart1_SpecialHoliday
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_SpecialHoliday
gGiftRibbonDescriptionPart1_SpecialHoliday: @ 0x085F621A
	.string "きねんび きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_SpecialHoliday) != 0xc
	.error "gGiftRibbonDescriptionPart1_SpecialHoliday must retain its original byte length"
	.endif
