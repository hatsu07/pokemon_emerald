	@ src/data/text/gift_ribbon_descriptions.h:42 gGiftRibbonDescriptionPart1_LotsOfFriends
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6235
gText_Rom_5F6235: @ 0x085F6235
	.string "ともだち いっぱい きねんリボン$"
	.if (. - gText_Rom_5F6235) != 0x11
	.error "gText_Rom_5F6235 must retain its original byte length"
	.endif
