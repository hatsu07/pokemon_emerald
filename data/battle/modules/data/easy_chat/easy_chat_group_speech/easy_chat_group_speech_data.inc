	@ src/data/easy_chat/easy_chat_group_speech.h:4 easy_chat_group_speech_line_4
	.globl gText_Rom_575FDC
gText_Rom_575FDC: @ 0x08575FDC
	.string "あのね{EOS}"
	.if (. - gText_Rom_575FDC) > 0x4
	.error "gText_Rom_575FDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FDC) < 0x4
	.space 0x4 - (. - gText_Rom_575FDC)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:10 easy_chat_group_speech_line_10
	.globl gText_Rom_575FE0
gText_Rom_575FE0: @ 0x08575FE0
	.string "あんまり{EOS}"
	.if (. - gText_Rom_575FE0) > 0x5
	.error "gText_Rom_575FE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FE0) < 0x5
	.space 0x5 - (. - gText_Rom_575FE0)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:16 easy_chat_group_speech_line_16
	.globl gText_Rom_575FE5
gText_Rom_575FE5: @ 0x08575FE5
	.string "いじわる{EOS}"
	.if (. - gText_Rom_575FE5) > 0x5
	.error "gText_Rom_575FE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FE5) < 0x5
	.space 0x5 - (. - gText_Rom_575FE5)
	.endif
	@ Decoded text from ROM range: offset=0x575FEA, size=0x6
	.string "うそ{EOS}"
	.string "うむ{EOS}"

	@ src/data/easy_chat/easy_chat_group_speech.h:34 easy_chat_group_speech_line_34
	.globl gText_Rom_575FF0
gText_Rom_575FF0: @ 0x08575FF0
	.string "おすすめ{EOS}"
	.if (. - gText_Rom_575FF0) > 0x5
	.error "gText_Rom_575FF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FF0) < 0x5
	.space 0x5 - (. - gText_Rom_575FF0)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:40 easy_chat_group_speech_line_40
	.globl gText_Rom_575FF5
gText_Rom_575FF5: @ 0x08575FF5
	.string "おばかさん{EOS}"
	.if (. - gText_Rom_575FF5) > 0x6
	.error "gText_Rom_575FF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FF5) < 0x6
	.space 0x6 - (. - gText_Rom_575FF5)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:46 easy_chat_group_speech_line_46
	.globl gText_Rom_575FFB
gText_Rom_575FFB: @ 0x08575FFB
	.string "かなり{EOS}"
	.if (. - gText_Rom_575FFB) > 0x4
	.error "gText_Rom_575FFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FFB) < 0x4
	.space 0x4 - (. - gText_Rom_575FFB)
	.endif
	@ Decoded text from ROM range: offset=0x575FFF, size=0x3
	.string "から{EOS}"

	@ src/data/easy_chat/easy_chat_group_speech.h:58 easy_chat_group_speech_line_58
	.globl gText_Rom_576002
gText_Rom_576002: @ 0x08576002
	.string "きぶん{EOS}"
	.if (. - gText_Rom_576002) > 0x4
	.error "gText_Rom_576002 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576002) < 0x4
	.space 0x4 - (. - gText_Rom_576002)
	.endif

	@ Priority C: Easy Chat / Speech words 10-14.
.Lbatch81_text_start_gText_Rom_576006:
	.globl gEasyChatWord_Speech_Kedo
gEasyChatWord_Speech_Kedo: @ 0x08576006
	.string "けど{EOS}"

	.globl gEasyChatWord_Speech_Koso
gEasyChatWord_Speech_Koso: @ 0x08576009
	.string "こそ{EOS}"

	.globl gEasyChatWord_Speech_Koto
gEasyChatWord_Speech_Koto: @ 0x0857600C
	.string "こと{EOS}"

	.globl gEasyChatWord_Speech_Za
gEasyChatWord_Speech_Za: @ 0x0857600F
	.string "ザ{EOS}"

	.globl gEasyChatWord_Speech_Saa
gEasyChatWord_Speech_Saa: @ 0x08576011
	.string "さあ{EOS}"

	.if (. - gEasyChatWord_Speech_Kedo) != 0xE
	.error "Easy Chat Speech words 10-14 must retain their original 0xE-byte range"
	.endif
	.globl gText_Rom_576014
gText_Rom_576014: @ 0x08576014
	.string "さっぱり{EOS}"
	.if (. - gText_Rom_576014) > 0x5
	.error "gText_Rom_576014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576014) < 0x5
	.space 0x5 - (. - gText_Rom_576014)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:100 easy_chat_group_speech_line_100
	.globl gText_Rom_576019
