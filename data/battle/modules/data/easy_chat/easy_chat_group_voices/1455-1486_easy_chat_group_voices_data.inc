	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_575C03
gText_Rom_575C03: @ 0x08575C03
	.string "………{EOS}"
	.if (. - gText_Rom_575C03) > 0x4
	.error "gText_Rom_575C03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C03) < 0x4
	.space 0x4 - (. - gText_Rom_575C03)
	.endif

	@ Priority C: Easy Chat / Voices word 7.
.Lbatch81_text_start_gText_Rom_575C07:
	.globl gEasyChatWord_Voices_Dash
gEasyChatWord_Voices_Dash: @ 0x08575C07
	.string "ー{EOS}"
	.if (. - gEasyChatWord_Voices_Dash) != 0x2
	.error "gEasyChatWord_Voices_Dash must retain its original 2-byte slot"
	.endif
	.globl gText_Rom_575C09
gText_Rom_575C09: @ 0x08575C09
	.string "ーーー{EOS}"
	.if (. - gText_Rom_575C09) > 0x4
	.error "gText_Rom_575C09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C09) < 0x4
	.space 0x4 - (. - gText_Rom_575C09)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:58 easy_chat_group_voices_line_58
	.globl gText_Rom_575C0D
gText_Rom_575C0D: @ 0x08575C0D
	.string "あーあ{EOS}"
	.if (. - gText_Rom_575C0D) > 0x4
	.error "gText_Rom_575C0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C0D) < 0x4
	.space 0x4 - (. - gText_Rom_575C0D)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:64 easy_chat_group_voices_line_64
	.globl gText_Rom_575C11
gText_Rom_575C11: @ 0x08575C11
	.string "あーん{EOS}"
	.if (. - gText_Rom_575C11) > 0x4
	.error "gText_Rom_575C11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C11) < 0x4
	.space 0x4 - (. - gText_Rom_575C11)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:70 easy_chat_group_voices_line_70
	.globl gText_Rom_575C15
gText_Rom_575C15: @ 0x08575C15
	.string "あはは{EOS}"
	.if (. - gText_Rom_575C15) > 0x4
	.error "gText_Rom_575C15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C15) < 0x4
	.space 0x4 - (. - gText_Rom_575C15)
	.endif
	@ Decoded text from ROM range: offset=0x575C19, size=0x9
	.string "あら{EOS}"
	.string "いえ{EOS}"
	.string "うう{EOS}"

	@ src/data/easy_chat/easy_chat_group_voices.h:94 easy_chat_group_voices_line_94
	.globl gText_Rom_575C22
gText_Rom_575C22: @ 0x08575C22
	.string "うーん{EOS}"
	.if (. - gText_Rom_575C22) > 0x4
	.error "gText_Rom_575C22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C22) < 0x4
	.space 0x4 - (. - gText_Rom_575C22)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:100 easy_chat_group_voices_line_100
	.globl gText_Rom_575C26
gText_Rom_575C26: @ 0x08575C26
	.string "うおー!{EOS}"
	.if (. - gText_Rom_575C26) > 0x5
	.error "gText_Rom_575C26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C26) < 0x5
	.space 0x5 - (. - gText_Rom_575C26)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:106 easy_chat_group_voices_line_106
	.globl gText_Rom_575C2B
gText_Rom_575C2B: @ 0x08575C2B
	.string "うおりゃー{EOS}"
	.if (. - gText_Rom_575C2B) > 0x6
	.error "gText_Rom_575C2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C2B) < 0x6
	.space 0x6 - (. - gText_Rom_575C2B)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:112 easy_chat_group_voices_line_112
	.globl gText_Rom_575C31
gText_Rom_575C31: @ 0x08575C31
	.string "うひょー{EOS}"
	.if (. - gText_Rom_575C31) > 0x5
	.error "gText_Rom_575C31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C31) < 0x5
	.space 0x5 - (. - gText_Rom_575C31)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:118 easy_chat_group_voices_line_118
	.globl gText_Rom_575C36
gText_Rom_575C36: @ 0x08575C36
	.string "うふふ{EOS}"
	.if (. - gText_Rom_575C36) > 0x4
	.error "gText_Rom_575C36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C36) < 0x4
	.space 0x4 - (. - gText_Rom_575C36)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:124 easy_chat_group_voices_line_124
	.globl gText_Rom_575C3A
gText_Rom_575C3A: @ 0x08575C3A
	.string "うふん{EOS}"
	.if (. - gText_Rom_575C3A) > 0x4
	.error "gText_Rom_575C3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C3A) < 0x4
	.space 0x4 - (. - gText_Rom_575C3A)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:130 easy_chat_group_voices_line_130
	.globl gText_Rom_575C3E
gText_Rom_575C3E: @ 0x08575C3E
	.string "うわー{EOS}"
	.if (. - gText_Rom_575C3E) > 0x4
	.error "gText_Rom_575C3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C3E) < 0x4
	.space 0x4 - (. - gText_Rom_575C3E)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:136 easy_chat_group_voices_line_136
	.globl gText_Rom_575C42
gText_Rom_575C42: @ 0x08575C42
	.string "うわーん{EOS}"
	.if (. - gText_Rom_575C42) > 0x5
	.error "gText_Rom_575C42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C42) < 0x5
	.space 0x5 - (. - gText_Rom_575C42)
	.endif
	@ Decoded text from ROM range: offset=0x575C47, size=0x6
	.string "ええ{EOS}"
	.string "えー{EOS}"

	@ src/data/easy_chat/easy_chat_group_voices.h:154 easy_chat_group_voices_line_154
	.globl gText_Rom_575C4D
gText_Rom_575C4D: @ 0x08575C4D
	.string "えーん{EOS}"
	.if (. - gText_Rom_575C4D) > 0x4
	.error "gText_Rom_575C4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C4D) < 0x4
	.space 0x4 - (. - gText_Rom_575C4D)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:160 easy_chat_group_voices_line_160
	.globl gText_Rom_575C51
gText_Rom_575C51: @ 0x08575C51
	.string "えへへ{EOS}"
	.if (. - gText_Rom_575C51) > 0x4
	.error "gText_Rom_575C51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C51) < 0x4
	.space 0x4 - (. - gText_Rom_575C51)
	.endif
	@ Decoded text from ROM range: offset=0x575C55, size=0x9
	.string "おい{EOS}"
	.string "おお{EOS}"
	.string "オー{EOS}"

	@ src/data/easy_chat/easy_chat_group_voices.h:184 easy_chat_group_voices_line_184
	.globl gText_Rom_575C5E
gText_Rom_575C5E: @ 0x08575C5E
	.string "おっと{EOS}"
	.if (. - gText_Rom_575C5E) > 0x4
	.error "gText_Rom_575C5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C5E) < 0x4
	.space 0x4 - (. - gText_Rom_575C5E)
	.endif

