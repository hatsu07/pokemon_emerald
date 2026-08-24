	@ src/data/text/gift_ribbon_descriptions.h:41 gGiftRibbonDescriptionPart1_HardWorker
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_HardWorker
gGiftRibbonDescriptionPart1_HardWorker: @ 0x085F6226
	.string "がんばった きねんの リボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_HardWorker) != 0xf
	.error "gGiftRibbonDescriptionPart1_HardWorker must retain its original byte length"
	.endif