gText_Rom_576019: @ 0x08576019
	.string "さて{EOS}"
	.if (. - gText_Rom_576019) > 0x3
	.error "gText_Rom_576019 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576019) < 0x3
	.space 0x3 - (. - gText_Rom_576019)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:106 easy_chat_group_speech_line_106
	.globl gText_Rom_57601C
gText_Rom_57601C: @ 0x0857601C
	.string "じゅうぶん{EOS}"
	.if (. - gText_Rom_57601C) > 0x6
	.error "gText_Rom_57601C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57601C) < 0x6
	.space 0x6 - (. - gText_Rom_57601C)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:112 easy_chat_group_speech_line_112
	.globl gText_Rom_576022
gText_Rom_576022: @ 0x08576022
	.string "すごく{EOS}"
	.if (. - gText_Rom_576022) > 0x4
	.error "gText_Rom_576022 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576022) < 0x4
	.space 0x4 - (. - gText_Rom_576022)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:118 easy_chat_group_speech_line_118
	.globl gText_Rom_576026
gText_Rom_576026: @ 0x08576026
	.string "すこしは{EOS}"
	.if (. - gText_Rom_576026) > 0x5
	.error "gText_Rom_576026 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576026) < 0x5
	.space 0x5 - (. - gText_Rom_576026)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:124 easy_chat_group_speech_line_124
	.globl gText_Rom_57602B
gText_Rom_57602B: @ 0x0857602B
	.string "ぜったい{EOS}"
	.if (. - gText_Rom_57602B) > 0x5
	.error "gText_Rom_57602B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57602B) < 0x5
	.space 0x5 - (. - gText_Rom_57602B)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:130 easy_chat_group_speech_line_130
	.globl gText_Rom_576030
gText_Rom_576030: @ 0x08576030
	.string "それで{EOS}"
	.if (. - gText_Rom_576030) > 0x4
	.error "gText_Rom_576030 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576030) < 0x4
	.space 0x4 - (. - gText_Rom_576030)
	.endif
	@ Decoded text from ROM range: offset=0x576034, size=0x3
	.string "だけ{EOS}"

	@ src/data/easy_chat/easy_chat_group_speech.h:142 easy_chat_group_speech_line_142
	.globl gText_Rom_576037
gText_Rom_576037: @ 0x08576037
	.string "だって{EOS}"
	.if (. - gText_Rom_576037) > 0x4
	.error "gText_Rom_576037 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576037) < 0x4
	.space 0x4 - (. - gText_Rom_576037)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:148 easy_chat_group_speech_line_148
	.globl gText_Rom_57603B
gText_Rom_57603B: @ 0x0857603B
	.string "たぶん{EOS}"
	.if (. - gText_Rom_57603B) > 0x4
	.error "gText_Rom_57603B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57603B) < 0x4
	.space 0x4 - (. - gText_Rom_57603B)
	.endif
	@ Decoded text from ROM range: offset=0x57603F, size=0x3
	.string "たら{EOS}"

	@ src/data/easy_chat/easy_chat_group_speech.h:160 easy_chat_group_speech_line_160
	.globl gText_Rom_576042
gText_Rom_576042: @ 0x08576042
	.string "ちょー{EOS}"
	.if (. - gText_Rom_576042) > 0x4
	.error "gText_Rom_576042 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576042) < 0x4
	.space 0x4 - (. - gText_Rom_576042)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:166 easy_chat_group_speech_line_166
	.globl gText_Rom_576046
gText_Rom_576046: @ 0x08576046
	.string "ちょっと{EOS}"
	.if (. - gText_Rom_576046) > 0x5
	.error "gText_Rom_576046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576046) < 0x5
	.space 0x5 - (. - gText_Rom_576046)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:172 easy_chat_group_speech_line_172
	.globl gText_Rom_57604B
gText_Rom_57604B: @ 0x0857604B
	.string "ったら{EOS}"
	.if (. - gText_Rom_57604B) > 0x4
	.error "gText_Rom_57604B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57604B) < 0x4
	.space 0x4 - (. - gText_Rom_57604B)
	.endif
	@ Decoded text from ROM range: offset=0x57604F, size=0x3
	.string "って{EOS}"

	@ src/data/easy_chat/easy_chat_group_speech.h:184 easy_chat_group_speech_line_184
	.globl gText_Rom_576052
