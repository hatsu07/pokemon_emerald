	@ src/data/text/gift_ribbon_descriptions.h:5 gGiftRibbonDescriptionPart2_RunnerUp
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart2_RunnerUp
gGiftRibbonDescriptionPart2_RunnerUp: @ 0x085F6065
	.string "じゅんゆうしょう きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart2_RunnerUp) != 0x10
	.error "gGiftRibbonDescriptionPart2_RunnerUp must retain its original byte length"
	.endif
