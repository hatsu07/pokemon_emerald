
	@ src/data/easy_chat/easy_chat_group_greetings.h:106 easy_chat_group_greetings_line_106 (+1 aliases)
	.globl gText_Rom_5754B5
gText_Rom_5754B5: @ 0x085754B5
	.string "サンキュー{EOS}"
	.if (. - gText_Rom_5754B5) > 0x6
	.error "gText_Rom_5754B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754B5) < 0x6
	.space 0x6 - (. - gText_Rom_5754B5)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:112 easy_chat_group_greetings_line_112
	.globl gText_Rom_5754BB
gText_Rom_5754BB: @ 0x085754BB
	.string "さんじょう{EOS}"
	.if (. - gText_Rom_5754BB) > 0x6
	.error "gText_Rom_5754BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754BB) < 0x6
	.space 0x6 - (. - gText_Rom_5754BB)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:118 easy_chat_group_greetings_line_118
	.globl gText_Rom_5754C1
gText_Rom_5754C1: @ 0x085754C1
	.string "しっけい{EOS}"
	.if (. - gText_Rom_5754C1) > 0x5
	.error "gText_Rom_5754C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754C1) < 0x5
	.space 0x5 - (. - gText_Rom_5754C1)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:124 easy_chat_group_greetings_line_124
	.globl gText_Rom_5754C6
gText_Rom_5754C6: @ 0x085754C6
	.string "しつれい{EOS}"
	.if (. - gText_Rom_5754C6) > 0x5
	.error "gText_Rom_5754C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754C6) < 0x5
	.space 0x5 - (. - gText_Rom_5754C6)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:130 easy_chat_group_greetings_line_130
	.globl gText_Rom_5754CB
gText_Rom_5754CB: @ 0x085754CB
	.string "じゃーね{EOS}"
	.if (. - gText_Rom_5754CB) > 0x5
	.error "gText_Rom_5754CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754CB) < 0x5
	.space 0x5 - (. - gText_Rom_5754CB)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:136 easy_chat_group_greetings_line_136
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5754D0
gText_Rom_5754D0: @ 0x085754D0
	.string "すみません{EOS}"
	.if (. - gText_Rom_5754D0) != 0x6
	.error "gText_Rom_5754D0 must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:142 easy_chat_group_greetings_line_142
	.globl gText_Rom_5754D6
gText_Rom_5754D6: @ 0x085754D6
	.string "それじゃ{EOS}"
	.if (. - gText_Rom_5754D6) > 0x5
	.error "gText_Rom_5754D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754D6) < 0x5
	.space 0x5 - (. - gText_Rom_5754D6)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:148 easy_chat_group_greetings_line_148
	.globl gText_Rom_5754DB
gText_Rom_5754DB: @ 0x085754DB
	.string "どうぞ{EOS}"
	.if (. - gText_Rom_5754DB) > 0x4
	.error "gText_Rom_5754DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754DB) < 0x4
	.space 0x4 - (. - gText_Rom_5754DB)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:154 easy_chat_group_greetings_line_154
	.globl gText_Rom_5754DF
gText_Rom_5754DF: @ 0x085754DF
	.string "どうも{EOS}"
	.if (. - gText_Rom_5754DF) > 0x4
	.error "gText_Rom_5754DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754DF) < 0x4
	.space 0x4 - (. - gText_Rom_5754DF)
	.endif
	@ Decoded text from ROM range: offset=0x5754E3, size=0x3
	.string "なあ{EOS}"

	@ src/data/easy_chat/easy_chat_group_greetings.h:166 easy_chat_group_greetings_line_166
	.globl gText_Rom_5754E6
gText_Rom_5754E6: @ 0x085754E6
	.string "なんじゃ{EOS}"
	.if (. - gText_Rom_5754E6) > 0x5
	.error "gText_Rom_5754E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754E6) < 0x5
	.space 0x5 - (. - gText_Rom_5754E6)
	.endif
	@ Decoded text from ROM range: offset=0x5754EB, size=0x3
	.string "ねえ{EOS}"

	@ src/data/easy_chat/easy_chat_group_greetings.h:178 easy_chat_group_greetings_line_178
	.globl gText_Rom_5754EE
gText_Rom_5754EE: @ 0x085754EE
	.string "ノー{EOS}"
	.if (. - gText_Rom_5754EE) > 0x3
	.error "gText_Rom_5754EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754EE) < 0x3
	.space 0x3 - (. - gText_Rom_5754EE)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:184 easy_chat_group_greetings_line_184
	.globl gText_Rom_5754F1
gText_Rom_5754F1: @ 0x085754F1
	.string "ハーイ{EOS}"
	.if (. - gText_Rom_5754F1) > 0x4
	.error "gText_Rom_5754F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754F1) < 0x4
	.space 0x4 - (. - gText_Rom_5754F1)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:190 easy_chat_group_greetings_line_190
	.globl gText_Rom_5754F5
gText_Rom_5754F5: @ 0x085754F5
	.string "はいはい{EOS}"
	.if (. - gText_Rom_5754F5) > 0x5
	.error "gText_Rom_5754F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754F5) < 0x5
	.space 0x5 - (. - gText_Rom_5754F5)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:196 easy_chat_group_greetings_line_196
	.globl gText_Rom_5754FA
gText_Rom_5754FA: @ 0x085754FA
	.string "バイバイ{EOS}"
	.if (. - gText_Rom_5754FA) > 0x5
	.error "gText_Rom_5754FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754FA) < 0x5
	.space 0x5 - (. - gText_Rom_5754FA)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:202 easy_chat_group_greetings_line_202
	.globl gText_Rom_5754FF
gText_Rom_5754FF: @ 0x085754FF
	.string "はじめまして{EOS}"
	.if (. - gText_Rom_5754FF) > 0x7
	.error "gText_Rom_5754FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754FF) < 0x7
	.space 0x7 - (. - gText_Rom_5754FF)
	.endif
	@ Decoded text from ROM range: offset=0x575506, size=0x3
	.string "ヘイ{EOS}"

