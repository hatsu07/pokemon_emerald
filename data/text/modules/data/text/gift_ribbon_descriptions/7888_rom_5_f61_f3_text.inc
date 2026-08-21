	@ src/data/text/gift_ribbon_descriptions.h:37 gGiftRibbonDescriptionPart1_WinterHolidays (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F61F3
gText_Rom_5F61F3: @ 0x085F61F3
	.string "ふゆやすみ きねんリボン{EOS}"
	.if (. - gText_Rom_5F61F3) != 0xd
	.error "gText_Rom_5F61F3 must retain its original byte length"
	.endif
