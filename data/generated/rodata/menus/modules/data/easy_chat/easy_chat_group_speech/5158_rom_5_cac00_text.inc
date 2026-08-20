	@ src/data/easy_chat/easy_chat_group_speech.h:10 easy_chat_group_speech_line_10
	.globl gText_Rom_5CAC00
gText_Rom_5CAC00: @ 0x085CAC00
	.string "あんまり{EOS}"
	.if (. - gText_Rom_5CAC00) > 0x5
	.error "gText_Rom_5CAC00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC00) < 0x5
	.space 0x5 - (. - gText_Rom_5CAC00)
	.endif
