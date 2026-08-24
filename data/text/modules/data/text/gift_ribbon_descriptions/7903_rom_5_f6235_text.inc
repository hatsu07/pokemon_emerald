	@ src/data/text/gift_ribbon_descriptions.h:42 gGiftRibbonDescriptionPart1_LotsOfFriends
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_LotsOfFriends
gGiftRibbonDescriptionPart1_LotsOfFriends: @ 0x085F6235
	.string "ともだち いっぱい きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_LotsOfFriends) != 0x11
	.error "gGiftRibbonDescriptionPart1_LotsOfFriends must retain its original byte length"
	.endif
