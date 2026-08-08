	@ src/data/text/ribbon_descriptions.h:17 gRibbonDescriptionPart2_Artist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5F31
gText_Rom_5F5F31: @ 0x085F5F31
	.string "なった きねんの リボン$"
	.if (. - gText_Rom_5F5F31) != 0xd
	.error "gText_Rom_5F5F31 must retain its original byte length"
	.endif
