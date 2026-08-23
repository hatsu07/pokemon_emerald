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
