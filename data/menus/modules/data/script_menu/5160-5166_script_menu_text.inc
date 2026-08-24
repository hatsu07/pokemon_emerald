	.globl gText_Rom_5CABAD
	.set gText_Rom_5CABAD, sScriptMenuText_GlassDesk + 0x4
	@ Decoded text from ROM range: offset=0x5CABB1, size=0x4F
	.string "キモリドール　　　1000まい{EOS}"
	.string "アチャモドール　　1000まい{EOS}"
	.string "ミズゴロウドール　1000まい{EOS}"
	.string "　50まい　　1000円{EOS}"
	.string "500まい　10000円{EOS}"
	.string "ばつぐん{EOS}"

	@ src/data/easy_chat/easy_chat_group_speech.h:10 easy_chat_group_speech_line_10
	.globl sScriptMenuText_NotSoGood
sScriptMenuText_NotSoGood: @ 0x085CAC00
	.string "あんまり{EOS}"
	.if (. - sScriptMenuText_NotSoGood) > 0x5
	.error "sScriptMenuText_NotSoGood may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_NotSoGood) < 0x5
	.space 0x5 - (. - sScriptMenuText_NotSoGood)
	.endif
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