gText_Rom_576052: @ 0x08576052
	.string "っていうか{EOS}"
	.if (. - gText_Rom_576052) > 0x6
	.error "gText_Rom_576052 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576052) < 0x6
	.space 0x6 - (. - gText_Rom_576052)
	.endif
	@ Decoded text from ROM range: offset=0x576058, size=0x3
	.string "でも{EOS}"

	@ src/data/easy_chat/easy_chat_group_speech.h:196 easy_chat_group_speech_line_196
	.globl gText_Rom_57605B
gText_Rom_57605B: @ 0x0857605B
	.string "どうしても{EOS}"
	.if (. - gText_Rom_57605B) > 0x6
	.error "gText_Rom_57605B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57605B) < 0x6
	.space 0x6 - (. - gText_Rom_57605B)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:202 easy_chat_group_speech_line_202
	.globl gText_Rom_576061
gText_Rom_576061: @ 0x08576061
	.string "とうぜん{EOS}"
	.if (. - gText_Rom_576061) > 0x5
	.error "gText_Rom_576061 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576061) < 0x5
	.space 0x5 - (. - gText_Rom_576061)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:208 easy_chat_group_speech_line_208
	.globl gText_Rom_576066
gText_Rom_576066: @ 0x08576066
	.string "とりあえず{EOS}"
	.if (. - gText_Rom_576066) > 0x6
	.error "gText_Rom_576066 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576066) < 0x6
	.space 0x6 - (. - gText_Rom_576066)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:214 easy_chat_group_speech_line_214
	.globl gText_Rom_57606C
gText_Rom_57606C: @ 0x0857606C
	.string "なるほど{EOS}"
	.if (. - gText_Rom_57606C) > 0x5
	.error "gText_Rom_57606C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57606C) < 0x5
	.space 0x5 - (. - gText_Rom_57606C)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:220 easy_chat_group_speech_line_220
	.globl gText_Rom_576071
gText_Rom_576071: @ 0x08576071
	.string "なんて{EOS}"
	.if (. - gText_Rom_576071) > 0x4
	.error "gText_Rom_576071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576071) < 0x4
	.space 0x4 - (. - gText_Rom_576071)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:226 easy_chat_group_speech_line_226
	.globl gText_Rom_576075
gText_Rom_576075: @ 0x08576075
	.string "なんでも{EOS}"
	.if (. - gText_Rom_576075) > 0x5
	.error "gText_Rom_576075 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576075) < 0x5
	.space 0x5 - (. - gText_Rom_576075)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:232 easy_chat_group_speech_line_232
	.globl gText_Rom_57607A
gText_Rom_57607A: @ 0x0857607A
	.string "なんとか{EOS}"
	.if (. - gText_Rom_57607A) > 0x5
	.error "gText_Rom_57607A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57607A) < 0x5
	.space 0x5 - (. - gText_Rom_57607A)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:238 easy_chat_group_speech_line_238
	.globl gText_Rom_57607F
gText_Rom_57607F: @ 0x0857607F
	.string "なんとなく{EOS}"
	.if (. - gText_Rom_57607F) > 0x6
	.error "gText_Rom_57607F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57607F) < 0x6
	.space 0x6 - (. - gText_Rom_57607F)
	.endif
	@ Decoded text from ROM range: offset=0x576085, size=0x6
	.string "には{EOS}"
	.string "にも{EOS}"

	@ src/data/easy_chat/easy_chat_group_speech.h:256 easy_chat_group_speech_line_256
	.globl gText_Rom_57608B
gText_Rom_57608B: @ 0x0857608B
	.string "バッチリ{EOS}"
	.if (. - gText_Rom_57608B) > 0x5
	.error "gText_Rom_57608B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57608B) < 0x5
	.space 0x5 - (. - gText_Rom_57608B)
	.endif
	@ Decoded text from ROM range: offset=0x576090, size=0x3
	.string "ほど{EOS}"

	@ src/data/easy_chat/easy_chat_group_speech.h:268 easy_chat_group_speech_line_268
	.globl gText_Rom_576093
gText_Rom_576093: @ 0x08576093
	.string "ほんと{EOS}"
	.if (. - gText_Rom_576093) > 0x4
	.error "gText_Rom_576093 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576093) < 0x4
	.space 0x4 - (. - gText_Rom_576093)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:274 easy_chat_group_speech_line_274
	.globl gText_Rom_576097
gText_Rom_576097: @ 0x08576097
	.string "まさに{EOS}"
	.if (. - gText_Rom_576097) > 0x4
	.error "gText_Rom_576097 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576097) < 0x4
	.space 0x4 - (. - gText_Rom_576097)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:280 easy_chat_group_speech_line_280
	.globl gText_Rom_57609B
