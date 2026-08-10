	@ src/data/easy_chat/easy_chat_group_speech.h:4 easy_chat_group_speech_line_4
	.globl gText_Rom_575FDC
gText_Rom_575FDC: @ 0x08575FDC
	.string "あのね$"
	.if (. - gText_Rom_575FDC) > 0x4
	.error "gText_Rom_575FDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FDC) < 0x4
	.space 0x4 - (. - gText_Rom_575FDC)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:10 easy_chat_group_speech_line_10
	.globl gText_Rom_575FE0
gText_Rom_575FE0: @ 0x08575FE0
	.string "あんまり$"
	.if (. - gText_Rom_575FE0) > 0x5
	.error "gText_Rom_575FE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FE0) < 0x5
	.space 0x5 - (. - gText_Rom_575FE0)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:16 easy_chat_group_speech_line_16
	.globl gText_Rom_575FE5
gText_Rom_575FE5: @ 0x08575FE5
	.string "いじわる$"
	.if (. - gText_Rom_575FE5) > 0x5
	.error "gText_Rom_575FE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FE5) < 0x5
	.space 0x5 - (. - gText_Rom_575FE5)
	.endif
	@ Decoded text from ROM range: offset=0x575FEA, size=0x6
	.string "うそ$"
	.string "うむ$"

	@ src/data/easy_chat/easy_chat_group_speech.h:34 easy_chat_group_speech_line_34
	.globl gText_Rom_575FF0
gText_Rom_575FF0: @ 0x08575FF0
	.string "おすすめ$"
	.if (. - gText_Rom_575FF0) > 0x5
	.error "gText_Rom_575FF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FF0) < 0x5
	.space 0x5 - (. - gText_Rom_575FF0)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:40 easy_chat_group_speech_line_40
	.globl gText_Rom_575FF5
gText_Rom_575FF5: @ 0x08575FF5
	.string "おばかさん$"
	.if (. - gText_Rom_575FF5) > 0x6
	.error "gText_Rom_575FF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FF5) < 0x6
	.space 0x6 - (. - gText_Rom_575FF5)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:46 easy_chat_group_speech_line_46
	.globl gText_Rom_575FFB
gText_Rom_575FFB: @ 0x08575FFB
	.string "かなり$"
	.if (. - gText_Rom_575FFB) > 0x4
	.error "gText_Rom_575FFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FFB) < 0x4
	.space 0x4 - (. - gText_Rom_575FFB)
	.endif
	@ Decoded text from ROM range: offset=0x575FFF, size=0x3
	.string "から$"

	@ src/data/easy_chat/easy_chat_group_speech.h:58 easy_chat_group_speech_line_58
	.globl gText_Rom_576002
gText_Rom_576002: @ 0x08576002
	.string "きぶん$"
	.if (. - gText_Rom_576002) > 0x4
	.error "gText_Rom_576002 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576002) < 0x4
	.space 0x4 - (. - gText_Rom_576002)
	.endif
	@ analyzed canonical ROM range 0x08576006-0x08576013
	.globl gText_Rom_576006
gText_Rom_576006: @ 0x08576006
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x09, 0x45, 0xFF, 0x0A, 0x0F, 0xFF, 0x0A, 0x14, 0xFF, 0x8C, 0xFF, 0x0B, 0x01, 0xFF
	.globl gText_Rom_576014
gText_Rom_576014: @ 0x08576014
	.string "さっぱり$"
	.if (. - gText_Rom_576014) > 0x5
	.error "gText_Rom_576014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576014) < 0x5
	.space 0x5 - (. - gText_Rom_576014)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:100 easy_chat_group_speech_line_100
	.globl gText_Rom_576019
gText_Rom_576019: @ 0x08576019
	.string "さて$"
	.if (. - gText_Rom_576019) > 0x3
	.error "gText_Rom_576019 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576019) < 0x3
	.space 0x3 - (. - gText_Rom_576019)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:106 easy_chat_group_speech_line_106
	.globl gText_Rom_57601C
gText_Rom_57601C: @ 0x0857601C
	.string "じゅうぶん$"
	.if (. - gText_Rom_57601C) > 0x6
	.error "gText_Rom_57601C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57601C) < 0x6
	.space 0x6 - (. - gText_Rom_57601C)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:112 easy_chat_group_speech_line_112
	.globl gText_Rom_576022
gText_Rom_576022: @ 0x08576022
	.string "すごく$"
	.if (. - gText_Rom_576022) > 0x4
	.error "gText_Rom_576022 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576022) < 0x4
	.space 0x4 - (. - gText_Rom_576022)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:118 easy_chat_group_speech_line_118
	.globl gText_Rom_576026
gText_Rom_576026: @ 0x08576026
	.string "すこしは$"
	.if (. - gText_Rom_576026) > 0x5
	.error "gText_Rom_576026 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576026) < 0x5
	.space 0x5 - (. - gText_Rom_576026)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:124 easy_chat_group_speech_line_124
	.globl gText_Rom_57602B
gText_Rom_57602B: @ 0x0857602B
	.string "ぜったい$"
	.if (. - gText_Rom_57602B) > 0x5
	.error "gText_Rom_57602B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57602B) < 0x5
	.space 0x5 - (. - gText_Rom_57602B)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:130 easy_chat_group_speech_line_130
	.globl gText_Rom_576030
gText_Rom_576030: @ 0x08576030
	.string "それで$"
	.if (. - gText_Rom_576030) > 0x4
	.error "gText_Rom_576030 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576030) < 0x4
	.space 0x4 - (. - gText_Rom_576030)
	.endif
	@ Decoded text from ROM range: offset=0x576034, size=0x3
	.string "だけ$"

	@ src/data/easy_chat/easy_chat_group_speech.h:142 easy_chat_group_speech_line_142
	.globl gText_Rom_576037
gText_Rom_576037: @ 0x08576037
	.string "だって$"
	.if (. - gText_Rom_576037) > 0x4
	.error "gText_Rom_576037 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576037) < 0x4
	.space 0x4 - (. - gText_Rom_576037)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:148 easy_chat_group_speech_line_148
	.globl gText_Rom_57603B
gText_Rom_57603B: @ 0x0857603B
	.string "たぶん$"
	.if (. - gText_Rom_57603B) > 0x4
	.error "gText_Rom_57603B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57603B) < 0x4
	.space 0x4 - (. - gText_Rom_57603B)
	.endif
	@ Decoded text from ROM range: offset=0x57603F, size=0x3
	.string "たら$"

