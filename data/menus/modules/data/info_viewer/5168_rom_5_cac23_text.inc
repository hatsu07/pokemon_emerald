	@ src/data/info_viewer.h:25 sInfoText_TitleFrontierRules (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BattleFrontier
sScriptMenuText_BattleFrontier: @ 0x085CAC23
	.string "バトルフロンティア{EOS}"
	.if (. - sScriptMenuText_BattleFrontier) != 0xa
	.error "sScriptMenuText_BattleFrontier must retain its original byte length"
	.endif
