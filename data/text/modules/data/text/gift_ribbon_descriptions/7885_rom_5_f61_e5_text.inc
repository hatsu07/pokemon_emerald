	@ src/data/text/gift_ribbon_descriptions.h:35 gGiftRibbonDescriptionPart1_SummerHolidays
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_SummerHolidays
gGiftRibbonDescriptionPart1_SummerHolidays: @ 0x085F61E5
	.string "なつやすみ きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_SummerHolidays) != 0xd
	.error "gGiftRibbonDescriptionPart1_SummerHolidays must retain its original byte length"
	.endif
