	@ src/data/info_viewer.h:25 sInfoText_TitleFrontierRules (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAC23
gText_Rom_5CAC23: @ 0x085CAC23
	.string "バトルフロンティア{EOS}"
	.if (. - gText_Rom_5CAC23) != 0xa
	.error "gText_Rom_5CAC23 must retain its original byte length"
	.endif