gText_Rom_57609B: @ 0x0857609B
	.string "マジ{EOS}"
	.if (. - gText_Rom_57609B) > 0x3
	.error "gText_Rom_57609B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57609B) < 0x3
	.space 0x3 - (. - gText_Rom_57609B)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:286 easy_chat_group_speech_line_286
	.globl gText_Rom_57609E
gText_Rom_57609E: @ 0x0857609E
	.string "まったく{EOS}"
	.if (. - gText_Rom_57609E) > 0x5
	.error "gText_Rom_57609E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57609E) < 0x5
	.space 0x5 - (. - gText_Rom_57609E)
	.endif
	@ Decoded text from ROM range: offset=0x5760A3, size=0x3
	.string "まで{EOS}"

	@ src/data/easy_chat/easy_chat_group_speech.h:298 easy_chat_group_speech_line_298
	.globl gText_Rom_5760A6
gText_Rom_5760A6: @ 0x085760A6
	.string "まるで{EOS}"
	.if (. - gText_Rom_5760A6) > 0x4
	.error "gText_Rom_5760A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760A6) < 0x4
	.space 0x4 - (. - gText_Rom_5760A6)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:304 easy_chat_group_speech_line_304
	.globl gText_Rom_5760AA
gText_Rom_5760AA: @ 0x085760AA
	.string "ムード{EOS}"
	.if (. - gText_Rom_5760AA) > 0x4
	.error "gText_Rom_5760AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760AA) < 0x4
	.space 0x4 - (. - gText_Rom_5760AA)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:310 easy_chat_group_speech_line_310
	.globl gText_Rom_5760AE
gText_Rom_5760AE: @ 0x085760AE
	.string "むしろ{EOS}"
	.if (. - gText_Rom_5760AE) > 0x4
	.error "gText_Rom_5760AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760AE) < 0x4
	.space 0x4 - (. - gText_Rom_5760AE)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:316 easy_chat_group_speech_line_316
	.globl gText_Rom_5760B2
gText_Rom_5760B2: @ 0x085760B2
	.string "めっぽう{EOS}"
	.if (. - gText_Rom_5760B2) > 0x5
	.error "gText_Rom_5760B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760B2) < 0x5
	.space 0x5 - (. - gText_Rom_5760B2)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:322 easy_chat_group_speech_line_322
	.globl gText_Rom_5760B7
gText_Rom_5760B7: @ 0x085760B7
	.string "モード{EOS}"
	.if (. - gText_Rom_5760B7) > 0x4
	.error "gText_Rom_5760B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760B7) < 0x4
	.space 0x4 - (. - gText_Rom_5760B7)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:328 easy_chat_group_speech_line_328
	.globl gText_Rom_5760BB
gText_Rom_5760BB: @ 0x085760BB
	.string "もっと{EOS}"
	.if (. - gText_Rom_5760BB) > 0x4
	.error "gText_Rom_5760BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760BB) < 0x4
	.space 0x4 - (. - gText_Rom_5760BB)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:334 easy_chat_group_speech_line_334
	.globl gText_Rom_5760BF
gText_Rom_5760BF: @ 0x085760BF
	.string "もはや{EOS}"
	.if (. - gText_Rom_5760BF) > 0x4
	.error "gText_Rom_5760BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760BF) < 0x4
	.space 0x4 - (. - gText_Rom_5760BF)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:340 easy_chat_group_speech_line_340
	.globl gText_Rom_5760C3
gText_Rom_5760C3: @ 0x085760C3
	.string "やっと{EOS}"
	.if (. - gText_Rom_5760C3) > 0x4
	.error "gText_Rom_5760C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760C3) < 0x4
	.space 0x4 - (. - gText_Rom_5760C3)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:346 easy_chat_group_speech_line_346
	.globl gText_Rom_5760C7
gText_Rom_5760C7: @ 0x085760C7
	.string "やっぱり{EOS}"
	.if (. - gText_Rom_5760C7) > 0x5
	.error "gText_Rom_5760C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760C7) < 0x5
	.space 0x5 - (. - gText_Rom_5760C7)
	.endif
	@ analyzed canonical ROM range 0x085760CC-0x085763A3
	.globl gText_Rom_5760CC
gText_Rom_5760CC: @ 0x085760CC
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x8 bytes
	.byte 0x26, 0x28, 0xFF, 0x2A, 0x46, 0xFF, 0x00, 0x00
	.globl gEasyChatGroup_Speech
