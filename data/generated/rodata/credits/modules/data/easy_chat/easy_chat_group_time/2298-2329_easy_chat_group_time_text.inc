	@ src/data/easy_chat/easy_chat_group_time.h:118 easy_chat_group_time_line_118 (+1 aliases)
	.globl gText_Rom_577C94
gText_Rom_577C94: @ 0x08577C94
	.string "じかん$"
	.if (. - gText_Rom_577C94) > 0x4
	.error "gText_Rom_577C94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C94) < 0x4
	.space 0x4 - (. - gText_Rom_577C94)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:124 easy_chat_group_time_line_124
	.globl gText_Rom_577C98
gText_Rom_577C98: @ 0x08577C98
	.string "しゅうりょう$"
	.if (. - gText_Rom_577C98) > 0x7
	.error "gText_Rom_577C98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C98) < 0x7
	.space 0x7 - (. - gText_Rom_577C98)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:130 easy_chat_group_time_line_130 (+1 aliases)
	.globl gText_Rom_577C9F
gText_Rom_577C9F: @ 0x08577C9F
	.string "すいようび$"
	.if (. - gText_Rom_577C9F) > 0x6
	.error "gText_Rom_577C9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C9F) < 0x6
	.space 0x6 - (. - gText_Rom_577C9F)
	.endif
	@ Decoded text from ROM range: offset=0x577CA5, size=0x3
	.string "すぐ$"

	@ src/data/easy_chat/easy_chat_group_time.h:142 easy_chat_group_time_line_142
	.globl gText_Rom_577CA8
gText_Rom_577CA8: @ 0x08577CA8
	.string "スタート$"
	.if (. - gText_Rom_577CA8) > 0x5
	.error "gText_Rom_577CA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CA8) < 0x5
	.space 0x5 - (. - gText_Rom_577CA8)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:148 easy_chat_group_time_line_148
	.globl gText_Rom_577CAD
gText_Rom_577CAD: @ 0x08577CAD
	.string "ずっと$"
	.if (. - gText_Rom_577CAD) > 0x4
	.error "gText_Rom_577CAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CAD) < 0x4
	.space 0x4 - (. - gText_Rom_577CAD)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:154 easy_chat_group_time_line_154
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_577CB1
gText_Rom_577CB1: @ 0x08577CB1
	.string "ストップ$"
	.if (. - gText_Rom_577CB1) != 0x5
	.error "gText_Rom_577CB1 must retain its original byte length"
	.endif
	.globl gText_Rom_577CB2
	.set gText_Rom_577CB2, gText_Rom_577CB1 + 0x1

	@ src/data/easy_chat/easy_chat_group_time.h:160 easy_chat_group_time_line_160
	.globl gText_Rom_577CB6
gText_Rom_577CB6: @ 0x08577CB6
	.string "そのうち$"
	.if (. - gText_Rom_577CB6) > 0x5
	.error "gText_Rom_577CB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CB6) < 0x5
	.space 0x5 - (. - gText_Rom_577CB6)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:166 easy_chat_group_time_line_166
	.globl gText_Rom_577CBB
gText_Rom_577CBB: @ 0x08577CBB
	.string "ついに$"
	.if (. - gText_Rom_577CBB) > 0x4
	.error "gText_Rom_577CBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CBB) < 0x4
	.space 0x4 - (. - gText_Rom_577CBB)
	.endif
	@ Decoded text from ROM range: offset=0x577CBF, size=0x6
	.string "つぎ$"
	.string "とき$"

	@ src/data/easy_chat/easy_chat_group_time.h:184 easy_chat_group_time_line_184 (+1 aliases)
	.globl gText_Rom_577CC5
gText_Rom_577CC5: @ 0x08577CC5
	.string "どようび$"
	.if (. - gText_Rom_577CC5) > 0x5
	.error "gText_Rom_577CC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CC5) < 0x5
	.space 0x5 - (. - gText_Rom_577CC5)
	.endif
	@ Decoded text from ROM range: offset=0x577CCA, size=0x3
	.string "なつ$"

	@ src/data/easy_chat/easy_chat_group_time.h:196 easy_chat_group_time_line_196 (+1 aliases)
	.globl gText_Rom_577CCD
gText_Rom_577CCD: @ 0x08577CCD
	.string "にちようび$"
	.if (. - gText_Rom_577CCD) > 0x6
	.error "gText_Rom_577CCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CCD) < 0x6
	.space 0x6 - (. - gText_Rom_577CCD)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:202 easy_chat_group_time_line_202
	.globl gText_Rom_577CD3
gText_Rom_577CD3: @ 0x08577CD3
	.string "はじめ$"
	.if (. - gText_Rom_577CD3) > 0x4
	.error "gText_Rom_577CD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CD3) < 0x4
	.space 0x4 - (. - gText_Rom_577CD3)
	.endif
	@ Decoded text from ROM range: offset=0x577CD7, size=0x3
	.string "はる$"

	@ src/data/easy_chat/easy_chat_group_time.h:214 easy_chat_group_time_line_214 (+3 aliases)
	.globl gText_Rom_577CDA
gText_Rom_577CDA: @ 0x08577CDA
	.string "ひる$"
	.if (. - gText_Rom_577CDA) > 0x3
	.error "gText_Rom_577CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CDA) < 0x3
	.space 0x3 - (. - gText_Rom_577CDA)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:220 easy_chat_group_time_line_220
	.globl gText_Rom_577CDD
gText_Rom_577CDD: @ 0x08577CDD
	.string "ふゆ$"
	.if (. - gText_Rom_577CDD) > 0x3
	.error "gText_Rom_577CDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CDD) < 0x3
	.space 0x3 - (. - gText_Rom_577CDD)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:226 easy_chat_group_time_line_226
	.globl gText_Rom_577CE0
gText_Rom_577CE0: @ 0x08577CE0
	.string "まいにち$"
	.if (. - gText_Rom_577CE0) > 0x5
	.error "gText_Rom_577CE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CE0) < 0x5
	.space 0x5 - (. - gText_Rom_577CE0)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:232 easy_chat_group_time_line_232
	.globl gText_Rom_577CE5
gText_Rom_577CE5: @ 0x08577CE5
	.string "むかし$"
	.if (. - gText_Rom_577CE5) > 0x4
	.error "gText_Rom_577CE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CE5) < 0x4
	.space 0x4 - (. - gText_Rom_577CE5)
	.endif
	@ Decoded text from ROM range: offset=0x577CE9, size=0x3
	.string "もう$"

	@ src/data/easy_chat/easy_chat_group_time.h:244 easy_chat_group_time_line_244
	.globl gText_Rom_577CEC
gText_Rom_577CEC: @ 0x08577CEC
	.string "もうすぐ$"
	.if (. - gText_Rom_577CEC) > 0x5
	.error "gText_Rom_577CEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CEC) < 0x5
	.space 0x5 - (. - gText_Rom_577CEC)
	.endif
