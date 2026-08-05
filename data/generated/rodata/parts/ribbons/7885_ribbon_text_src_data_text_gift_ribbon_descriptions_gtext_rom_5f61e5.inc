	@ src/data/text/gift_ribbon_descriptions.h:35 gGiftRibbonDescriptionPart1_SummerHolidays
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F61E5
gText_Rom_5F61E5: @ 0x085F61E5
	.string "なつやすみ きねんリボン$"
	.if (. - gText_Rom_5F61E5) != 0xd
	.error "gText_Rom_5F61E5 must retain its original byte length"
	.endif