gEasyChatGroup_Speech: @ 0x085760D4
	easy_chat_word_info gText_Rom_575FDC, 0, 1 @ word 0
	easy_chat_word_info gText_Rom_575FE0, 1, 1 @ word 1
	easy_chat_word_info gText_Rom_575FE5, 2, 1 @ word 2
	easy_chat_word_info 0x08575FEA, 3, 1 @ word 3
	easy_chat_word_info 0x08575FED, 4, 1 @ word 4
	easy_chat_word_info gText_Rom_575FF0, 5, 1 @ word 5
	easy_chat_word_info gText_Rom_575FF5, 6, 1 @ word 6
	easy_chat_word_info gText_Rom_575FFB, 7, 1 @ word 7
	easy_chat_word_info 0x08575FFF, 8, 1 @ word 8
	easy_chat_word_info gText_Rom_576002, 9, 1 @ word 9
	easy_chat_word_info gEasyChatWord_Speech_Kedo, 10, 1 @ word 10
	easy_chat_word_info gEasyChatWord_Speech_Koso, 11, 1 @ word 11
	easy_chat_word_info gEasyChatWord_Speech_Koto, 12, 1 @ word 12
	easy_chat_word_info gEasyChatWord_Speech_Za, 13, 1 @ word 13
	easy_chat_word_info gEasyChatWord_Speech_Saa, 14, 1 @ word 14
	easy_chat_word_info gText_Rom_576014, 15, 1 @ word 15
	easy_chat_word_info gText_Rom_576019, 16, 1 @ word 16
	easy_chat_word_info gText_Rom_57601C, 17, 1 @ word 17
	easy_chat_word_info gText_Rom_576022, 18, 1 @ word 18
	easy_chat_word_info gText_Rom_576026, 19, 1 @ word 19
	easy_chat_word_info gText_Rom_57602B, 20, 1 @ word 20
	easy_chat_word_info gText_Rom_576030, 21, 1 @ word 21
	easy_chat_word_info 0x08576034, 22, 1 @ word 22
	easy_chat_word_info gText_Rom_576037, 23, 1 @ word 23
	easy_chat_word_info gText_Rom_57603B, 24, 1 @ word 24
	easy_chat_word_info 0x0857603F, 25, 1 @ word 25
	easy_chat_word_info gText_Rom_576042, 26, 1 @ word 26
	easy_chat_word_info gText_Rom_576046, 27, 1 @ word 27
	easy_chat_word_info gText_Rom_57604B, 28, 1 @ word 28
	easy_chat_word_info 0x0857604F, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_576052, 30, 1 @ word 30
	easy_chat_word_info 0x08576058, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_57605B, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_576061, 33, 1 @ word 33
	easy_chat_word_info gText_Rom_576066, 34, 1 @ word 34
	easy_chat_word_info gText_Rom_57606C, 35, 1 @ word 35
	easy_chat_word_info gText_Rom_576071, 36, 1 @ word 36
	easy_chat_word_info gText_Rom_576075, 37, 1 @ word 37
	easy_chat_word_info gText_Rom_57607A, 38, 1 @ word 38
	easy_chat_word_info gText_Rom_57607F, 39, 1 @ word 39
	easy_chat_word_info 0x08576085, 40, 1 @ word 40
	easy_chat_word_info 0x08576088, 41, 1 @ word 41
	easy_chat_word_info gText_Rom_57608B, 42, 1 @ word 42
	easy_chat_word_info 0x08576090, 43, 1 @ word 43
	easy_chat_word_info gText_Rom_576093, 44, 1 @ word 44
	easy_chat_word_info gText_Rom_576097, 45, 1 @ word 45
	easy_chat_word_info gText_Rom_57609B, 46, 1 @ word 46
	easy_chat_word_info gText_Rom_57609E, 47, 1 @ word 47
	easy_chat_word_info 0x085760A3, 48, 1 @ word 48
	easy_chat_word_info gText_Rom_5760A6, 49, 1 @ word 49
	easy_chat_word_info gText_Rom_5760AA, 50, 1 @ word 50
	easy_chat_word_info gText_Rom_5760AE, 51, 1 @ word 51
	easy_chat_word_info gText_Rom_5760B2, 52, 1 @ word 52
	easy_chat_word_info gText_Rom_5760B7, 53, 1 @ word 53
	easy_chat_word_info gText_Rom_5760BB, 54, 1 @ word 54
	easy_chat_word_info gText_Rom_5760BF, 55, 1 @ word 55
	easy_chat_word_info gText_Rom_5760C3, 56, 1 @ word 56
	easy_chat_word_info gText_Rom_5760C7, 57, 1 @ word 57
	easy_chat_word_info gText_Rom_5760CC, 58, 1 @ word 58
	easy_chat_word_info 0x085760CF, 59, 1 @ word 59
