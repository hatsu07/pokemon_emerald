	@ src/data/text/gift_ribbon_descriptions.h:5 gGiftRibbonDescriptionPart2_RunnerUp
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6065
gText_Rom_5F6065: @ 0x085F6065
	.string "じゅんゆうしょう きねんリボン{EOS}"
	.if (. - gText_Rom_5F6065) != 0x10
	.error "gText_Rom_5F6065 must retain its original byte length"
	.endif
