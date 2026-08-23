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
