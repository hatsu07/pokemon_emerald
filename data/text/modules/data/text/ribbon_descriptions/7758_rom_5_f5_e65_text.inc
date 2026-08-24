	@ src/data/text/ribbon_descriptions.h:2 gRibbonDescriptionPart2_Champion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart2_Champion
gRibbonDescriptionPart2_Champion: @ 0x085F5E65
	.string "でんどういり した きねんリボン{EOS}"
	.if (. - gRibbonDescriptionPart2_Champion) != 0x11
	.error "gRibbonDescriptionPart2_Champion must retain its original byte length"
	.endif
