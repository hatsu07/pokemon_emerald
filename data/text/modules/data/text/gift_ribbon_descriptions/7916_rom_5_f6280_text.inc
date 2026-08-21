	@ src/data/text/gift_ribbon_descriptions.h:47 gGiftRibbonDescriptionPart2_LoveForPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6280
gText_Rom_5F6280: @ 0x085F6280
	.string "しょうめいする リボン{EOS}"
	.if (. - gText_Rom_5F6280) != 0xc
	.error "gText_Rom_5F6280 must retain its original byte length"
	.endif
