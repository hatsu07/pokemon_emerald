	@ src/data/text/gift_ribbon_descriptions.h:37 gGiftRibbonDescriptionPart1_WinterHolidays (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_WinterHolidays
gGiftRibbonDescriptionPart1_WinterHolidays: @ 0x085F61F3
	.string "ふゆやすみ きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_WinterHolidays) != 0xd
	.error "gGiftRibbonDescriptionPart1_WinterHolidays must retain its original byte length"
	.endif
