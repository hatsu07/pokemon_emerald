	@ src/data/text/ribbon_descriptions.h:2 gRibbonDescriptionPart2_Champion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E65
gText_Rom_5F5E65: @ 0x085F5E65
	.string "でんどういり した きねんリボン$"
	.if (. - gText_Rom_5F5E65) != 0x11
	.error "gText_Rom_5F5E65 must retain its original byte length"
	.endif
