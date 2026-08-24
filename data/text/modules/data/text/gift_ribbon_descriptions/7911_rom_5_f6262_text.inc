	@ src/data/text/gift_ribbon_descriptions.h:45 gGiftRibbonDescriptionPart2_LovedPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart2_LovedPokemon
gGiftRibbonDescriptionPart2_LovedPokemon: @ 0x085F6262
	.string "つけてあげる きねんリボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart2_LovedPokemon) != 0xe
	.error "gGiftRibbonDescriptionPart2_LovedPokemon must retain its original byte length"
	.endif
