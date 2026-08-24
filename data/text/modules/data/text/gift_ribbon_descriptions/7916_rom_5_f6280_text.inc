	@ src/data/text/gift_ribbon_descriptions.h:47 gGiftRibbonDescriptionPart2_LoveForPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart2_LoveForPokemon
gGiftRibbonDescriptionPart2_LoveForPokemon: @ 0x085F6280
	.string "しょうめいする リボン{EOS}"
	.if (. - gGiftRibbonDescriptionPart2_LoveForPokemon) != 0xc
	.error "gGiftRibbonDescriptionPart2_LoveForPokemon must retain its original byte length"
	.endif
