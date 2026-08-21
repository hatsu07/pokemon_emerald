	@ src/data/text/gift_ribbon_descriptions.h:41 gGiftRibbonDescriptionPart1_HardWorker
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6226
gText_Rom_5F6226: @ 0x085F6226
	.string "がんばった きねんの リボン{EOS}"
	.if (. - gText_Rom_5F6226) != 0xf
	.error "gText_Rom_5F6226 must retain its original byte length"
	.endif
