	@ src/data/script_menu.h:335 gText_RedShard
	.globl sScriptMenuText_RedShard
sScriptMenuText_RedShard: @ 0x085CAC05
	.string "あかいかけら{EOS}"
	.if (. - sScriptMenuText_RedShard) > 0x7
	.error "sScriptMenuText_RedShard may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_RedShard) < 0x7
	.space 0x7 - (. - sScriptMenuText_RedShard)
	.endif

	@ src/data/script_menu.h:336 gText_YellowShard
	.globl sScriptMenuText_YellowShard
sScriptMenuText_YellowShard: @ 0x085CAC0C
	.string "きいろいかけら{EOS}"
	.if (. - sScriptMenuText_YellowShard) > 0x8
	.error "sScriptMenuText_YellowShard may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_YellowShard) < 0x8
	.space 0x8 - (. - sScriptMenuText_YellowShard)
	.endif

	@ src/data/script_menu.h:337 gText_BlueShard
	.globl sScriptMenuText_BlueShard
sScriptMenuText_BlueShard: @ 0x085CAC14
	.string "あおいかけら{EOS}"
	.if (. - sScriptMenuText_BlueShard) > 0x7
	.error "sScriptMenuText_BlueShard may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BlueShard) < 0x7
	.space 0x7 - (. - sScriptMenuText_BlueShard)
	.endif

	@ src/data/script_menu.h:338 gText_GreenShard
	.globl sScriptMenuText_GreenShard
sScriptMenuText_GreenShard: @ 0x085CAC1B
	.string "みどりのかけら{EOS}"
	.if (. - sScriptMenuText_GreenShard) > 0x8
	.error "sScriptMenuText_GreenShard may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_GreenShard) < 0x8
	.space 0x8 - (. - sScriptMenuText_GreenShard)
	.endif
