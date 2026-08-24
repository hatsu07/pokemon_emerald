	@ src/main_menu.c:489 main_menu_line_489
	.globl sScriptMenuText_BunnyHops
sScriptMenuText_BunnyHops: @ 0x085CAB56
	.string "ダニエル{EOS}"
	.if (. - sScriptMenuText_BunnyHops) > 0x5
	.error "sScriptMenuText_BunnyHops may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BunnyHops) < 0x5
	.space 0x5 - (. - sScriptMenuText_BunnyHops)
	.endif
	@ src/data/script_menu.h:237 script_menu_line_237 (+1 aliases)
	.globl sScriptMenuText_Jump
sScriptMenuText_Jump: @ 0x085CAB5B
	.string "ジャンプ{EOS}"
	.if (. - sScriptMenuText_Jump) > 0x5
	.error "sScriptMenuText_Jump may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Jump) < 0x5
	.space 0x5 - (. - sScriptMenuText_Jump)
	.endif
	@ src/data/easy_chat/easy_chat_group_feelings.h:57 gEasyChatWord_Satisfied (+2 aliases)
	.globl sScriptMenuText_Satisfied
sScriptMenuText_Satisfied: @ 0x085CAB60
	.string "まんぞく{EOS}"
	.if (. - sScriptMenuText_Satisfied) > 0x5
	.error "sScriptMenuText_Satisfied may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Satisfied) < 0x5
	.space 0x5 - (. - sScriptMenuText_Satisfied)
	.endif
	@ src/data/script_menu.h:244 script_menu_line_244
	.globl sScriptMenuText_Dissatisfied
sScriptMenuText_Dissatisfied: @ 0x085CAB65
	.string "ふまん{EOS}"
	.if (. - sScriptMenuText_Dissatisfied) > 0x4
	.error "sScriptMenuText_Dissatisfied may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Dissatisfied) < 0x4
	.space 0x4 - (. - sScriptMenuText_Dissatisfied)
	.endif

	@ src/data/script_menu.h:249 script_menu_line_249
	.globl sScriptMenuText_DeepSeaTooth
sScriptMenuText_DeepSeaTooth: @ 0x085CAB69
	.string "しんかいのキバ{EOS}"
	.if (. - sScriptMenuText_DeepSeaTooth) > 0x8
	.error "sScriptMenuText_DeepSeaTooth may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_DeepSeaTooth) < 0x8
	.space 0x8 - (. - sScriptMenuText_DeepSeaTooth)
	.endif

	@ src/data/script_menu.h:250 script_menu_line_250
	.globl sScriptMenuText_DeepSeaScale
sScriptMenuText_DeepSeaScale: @ 0x085CAB71
	.string "しんかいのウロコ{EOS}"
	.if (. - sScriptMenuText_DeepSeaScale) > 0x9
	.error "sScriptMenuText_DeepSeaScale may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_DeepSeaScale) < 0x9
	.space 0x9 - (. - sScriptMenuText_DeepSeaScale)
	.endif

	@ src/data/script_menu.h:256 script_menu_line_256 (+1 aliases)
	.globl sScriptMenuText_BlueFlute2
sScriptMenuText_BlueFlute2: @ 0x085CAB7A
	.string "あおいビードロ{EOS}"
	.if (. - sScriptMenuText_BlueFlute2) > 0x8
	.error "sScriptMenuText_BlueFlute2 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BlueFlute2) < 0x8
	.space 0x8 - (. - sScriptMenuText_BlueFlute2)
	.endif

	@ src/data/script_menu.h:257 script_menu_line_257 (+1 aliases)
	.globl sScriptMenuText_YellowFlute2
sScriptMenuText_YellowFlute2: @ 0x085CAB82
	.string "きいろビードロ{EOS}"
	.if (. - sScriptMenuText_YellowFlute2) > 0x8
	.error "sScriptMenuText_YellowFlute2 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_YellowFlute2) < 0x8
	.space 0x8 - (. - sScriptMenuText_YellowFlute2)
	.endif

	@ src/data/script_menu.h:258 script_menu_line_258 (+1 aliases)
	.globl sScriptMenuText_RedFlute2
sScriptMenuText_RedFlute2: @ 0x085CAB8A
	.string "あかいビードロ{EOS}"
	.if (. - sScriptMenuText_RedFlute2) > 0x8
	.error "sScriptMenuText_RedFlute2 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_RedFlute2) < 0x8
	.space 0x8 - (. - sScriptMenuText_RedFlute2)
	.endif

	@ src/data/script_menu.h:259 script_menu_line_259 (+1 aliases)
	.globl sScriptMenuText_WhiteFlute2
sScriptMenuText_WhiteFlute2: @ 0x085CAB92
	.string "しろいビードロ{EOS}"
	.if (. - sScriptMenuText_WhiteFlute2) > 0x8
	.error "sScriptMenuText_WhiteFlute2 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_WhiteFlute2) < 0x8
	.space 0x8 - (. - sScriptMenuText_WhiteFlute2)
	.endif

	@ src/data/script_menu.h:260 script_menu_line_260 (+1 aliases)
	.globl sScriptMenuText_BlackFlute2
sScriptMenuText_BlackFlute2: @ 0x085CAB9A
	.string "くろいビードロ{EOS}"
	.if (. - sScriptMenuText_BlackFlute2) > 0x8
	.error "sScriptMenuText_BlackFlute2 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BlackFlute2) < 0x8
	.space 0x8 - (. - sScriptMenuText_BlackFlute2)
	.endif
	@ Decoded text from ROM range: offset=0x5CABA2, size=0x7
	.string "ガラスのいす{EOS}"

	@ src/data/script_menu.h:262 script_menu_line_262
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_GlassDesk
sScriptMenuText_GlassDesk: @ 0x085CABA9
	.string "ガラスのつくえ{EOS}"
	.if (. - sScriptMenuText_GlassDesk) != 0x8
	.error "sScriptMenuText_GlassDesk must retain its original byte length"
	.endif
