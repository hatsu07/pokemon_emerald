	@ src/data/text/ribbon_descriptions.h:17 gRibbonDescriptionPart2_Artist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart2_Artist
gRibbonDescriptionPart2_Artist: @ 0x085F5F31
	.string "なった きねんの リボン{EOS}"
	.if (. - gRibbonDescriptionPart2_Artist) != 0xd
	.error "gRibbonDescriptionPart2_Artist must retain its original byte length"
	.endif
