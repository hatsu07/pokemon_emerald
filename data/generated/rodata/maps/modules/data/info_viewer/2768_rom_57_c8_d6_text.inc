	@ src/data/info_viewer.h:25 sInfoText_TitleFrontierRules (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C8D6
gText_Rom_57C8D6: @ 0x0857C8D6
	.string "バトルフロンティア$"
	.if (. - gText_Rom_57C8D6) != 0xa
	.error "gText_Rom_57C8D6 must retain its original byte length"
	.endif
