	@ src/data/text/gift_ribbon_descriptions.h:45 gGiftRibbonDescriptionPart2_LovedPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6262
gText_Rom_5F6262: @ 0x085F6262
	.string "つけてあげる きねんリボン{EOS}"
	.if (. - gText_Rom_5F6262) != 0xe
	.error "gText_Rom_5F6262 must retain its original byte length"
	.endif
