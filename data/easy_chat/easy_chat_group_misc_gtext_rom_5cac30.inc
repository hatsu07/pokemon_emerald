	@ src/data/info_viewer.h:25 sInfoText_TitleFrontierRules (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BattleFrontier
sScriptMenuText_BattleFrontier: @ 0x085CAC23
	.string "バトルフロンティア{EOS}"
	.if (. - sScriptMenuText_BattleFrontier) != 0xa
	.error "sScriptMenuText_BattleFrontier must retain its original byte length"
	.endif
	@ Decoded text from ROM range: offset=0x5CAC2D, size=0x3
	.string "みぎ{EOS}"
	@ src/data/easy_chat/easy_chat_group_misc.h:244 easy_chat_group_misc_line_244 (+1 aliases)
	.globl sScriptMenuText_Left
sScriptMenuText_Left: @ 0x085CAC30
	.string "ひだり{EOS}"
	.if (. - sScriptMenuText_Left) > 0x4
	.error "sScriptMenuText_Left may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Left) < 0x4
	.space 0x4 - (. - sScriptMenuText_Left)
	.endif
	@ Decoded text from ROM range: offset=0x5CAC34, size=0x50
	.string "わざマシン32　　1500まい{EOS}"
	.string "わざマシン29　　3500まい{EOS}"
	.string "わざマシン35　　4000まい{EOS}"
	.string "わざマシン24　　4000まい{EOS}"
	.string "わざマシン13　　4000まい{EOS}"
