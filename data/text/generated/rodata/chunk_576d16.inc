	@ src/data/easy_chat/easy_chat_group_conditions.h:196 easy_chat_group_conditions_line_196
	.globl gText_Rom_576D16
gText_Rom_576D16: @ 0x08576D16
	.string "しかたない$"
	.if (. - gText_Rom_576D16) > 0x6
	.error "gText_Rom_576D16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D16) < 0x6
	.space 0x6 - (. - gText_Rom_576D16)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:202 easy_chat_group_conditions_line_202
	.globl gText_Rom_576D1C
gText_Rom_576D1C: @ 0x08576D1C
	.string "すごい$"
	.if (. - gText_Rom_576D1C) > 0x4
	.error "gText_Rom_576D1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D1C) < 0x4
	.space 0x4 - (. - gText_Rom_576D1C)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:208 easy_chat_group_conditions_line_208
	.globl gText_Rom_576D20
gText_Rom_576D20: @ 0x08576D20
	.string "すごすぎ$"
	.if (. - gText_Rom_576D20) > 0x5
	.error "gText_Rom_576D20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D20) < 0x5
	.space 0x5 - (. - gText_Rom_576D20)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:214 easy_chat_group_conditions_line_214
	.globl gText_Rom_576D25
gText_Rom_576D25: @ 0x08576D25
	.string "すてき$"
	.if (. - gText_Rom_576D25) > 0x4
	.error "gText_Rom_576D25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D25) < 0x4
	.space 0x4 - (. - gText_Rom_576D25)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:220 easy_chat_group_conditions_line_220
	.globl gText_Rom_576D29
gText_Rom_576D29: @ 0x08576D29
	.string "たいした$"
	.if (. - gText_Rom_576D29) > 0x5
	.error "gText_Rom_576D29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D29) < 0x5
	.space 0x5 - (. - gText_Rom_576D29)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:226 easy_chat_group_conditions_line_226
	.globl gText_Rom_576D2E
gText_Rom_576D2E: @ 0x08576D2E
	.string "たかい$"
	.if (. - gText_Rom_576D2E) > 0x4
	.error "gText_Rom_576D2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D2E) < 0x4
	.space 0x4 - (. - gText_Rom_576D2E)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:232 easy_chat_group_conditions_line_232
	.globl gText_Rom_576D32
gText_Rom_576D32: @ 0x08576D32
	.string "ただしい$"
	.if (. - gText_Rom_576D32) > 0x5
	.error "gText_Rom_576D32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D32) < 0x5
	.space 0x5 - (. - gText_Rom_576D32)
	.endif
	.incbin "baserom.gba", 0x576d37, 0x3

	@ src/data/easy_chat/easy_chat_group_conditions.h:244 easy_chat_group_conditions_line_244
	.globl gText_Rom_576D3A
gText_Rom_576D3A: @ 0x08576D3A
	.string "ちいさい$"
	.if (. - gText_Rom_576D3A) > 0x5
	.error "gText_Rom_576D3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D3A) < 0x5
	.space 0x5 - (. - gText_Rom_576D3A)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:250 easy_chat_group_conditions_line_250
	.globl gText_Rom_576D3F
gText_Rom_576D3F: @ 0x08576D3F
	.string "ちがう$"
	.if (. - gText_Rom_576D3F) > 0x4
	.error "gText_Rom_576D3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D3F) < 0x4
	.space 0x4 - (. - gText_Rom_576D3F)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:256 easy_chat_group_conditions_line_256
	.globl gText_Rom_576D43
gText_Rom_576D43: @ 0x08576D43
	.string "つかれ$"
	.if (. - gText_Rom_576D43) > 0x4
	.error "gText_Rom_576D43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D43) < 0x4
	.space 0x4 - (. - gText_Rom_576D43)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:262 easy_chat_group_conditions_line_262
	.globl gText_Rom_576D47
gText_Rom_576D47: @ 0x08576D47
	.string "とくい$"
	.if (. - gText_Rom_576D47) > 0x4
	.error "gText_Rom_576D47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D47) < 0x4
	.space 0x4 - (. - gText_Rom_576D47)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:268 easy_chat_group_conditions_line_268
	.globl gText_Rom_576D4B
gText_Rom_576D4B: @ 0x08576D4B
	.string "トップ$"
	.if (. - gText_Rom_576D4B) > 0x4
	.error "gText_Rom_576D4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D4B) < 0x4
	.space 0x4 - (. - gText_Rom_576D4B)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:274 easy_chat_group_conditions_line_274
	.globl gText_Rom_576D4F
gText_Rom_576D4F: @ 0x08576D4F
	.string "とまらない$"
	.if (. - gText_Rom_576D4F) > 0x6
	.error "gText_Rom_576D4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D4F) < 0x6
	.space 0x6 - (. - gText_Rom_576D4F)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:280 easy_chat_group_conditions_line_280
	.globl gText_Rom_576D55
gText_Rom_576D55: @ 0x08576D55
	.string "とんでもない$"
	.if (. - gText_Rom_576D55) > 0x7
	.error "gText_Rom_576D55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D55) < 0x7
	.space 0x7 - (. - gText_Rom_576D55)
	.endif
	.incbin "baserom.gba", 0x576d5c, 0x3

	@ src/data/easy_chat/easy_chat_group_conditions.h:292 easy_chat_group_conditions_line_292
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576D5F
gText_Rom_576D5F: @ 0x08576D5F
	.string "なかった$"
	.if (. - gText_Rom_576D5F) != 0x5
	.error "gText_Rom_576D5F must retain its original byte length"
	.endif
	.globl gText_Rom_576D60
	.set gText_Rom_576D60, gText_Rom_576D5F + 0x1
	.incbin "baserom.gba", 0x576d64, 0x3

	@ src/data/easy_chat/easy_chat_group_conditions.h:304 easy_chat_group_conditions_line_304
	.globl gText_Rom_576D67
gText_Rom_576D67: @ 0x08576D67
	.string "なって$"
	.if (. - gText_Rom_576D67) > 0x4
	.error "gText_Rom_576D67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D67) < 0x4
	.space 0x4 - (. - gText_Rom_576D67)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:310 easy_chat_group_conditions_line_310
	.globl gText_Rom_576D6B
gText_Rom_576D6B: @ 0x08576D6B
	.string "ぬるい$"
	.if (. - gText_Rom_576D6B) > 0x4
	.error "gText_Rom_576D6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D6B) < 0x4
	.space 0x4 - (. - gText_Rom_576D6B)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:316 easy_chat_group_conditions_line_316 (+1 aliases)
	.globl gText_Rom_576D6F
gText_Rom_576D6F: @ 0x08576D6F
	.string "はやい$"
	.if (. - gText_Rom_576D6F) > 0x4
	.error "gText_Rom_576D6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D6F) < 0x4
	.space 0x4 - (. - gText_Rom_576D6F)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:322 easy_chat_group_conditions_line_322
	.globl gText_Rom_576D73
gText_Rom_576D73: @ 0x08576D73
	.string "ひくい$"
	.if (. - gText_Rom_576D73) > 0x4
	.error "gText_Rom_576D73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D73) < 0x4
	.space 0x4 - (. - gText_Rom_576D73)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:328 easy_chat_group_conditions_line_328
	.globl gText_Rom_576D77
gText_Rom_576D77: @ 0x08576D77
	.string "ひどい$"
	.if (. - gText_Rom_576D77) > 0x4
	.error "gText_Rom_576D77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D77) < 0x4
	.space 0x4 - (. - gText_Rom_576D77)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:334 easy_chat_group_conditions_line_334
	.globl gText_Rom_576D7B
gText_Rom_576D7B: @ 0x08576D7B
	.string "ひとりで$"
	.if (. - gText_Rom_576D7B) > 0x5
	.error "gText_Rom_576D7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D7B) < 0x5
	.space 0x5 - (. - gText_Rom_576D7B)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:340 easy_chat_group_conditions_line_340
	.globl gText_Rom_576D80
gText_Rom_576D80: @ 0x08576D80
	.string "ひま$"
	.if (. - gText_Rom_576D80) > 0x3
	.error "gText_Rom_576D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D80) < 0x3
	.space 0x3 - (. - gText_Rom_576D80)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:346 easy_chat_group_conditions_line_346
	.globl gText_Rom_576D83
gText_Rom_576D83: @ 0x08576D83
	.string "ひみつ$"
	.if (. - gText_Rom_576D83) > 0x4
	.error "gText_Rom_576D83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D83) < 0x4
	.space 0x4 - (. - gText_Rom_576D83)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:352 easy_chat_group_conditions_line_352
	.globl gText_Rom_576D87
gText_Rom_576D87: @ 0x08576D87
	.string "ふしぎ$"
	.if (. - gText_Rom_576D87) > 0x4
	.error "gText_Rom_576D87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D87) < 0x4
	.space 0x4 - (. - gText_Rom_576D87)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:358 easy_chat_group_conditions_line_358
	.globl gText_Rom_576D8B
gText_Rom_576D8B: @ 0x08576D8B
	.string "ふそく$"
	.if (. - gText_Rom_576D8B) > 0x4
	.error "gText_Rom_576D8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D8B) < 0x4
	.space 0x4 - (. - gText_Rom_576D8B)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:364 easy_chat_group_conditions_line_364
	.globl gText_Rom_576D8F
gText_Rom_576D8F: @ 0x08576D8F
	.string "ベスト$"
	.if (. - gText_Rom_576D8F) > 0x4
	.error "gText_Rom_576D8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D8F) < 0x4
	.space 0x4 - (. - gText_Rom_576D8F)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:370 easy_chat_group_conditions_line_370
	.globl gText_Rom_576D93
gText_Rom_576D93: @ 0x08576D93
	.string "へた$"
	.if (. - gText_Rom_576D93) > 0x3
	.error "gText_Rom_576D93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D93) < 0x3
	.space 0x3 - (. - gText_Rom_576D93)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:376 easy_chat_group_conditions_line_376
	.globl gText_Rom_576D96
gText_Rom_576D96: @ 0x08576D96
	.string "まちがって$"
	.if (. - gText_Rom_576D96) > 0x6
	.error "gText_Rom_576D96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D96) < 0x6
	.space 0x6 - (. - gText_Rom_576D96)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:382 easy_chat_group_conditions_line_382
	.globl gText_Rom_576D9C
gText_Rom_576D9C: @ 0x08576D9C
	.string "やさしい$"
	.if (. - gText_Rom_576D9C) > 0x5
	.error "gText_Rom_576D9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D9C) < 0x5
	.space 0x5 - (. - gText_Rom_576D9C)
	.endif
	.incbin "baserom.gba", 0x576da1, 0x3

	@ src/data/easy_chat/easy_chat_group_conditions.h:394 easy_chat_group_conditions_line_394
	.globl gText_Rom_576DA4
gText_Rom_576DA4: @ 0x08576DA4
	.string "よわって$"
	.if (. - gText_Rom_576DA4) > 0x5
	.error "gText_Rom_576DA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576DA4) < 0x5
	.space 0x5 - (. - gText_Rom_576DA4)
	.endif
	.incbin "baserom.gba", 0x576da9, 0x3

	@ src/data/easy_chat/easy_chat_group_conditions.h:406 easy_chat_group_conditions_line_406
	.globl gText_Rom_576DAC
gText_Rom_576DAC: @ 0x08576DAC
	.string "らしい$"
	.if (. - gText_Rom_576DAC) > 0x4
	.error "gText_Rom_576DAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576DAC) < 0x4
	.space 0x4 - (. - gText_Rom_576DAC)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:412 easy_chat_group_conditions_line_412
	.globl gText_Rom_576DB0
gText_Rom_576DB0: @ 0x08576DB0
	.string "わるい$"
	.if (. - gText_Rom_576DB0) > 0x4
	.error "gText_Rom_576DB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576DB0) < 0x4
	.space 0x4 - (. - gText_Rom_576DB0)
	.endif
	.incbin "baserom.gba", 0x576db4, 0x33f

	@ src/data/easy_chat/easy_chat_group_actions.h:10 easy_chat_group_actions_line_10
	.globl gText_Rom_5770F3
gText_Rom_5770F3: @ 0x085770F3
	.string "あきらめ$"
	.if (. - gText_Rom_5770F3) > 0x5
	.error "gText_Rom_5770F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5770F3) < 0x5
	.space 0x5 - (. - gText_Rom_5770F3)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5770F8
gText_Rom_5770F8: @ 0x085770F8
	.string "あげる$"
	.if (. - gText_Rom_5770F8) > 0x4
	.error "gText_Rom_5770F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5770F8) < 0x4
	.space 0x4 - (. - gText_Rom_5770F8)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:22 easy_chat_group_actions_line_22
	.globl gText_Rom_5770FC
gText_Rom_5770FC: @ 0x085770FC
	.string "あせる$"
	.if (. - gText_Rom_5770FC) > 0x4
	.error "gText_Rom_5770FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5770FC) < 0x4
	.space 0x4 - (. - gText_Rom_5770FC)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:28 easy_chat_group_actions_line_28
	.globl gText_Rom_577100
gText_Rom_577100: @ 0x08577100
	.string "あそび$"
	.if (. - gText_Rom_577100) > 0x4
	.error "gText_Rom_577100 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577100) < 0x4
	.space 0x4 - (. - gText_Rom_577100)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:34 easy_chat_group_actions_line_34
	.globl gText_Rom_577104
gText_Rom_577104: @ 0x08577104
	.string "あそぶ$"
	.if (. - gText_Rom_577104) > 0x4
	.error "gText_Rom_577104 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577104) < 0x4
	.space 0x4 - (. - gText_Rom_577104)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:40 easy_chat_group_actions_line_40
	.globl gText_Rom_577108
gText_Rom_577108: @ 0x08577108
	.string "あつめ$"
	.if (. - gText_Rom_577108) > 0x4
	.error "gText_Rom_577108 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577108) < 0x4
	.space 0x4 - (. - gText_Rom_577108)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:46 easy_chat_group_actions_line_46
	.globl gText_Rom_57710C
gText_Rom_57710C: @ 0x0857710C
	.string "あるき$"
	.if (. - gText_Rom_57710C) > 0x4
	.error "gText_Rom_57710C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57710C) < 0x4
	.space 0x4 - (. - gText_Rom_57710C)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:52 easy_chat_group_actions_line_52
	.globl gText_Rom_577110
gText_Rom_577110: @ 0x08577110
	.string "あるく$"
	.if (. - gText_Rom_577110) > 0x4
	.error "gText_Rom_577110 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577110) < 0x4
	.space 0x4 - (. - gText_Rom_577110)
	.endif
	.incbin "baserom.gba", 0x577114, 0x6

	@ src/data/easy_chat/easy_chat_group_actions.h:70 easy_chat_group_actions_line_70
	.globl gText_Rom_57711A
gText_Rom_57711A: @ 0x0857711A
	.string "いって$"
	.if (. - gText_Rom_57711A) > 0x4
	.error "gText_Rom_57711A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57711A) < 0x4
	.space 0x4 - (. - gText_Rom_57711A)
	.endif
	.incbin "baserom.gba", 0x57711e, 0x3

	@ src/data/easy_chat/easy_chat_group_actions.h:82 easy_chat_group_actions_line_82
	.globl gText_Rom_577121
gText_Rom_577121: @ 0x08577121
	.string "おこり$"
	.if (. - gText_Rom_577121) > 0x4
	.error "gText_Rom_577121 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577121) < 0x4
	.space 0x4 - (. - gText_Rom_577121)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:88 easy_chat_group_actions_line_88
	.globl gText_Rom_577125
gText_Rom_577125: @ 0x08577125
	.string "おこる$"
	.if (. - gText_Rom_577125) > 0x4
	.error "gText_Rom_577125 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577125) < 0x4
	.space 0x4 - (. - gText_Rom_577125)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:94 easy_chat_group_actions_line_94
	.globl gText_Rom_577129
gText_Rom_577129: @ 0x08577129
	.string "おしえ$"
	.if (. - gText_Rom_577129) > 0x4
	.error "gText_Rom_577129 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577129) < 0x4
	.space 0x4 - (. - gText_Rom_577129)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:100 easy_chat_group_actions_line_100
	.globl gText_Rom_57712D
gText_Rom_57712D: @ 0x0857712D
	.string "おしえて$"
	.if (. - gText_Rom_57712D) > 0x5
	.error "gText_Rom_57712D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57712D) < 0x5
	.space 0x5 - (. - gText_Rom_57712D)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:106 easy_chat_group_actions_line_106
	.globl gText_Rom_577132
gText_Rom_577132: @ 0x08577132
	.string "おねがい$"
	.if (. - gText_Rom_577132) > 0x5
	.error "gText_Rom_577132 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577132) < 0x5
	.space 0x5 - (. - gText_Rom_577132)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:112 easy_chat_group_actions_line_112
	.globl gText_Rom_577137
gText_Rom_577137: @ 0x08577137
	.string "おぼえ$"
	.if (. - gText_Rom_577137) > 0x4
	.error "gText_Rom_577137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577137) < 0x4
	.space 0x4 - (. - gText_Rom_577137)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:118 easy_chat_group_actions_line_118
	.globl gText_Rom_57713B
gText_Rom_57713B: @ 0x0857713B
	.string "かえる$"
	.if (. - gText_Rom_57713B) > 0x4
	.error "gText_Rom_57713B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57713B) < 0x4
	.space 0x4 - (. - gText_Rom_57713B)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:124 easy_chat_group_actions_line_124
	.globl gText_Rom_57713F
gText_Rom_57713F: @ 0x0857713F
	.string "かたり$"
	.if (. - gText_Rom_57713F) > 0x4
	.error "gText_Rom_57713F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57713F) < 0x4
	.space 0x4 - (. - gText_Rom_57713F)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:130 easy_chat_group_actions_line_130 (+1 aliases)
	.globl gText_Rom_577143
gText_Rom_577143: @ 0x08577143
	.string "がまん$"
	.if (. - gText_Rom_577143) > 0x4
	.error "gText_Rom_577143 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577143) < 0x4
	.space 0x4 - (. - gText_Rom_577143)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:136 easy_chat_group_actions_line_136
	.globl gText_Rom_577147
gText_Rom_577147: @ 0x08577147
	.string "かわいがって$"
	.if (. - gText_Rom_577147) > 0x7
	.error "gText_Rom_577147 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577147) < 0x7
	.space 0x7 - (. - gText_Rom_577147)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:142 easy_chat_group_actions_line_142
	.globl gText_Rom_57714E
gText_Rom_57714E: @ 0x0857714E
	.string "きいて$"
	.if (. - gText_Rom_57714E) > 0x4
	.error "gText_Rom_57714E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57714E) < 0x4
	.space 0x4 - (. - gText_Rom_57714E)
	.endif
	.incbin "baserom.gba", 0x577152, 0x3

	@ src/data/easy_chat/easy_chat_group_actions.h:154 easy_chat_group_actions_line_154
	.globl gText_Rom_577155
gText_Rom_577155: @ 0x08577155
	.string "きたえ$"
	.if (. - gText_Rom_577155) > 0x4
	.error "gText_Rom_577155 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577155) < 0x4
	.space 0x4 - (. - gText_Rom_577155)
	.endif
	.incbin "baserom.gba", 0x577159, 0x6

	@ src/data/easy_chat/easy_chat_group_actions.h:172 easy_chat_group_actions_line_172
	.globl gText_Rom_57715F
gText_Rom_57715F: @ 0x0857715F
	.string "こない$"
	.if (. - gText_Rom_57715F) > 0x4
	.error "gText_Rom_57715F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57715F) < 0x4
	.space 0x4 - (. - gText_Rom_57715F)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:178 easy_chat_group_actions_line_178
	.globl gText_Rom_577163
gText_Rom_577163: @ 0x08577163
	.string "さがし$"
	.if (. - gText_Rom_577163) > 0x4
	.error "gText_Rom_577163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577163) < 0x4
	.space 0x4 - (. - gText_Rom_577163)
	.endif
	.incbin "baserom.gba", 0x577167, 0x3

	@ src/data/easy_chat/easy_chat_group_actions.h:190 easy_chat_group_actions_line_190
	.globl gText_Rom_57716A
gText_Rom_57716A: @ 0x0857716A
	.string "さわぎ$"
	.if (. - gText_Rom_57716A) > 0x4
	.error "gText_Rom_57716A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57716A) < 0x4
	.space 0x4 - (. - gText_Rom_57716A)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:196 easy_chat_group_actions_line_196
	.globl gText_Rom_57716E
gText_Rom_57716E: @ 0x0857716E
	.string "しって$"
	.if (. - gText_Rom_57716E) > 0x4
	.error "gText_Rom_57716E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57716E) < 0x4
	.space 0x4 - (. - gText_Rom_57716E)
	.endif
	.incbin "baserom.gba", 0x577172, 0x3

	@ src/data/easy_chat/easy_chat_group_actions.h:208 easy_chat_group_actions_line_208
	.globl gText_Rom_577175
gText_Rom_577175: @ 0x08577175
	.string "しない$"
	.if (. - gText_Rom_577175) > 0x4
	.error "gText_Rom_577175 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577175) < 0x4
	.space 0x4 - (. - gText_Rom_577175)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_577179
gText_Rom_577179: @ 0x08577179
	.string "しまう$"
	.if (. - gText_Rom_577179) > 0x4
	.error "gText_Rom_577179 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577179) < 0x4
	.space 0x4 - (. - gText_Rom_577179)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:220 easy_chat_group_actions_line_220
	.globl gText_Rom_57717D
gText_Rom_57717D: @ 0x0857717D
	.string "じまん$"
	.if (. - gText_Rom_57717D) > 0x4
	.error "gText_Rom_57717D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57717D) < 0x4
	.space 0x4 - (. - gText_Rom_57717D)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:226 easy_chat_group_actions_line_226
	.globl gText_Rom_577181
gText_Rom_577181: @ 0x08577181
	.string "しらない$"
	.if (. - gText_Rom_577181) > 0x5
	.error "gText_Rom_577181 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577181) < 0x5
	.space 0x5 - (. - gText_Rom_577181)
	.endif
	.incbin "baserom.gba", 0x577186, 0x3

	@ src/data/easy_chat/easy_chat_group_actions.h:238 easy_chat_group_actions_line_238
	.globl gText_Rom_577189
gText_Rom_577189: @ 0x08577189
	.string "しんじて$"
	.if (. - gText_Rom_577189) > 0x5
	.error "gText_Rom_577189 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577189) < 0x5
	.space 0x5 - (. - gText_Rom_577189)
	.endif
	.incbin "baserom.gba", 0x57718e, 0x3

	@ src/data/easy_chat/easy_chat_group_actions.h:250 easy_chat_group_actions_line_250
	.globl gText_Rom_577191
gText_Rom_577191: @ 0x08577191
	.string "たべる$"
	.if (. - gText_Rom_577191) > 0x4
	.error "gText_Rom_577191 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577191) < 0x4
	.space 0x4 - (. - gText_Rom_577191)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:256 easy_chat_group_actions_line_256 (+1 aliases)
	.globl gText_Rom_577195
gText_Rom_577195: @ 0x08577195
	.string "つかう$"
	.if (. - gText_Rom_577195) > 0x4
	.error "gText_Rom_577195 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577195) < 0x4
	.space 0x4 - (. - gText_Rom_577195)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:262 easy_chat_group_actions_line_262
	.globl gText_Rom_577199
gText_Rom_577199: @ 0x08577199
	.string "つかえ$"
	.if (. - gText_Rom_577199) > 0x4
	.error "gText_Rom_577199 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577199) < 0x4
	.space 0x4 - (. - gText_Rom_577199)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:268 easy_chat_group_actions_line_268
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57719D
gText_Rom_57719D: @ 0x0857719D
	.string "つかって$"
	.if (. - gText_Rom_57719D) != 0x5
	.error "gText_Rom_57719D must retain its original byte length"
	.endif
	.globl gText_Rom_57719E
	.set gText_Rom_57719E, gText_Rom_57719D + 0x1

	@ src/data/easy_chat/easy_chat_group_actions.h:274 easy_chat_group_actions_line_274
	.globl gText_Rom_5771A2
gText_Rom_5771A2: @ 0x085771A2
	.string "できない$"
	.if (. - gText_Rom_5771A2) > 0x5
	.error "gText_Rom_5771A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771A2) < 0x5
	.space 0x5 - (. - gText_Rom_5771A2)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:280 easy_chat_group_actions_line_280
	.globl gText_Rom_5771A7
gText_Rom_5771A7: @ 0x085771A7
	.string "できる$"
	.if (. - gText_Rom_5771A7) > 0x4
	.error "gText_Rom_5771A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771A7) < 0x4
	.space 0x4 - (. - gText_Rom_5771A7)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:286 easy_chat_group_actions_line_286
	.globl gText_Rom_5771AB
gText_Rom_5771AB: @ 0x085771AB
	.string "でない$"
	.if (. - gText_Rom_5771AB) > 0x4
	.error "gText_Rom_5771AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771AB) < 0x4
	.space 0x4 - (. - gText_Rom_5771AB)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:292 easy_chat_group_actions_line_292 (+2 aliases)
	.globl gText_Rom_5771AF
gText_Rom_5771AF: @ 0x085771AF
	.string "でる$"
	.if (. - gText_Rom_5771AF) > 0x3
	.error "gText_Rom_5771AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771AF) < 0x3
	.space 0x3 - (. - gText_Rom_5771AF)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:298 easy_chat_group_actions_line_298
	.globl gText_Rom_5771B2
gText_Rom_5771B2: @ 0x085771B2
	.string "なげる$"
	.if (. - gText_Rom_5771B2) > 0x4
	.error "gText_Rom_5771B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771B2) < 0x4
	.space 0x4 - (. - gText_Rom_5771B2)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:304 easy_chat_group_actions_line_304
	.globl gText_Rom_5771B6
gText_Rom_5771B6: @ 0x085771B6
	.string "なやみ$"
	.if (. - gText_Rom_5771B6) > 0x4
	.error "gText_Rom_5771B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771B6) < 0x4
	.space 0x4 - (. - gText_Rom_5771B6)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:310 easy_chat_group_actions_line_310
	.globl gText_Rom_5771BA
gText_Rom_5771BA: @ 0x085771BA
	.string "ねられ$"
	.if (. - gText_Rom_5771BA) > 0x4
	.error "gText_Rom_5771BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771BA) < 0x4
	.space 0x4 - (. - gText_Rom_5771BA)
	.endif
	.incbin "baserom.gba", 0x5771be, 0x3

	@ src/data/easy_chat/easy_chat_group_actions.h:322 easy_chat_group_actions_line_322
	.globl gText_Rom_5771C1
gText_Rom_5771C1: @ 0x085771C1
	.string "のがし$"
	.if (. - gText_Rom_5771C1) > 0x4
	.error "gText_Rom_5771C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771C1) < 0x4
	.space 0x4 - (. - gText_Rom_5771C1)
	.endif
	.incbin "baserom.gba", 0x5771c5, 0x3

	@ src/data/easy_chat/easy_chat_group_actions.h:334 easy_chat_group_actions_line_334
	.globl gText_Rom_5771C8
gText_Rom_5771C8: @ 0x085771C8
	.string "はしり$"
	.if (. - gText_Rom_5771C8) > 0x4
	.error "gText_Rom_5771C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771C8) < 0x4
	.space 0x4 - (. - gText_Rom_5771C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:340 easy_chat_group_actions_line_340
	.globl gText_Rom_5771CC
gText_Rom_5771CC: @ 0x085771CC
	.string "はしる$"
	.if (. - gText_Rom_5771CC) > 0x4
	.error "gText_Rom_5771CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771CC) < 0x4
	.space 0x4 - (. - gText_Rom_5771CC)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:346 easy_chat_group_actions_line_346
	.globl gText_Rom_5771D0
gText_Rom_5771D0: @ 0x085771D0
	.string "はたらき$"
	.if (. - gText_Rom_5771D0) > 0x5
	.error "gText_Rom_5771D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771D0) < 0x5
	.space 0x5 - (. - gText_Rom_5771D0)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:352 easy_chat_group_actions_line_352
	.globl gText_Rom_5771D5
gText_Rom_5771D5: @ 0x085771D5
	.string "はたらく$"
	.if (. - gText_Rom_5771D5) > 0x5
	.error "gText_Rom_5771D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771D5) < 0x5
	.space 0x5 - (. - gText_Rom_5771D5)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:358 easy_chat_group_actions_line_358
	.globl gText_Rom_5771DA
gText_Rom_5771DA: @ 0x085771DA
	.string "はなし$"
	.if (. - gText_Rom_5771DA) > 0x4
	.error "gText_Rom_5771DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771DA) < 0x4
	.space 0x4 - (. - gText_Rom_5771DA)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:364 easy_chat_group_actions_line_364
	.globl gText_Rom_5771DE
gText_Rom_5771DE: @ 0x085771DE
	.string "はなす$"
	.if (. - gText_Rom_5771DE) > 0x4
	.error "gText_Rom_5771DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771DE) < 0x4
	.space 0x4 - (. - gText_Rom_5771DE)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:370 easy_chat_group_actions_line_370
	.globl gText_Rom_5771E2
gText_Rom_5771E2: @ 0x085771E2
	.string "はまって$"
	.if (. - gText_Rom_5771E2) > 0x5
	.error "gText_Rom_5771E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771E2) < 0x5
	.space 0x5 - (. - gText_Rom_5771E2)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:376 easy_chat_group_actions_line_376
	.globl gText_Rom_5771E7
gText_Rom_5771E7: @ 0x085771E7
	.string "ぶつけ$"
	.if (. - gText_Rom_5771E7) > 0x4
	.error "gText_Rom_5771E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771E7) < 0x4
	.space 0x4 - (. - gText_Rom_5771E7)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:382 easy_chat_group_actions_line_382
	.globl gText_Rom_5771EB
gText_Rom_5771EB: @ 0x085771EB
	.string "ふり$"
	.if (. - gText_Rom_5771EB) > 0x3
	.error "gText_Rom_5771EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771EB) < 0x3
	.space 0x3 - (. - gText_Rom_5771EB)
	.endif
	.incbin "baserom.gba", 0x5771ee, 0x3

	@ src/data/easy_chat/easy_chat_group_actions.h:394 easy_chat_group_actions_line_394
	.globl gText_Rom_5771F1
gText_Rom_5771F1: @ 0x085771F1
	.string "まくり$"
	.if (. - gText_Rom_5771F1) > 0x4
	.error "gText_Rom_5771F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771F1) < 0x4
	.space 0x4 - (. - gText_Rom_5771F1)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:400 easy_chat_group_actions_line_400
	.globl gText_Rom_5771F5
gText_Rom_5771F5: @ 0x085771F5
	.string "みせて$"
	.if (. - gText_Rom_5771F5) > 0x4
	.error "gText_Rom_5771F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771F5) < 0x4
	.space 0x4 - (. - gText_Rom_5771F5)
	.endif
	.incbin "baserom.gba", 0x5771f9, 0x6

	@ src/data/easy_chat/easy_chat_group_actions.h:418 easy_chat_group_actions_line_418
	.globl gText_Rom_5771FF
gText_Rom_5771FF: @ 0x085771FF
	.string "めざす$"
	.if (. - gText_Rom_5771FF) > 0x4
	.error "gText_Rom_5771FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771FF) < 0x4
	.space 0x4 - (. - gText_Rom_5771FF)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:424 easy_chat_group_actions_line_424
	.globl gText_Rom_577203
gText_Rom_577203: @ 0x08577203
	.string "もって$"
	.if (. - gText_Rom_577203) > 0x4
	.error "gText_Rom_577203 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577203) < 0x4
	.space 0x4 - (. - gText_Rom_577203)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:430 easy_chat_group_actions_line_430
	.globl gText_Rom_577207
gText_Rom_577207: @ 0x08577207
	.string "ゆずる$"
	.if (. - gText_Rom_577207) > 0x4
	.error "gText_Rom_577207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577207) < 0x4
	.space 0x4 - (. - gText_Rom_577207)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:436 easy_chat_group_actions_line_436
	.globl gText_Rom_57720B
gText_Rom_57720B: @ 0x0857720B
	.string "ゆるす$"
	.if (. - gText_Rom_57720B) > 0x4
	.error "gText_Rom_57720B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57720B) < 0x4
	.space 0x4 - (. - gText_Rom_57720B)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:442 easy_chat_group_actions_line_442
	.globl gText_Rom_57720F
gText_Rom_57720F: @ 0x0857720F
	.string "ゆるせ$"
	.if (. - gText_Rom_57720F) > 0x4
	.error "gText_Rom_57720F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57720F) < 0x4
	.space 0x4 - (. - gText_Rom_57720F)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:448 easy_chat_group_actions_line_448
	.globl gText_Rom_577213
gText_Rom_577213: @ 0x08577213
	.string "られない$"
	.if (. - gText_Rom_577213) > 0x5
	.error "gText_Rom_577213 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577213) < 0x5
	.space 0x5 - (. - gText_Rom_577213)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:454 easy_chat_group_actions_line_454
	.globl gText_Rom_577218
gText_Rom_577218: @ 0x08577218
	.string "られる$"
	.if (. - gText_Rom_577218) > 0x4
	.error "gText_Rom_577218 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577218) < 0x4
	.space 0x4 - (. - gText_Rom_577218)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:460 easy_chat_group_actions_line_460
	.globl gText_Rom_57721C
gText_Rom_57721C: @ 0x0857721C
	.string "わかる$"
	.if (. - gText_Rom_57721C) > 0x4
	.error "gText_Rom_57721C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57721C) < 0x4
	.space 0x4 - (. - gText_Rom_57721C)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:466 easy_chat_group_actions_line_466
	.globl gText_Rom_577220
gText_Rom_577220: @ 0x08577220
	.string "わすれ$"
	.if (. - gText_Rom_577220) > 0x4
	.error "gText_Rom_577220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577220) < 0x4
	.space 0x4 - (. - gText_Rom_577220)
	.endif
	.incbin "baserom.gba", 0x577224, 0x3a8

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:4 easy_chat_group_lifestyle_line_4
	.globl gText_Rom_5775CC
gText_Rom_5775CC: @ 0x085775CC
	.string "アルバイト$"
	.if (. - gText_Rom_5775CC) > 0x6
	.error "gText_Rom_5775CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775CC) < 0x6
	.space 0x6 - (. - gText_Rom_5775CC)
	.endif
	.incbin "baserom.gba", 0x5775d2, 0x3

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:16 easy_chat_group_lifestyle_line_16
	.globl gText_Rom_5775D5
gText_Rom_5775D5: @ 0x085775D5
	.string "おかね$"
	.if (. - gText_Rom_5775D5) > 0x4
	.error "gText_Rom_5775D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775D5) < 0x4
	.space 0x4 - (. - gText_Rom_5775D5)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:22 easy_chat_group_lifestyle_line_22 (+1 aliases)
	.globl gText_Rom_5775D9
gText_Rom_5775D9: @ 0x085775D9
	.string "おこづかい$"
	.if (. - gText_Rom_5775D9) > 0x6
	.error "gText_Rom_5775D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775D9) < 0x6
	.space 0x6 - (. - gText_Rom_5775D9)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:28 easy_chat_group_lifestyle_line_28
	.globl gText_Rom_5775DF
gText_Rom_5775DF: @ 0x085775DF
	.string "おふろ$"
	.if (. - gText_Rom_5775DF) > 0x4
	.error "gText_Rom_5775DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775DF) < 0x4
	.space 0x4 - (. - gText_Rom_5775DF)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:34 easy_chat_group_lifestyle_line_34 (+1 aliases)
	.globl gText_Rom_5775E3
gText_Rom_5775E3: @ 0x085775E3
	.string "かいわ$"
	.if (. - gText_Rom_5775E3) > 0x4
	.error "gText_Rom_5775E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775E3) < 0x4
	.space 0x4 - (. - gText_Rom_5775E3)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:40 easy_chat_group_lifestyle_line_40
	.globl gText_Rom_5775E7
gText_Rom_5775E7: @ 0x085775E7
	.string "がっこう$"
	.if (. - gText_Rom_5775E7) > 0x5
	.error "gText_Rom_5775E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775E7) < 0x5
	.space 0x5 - (. - gText_Rom_5775E7)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:46 easy_chat_group_lifestyle_line_46
	.globl gText_Rom_5775EC
gText_Rom_5775EC: @ 0x085775EC
	.string "きねん$"
	.if (. - gText_Rom_5775EC) > 0x4
	.error "gText_Rom_5775EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775EC) < 0x4
	.space 0x4 - (. - gText_Rom_5775EC)
	.endif
	.incbin "baserom.gba", 0x5775f0, 0x3

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:58 easy_chat_group_lifestyle_line_58
	.globl gText_Rom_5775F3
gText_Rom_5775F3: @ 0x085775F3
	.string "グループ$"
	.if (. - gText_Rom_5775F3) > 0x5
	.error "gText_Rom_5775F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775F3) < 0x5
	.space 0x5 - (. - gText_Rom_5775F3)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:64 easy_chat_group_lifestyle_line_64
	.globl gText_Rom_5775F8
gText_Rom_5775F8: @ 0x085775F8
	.string "ことば$"
	.if (. - gText_Rom_5775F8) > 0x4
	.error "gText_Rom_5775F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775F8) < 0x4
	.space 0x4 - (. - gText_Rom_5775F8)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:70 easy_chat_group_lifestyle_line_70
	.globl gText_Rom_5775FC
gText_Rom_5775FC: @ 0x085775FC
	.string "コンビニ$"
	.if (. - gText_Rom_5775FC) > 0x5
	.error "gText_Rom_5775FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775FC) < 0x5
	.space 0x5 - (. - gText_Rom_5775FC)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:76 easy_chat_group_lifestyle_line_76
	.globl gText_Rom_577601
gText_Rom_577601: @ 0x08577601
	.string "サービス$"
	.if (. - gText_Rom_577601) > 0x5
	.error "gText_Rom_577601 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577601) < 0x5
	.space 0x5 - (. - gText_Rom_577601)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:82 easy_chat_group_lifestyle_line_82
	.globl gText_Rom_577606
gText_Rom_577606: @ 0x08577606
	.string "しごと$"
	.if (. - gText_Rom_577606) > 0x4
	.error "gText_Rom_577606 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577606) < 0x4
	.space 0x4 - (. - gText_Rom_577606)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:88 easy_chat_group_lifestyle_line_88
	.globl gText_Rom_57760A
gText_Rom_57760A: @ 0x0857760A
	.string "システム$"
	.if (. - gText_Rom_57760A) > 0x5
	.error "gText_Rom_57760A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57760A) < 0x5
	.space 0x5 - (. - gText_Rom_57760A)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:94 easy_chat_group_lifestyle_line_94
	.globl gText_Rom_57760F
gText_Rom_57760F: @ 0x0857760F
	.string "しゅぎょう$"
	.if (. - gText_Rom_57760F) > 0x6
	.error "gText_Rom_57760F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57760F) < 0x6
	.space 0x6 - (. - gText_Rom_57760F)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:100 easy_chat_group_lifestyle_line_100
	.globl gText_Rom_577615
gText_Rom_577615: @ 0x08577615
	.string "じゅぎょう$"
	.if (. - gText_Rom_577615) > 0x6
	.error "gText_Rom_577615 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577615) < 0x6
	.space 0x6 - (. - gText_Rom_577615)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:106 easy_chat_group_lifestyle_line_106
	.globl gText_Rom_57761B
gText_Rom_57761B: @ 0x0857761B
	.string "じゅく$"
	.if (. - gText_Rom_57761B) > 0x4
	.error "gText_Rom_57761B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57761B) < 0x4
	.space 0x4 - (. - gText_Rom_57761B)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:112 easy_chat_group_lifestyle_line_112
	.globl gText_Rom_57761F
gText_Rom_57761F: @ 0x0857761F
	.string "じょうほう$"
	.if (. - gText_Rom_57761F) > 0x6
	.error "gText_Rom_57761F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57761F) < 0x6
	.space 0x6 - (. - gText_Rom_57761F)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:118 easy_chat_group_lifestyle_line_118 (+1 aliases)
	.globl gText_Rom_577625
gText_Rom_577625: @ 0x08577625
	.string "せいかつ$"
	.if (. - gText_Rom_577625) > 0x5
	.error "gText_Rom_577625 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577625) < 0x5
	.space 0x5 - (. - gText_Rom_577625)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:124 easy_chat_group_lifestyle_line_124
	.globl gText_Rom_57762A
gText_Rom_57762A: @ 0x0857762A
	.string "せんせい$"
	.if (. - gText_Rom_57762A) > 0x5
	.error "gText_Rom_57762A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57762A) < 0x5
	.space 0x5 - (. - gText_Rom_57762A)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:130 easy_chat_group_lifestyle_line_130
	.globl gText_Rom_57762F
gText_Rom_57762F: @ 0x0857762F
	.string "たいかい$"
	.if (. - gText_Rom_57762F) > 0x5
	.error "gText_Rom_57762F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57762F) < 0x5
	.space 0x5 - (. - gText_Rom_57762F)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:136 easy_chat_group_lifestyle_line_136
	.globl gText_Rom_577634
gText_Rom_577634: @ 0x08577634
	.string "てがみ$"
	.if (. - gText_Rom_577634) > 0x4
	.error "gText_Rom_577634 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577634) < 0x4
	.space 0x4 - (. - gText_Rom_577634)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:142 easy_chat_group_lifestyle_line_142
	.globl gText_Rom_577638
gText_Rom_577638: @ 0x08577638
	.string "できごと$"
	.if (. - gText_Rom_577638) > 0x5
	.error "gText_Rom_577638 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577638) < 0x5
	.space 0x5 - (. - gText_Rom_577638)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:148 easy_chat_group_lifestyle_line_148
	.globl gText_Rom_57763D
gText_Rom_57763D: @ 0x0857763D
	.string "デジタル$"
	.if (. - gText_Rom_57763D) > 0x5
	.error "gText_Rom_57763D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57763D) < 0x5
	.space 0x5 - (. - gText_Rom_57763D)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:154 easy_chat_group_lifestyle_line_154
	.globl gText_Rom_577642
gText_Rom_577642: @ 0x08577642
	.string "テスト$"
	.if (. - gText_Rom_577642) > 0x4
	.error "gText_Rom_577642 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577642) < 0x4
	.space 0x4 - (. - gText_Rom_577642)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:160 easy_chat_group_lifestyle_line_160
	.globl gText_Rom_577646
gText_Rom_577646: @ 0x08577646
	.string "デパート$"
	.if (. - gText_Rom_577646) > 0x5
	.error "gText_Rom_577646 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577646) < 0x5
	.space 0x5 - (. - gText_Rom_577646)
	.endif

	@ src/data/decoration/header.h:636 header_line_636 (+1 aliases)
	.globl gText_Rom_57764B
gText_Rom_57764B: @ 0x0857764B
	.string "テレビ$"
	.if (. - gText_Rom_57764B) > 0x4
	.error "gText_Rom_57764B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57764B) < 0x4
	.space 0x4 - (. - gText_Rom_57764B)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:172 easy_chat_group_lifestyle_line_172
	.globl gText_Rom_57764F
gText_Rom_57764F: @ 0x0857764F
	.string "でんわ$"
	.if (. - gText_Rom_57764F) > 0x4
	.error "gText_Rom_57764F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57764F) < 0x4
	.space 0x4 - (. - gText_Rom_57764F)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_577653
gText_Rom_577653: @ 0x08577653
	.string "どうぐ$"
	.if (. - gText_Rom_577653) > 0x4
	.error "gText_Rom_577653 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577653) < 0x4
	.space 0x4 - (. - gText_Rom_577653)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:184 easy_chat_group_lifestyle_line_184 (+5 aliases)
	.globl gText_Rom_577657
gText_Rom_577657: @ 0x08577657
	.string "なまえ$"
	.if (. - gText_Rom_577657) > 0x4
	.error "gText_Rom_577657 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577657) < 0x4
	.space 0x4 - (. - gText_Rom_577657)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:190 easy_chat_group_lifestyle_line_190
	.globl gText_Rom_57765B
gText_Rom_57765B: @ 0x0857765B
	.string "ニュース$"
	.if (. - gText_Rom_57765B) > 0x5
	.error "gText_Rom_57765B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57765B) < 0x5
	.space 0x5 - (. - gText_Rom_57765B)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:196 easy_chat_group_lifestyle_line_196
	.globl gText_Rom_577660
gText_Rom_577660: @ 0x08577660
	.string "にんき$"
	.if (. - gText_Rom_577660) > 0x4
	.error "gText_Rom_577660 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577660) < 0x4
	.space 0x4 - (. - gText_Rom_577660)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:202 easy_chat_group_lifestyle_line_202
	.globl gText_Rom_577664
gText_Rom_577664: @ 0x08577664
	.string "パーティー$"
	.if (. - gText_Rom_577664) > 0x6
	.error "gText_Rom_577664 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577664) < 0x6
	.space 0x6 - (. - gText_Rom_577664)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:208 easy_chat_group_lifestyle_line_208
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57766A
gText_Rom_57766A: @ 0x0857766A
	.string "べんきょう$"
	.if (. - gText_Rom_57766A) != 0x6
	.error "gText_Rom_57766A must retain its original byte length"
	.endif
	.globl gText_Rom_57766C
	.set gText_Rom_57766C, gText_Rom_57766A + 0x2

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:214 easy_chat_group_lifestyle_line_214
	.globl gText_Rom_577670
gText_Rom_577670: @ 0x08577670
	.string "マシン$"
	.if (. - gText_Rom_577670) > 0x4
	.error "gText_Rom_577670 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577670) < 0x4
	.space 0x4 - (. - gText_Rom_577670)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_577674
gText_Rom_577674: @ 0x08577674
	.string "メール$"
	.if (. - gText_Rom_577674) > 0x4
	.error "gText_Rom_577674 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577674) < 0x4
	.space 0x4 - (. - gText_Rom_577674)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:226 easy_chat_group_lifestyle_line_226
	.globl gText_Rom_577678
gText_Rom_577678: @ 0x08577678
	.string "メッセージ$"
	.if (. - gText_Rom_577678) > 0x6
	.error "gText_Rom_577678 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577678) < 0x6
	.space 0x6 - (. - gText_Rom_577678)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:232 easy_chat_group_lifestyle_line_232
	.globl gText_Rom_57767E
gText_Rom_57767E: @ 0x0857767E
	.string "やくそく$"
	.if (. - gText_Rom_57767E) > 0x5
	.error "gText_Rom_57767E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57767E) < 0x5
	.space 0x5 - (. - gText_Rom_57767E)
	.endif
	.incbin "baserom.gba", 0x577683, 0x3

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:244 easy_chat_group_lifestyle_line_244
	.globl gText_Rom_577686
gText_Rom_577686: @ 0x08577686
	.string "ようちえん$"
	.if (. - gText_Rom_577686) > 0x6
	.error "gText_Rom_577686 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577686) < 0x6
	.space 0x6 - (. - gText_Rom_577686)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:250 easy_chat_group_lifestyle_line_250
	.globl gText_Rom_57768C
gText_Rom_57768C: @ 0x0857768C
	.string "ライフ$"
	.if (. - gText_Rom_57768C) > 0x4
	.error "gText_Rom_57768C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57768C) < 0x4
	.space 0x4 - (. - gText_Rom_57768C)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:256 easy_chat_group_lifestyle_line_256
	.globl gText_Rom_577690
gText_Rom_577690: @ 0x08577690
	.string "ラジオ$"
	.if (. - gText_Rom_577690) > 0x4
	.error "gText_Rom_577690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577690) < 0x4
	.space 0x4 - (. - gText_Rom_577690)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:262 easy_chat_group_lifestyle_line_262
	.globl gText_Rom_577694
gText_Rom_577694: @ 0x08577694
	.string "レンタル$"
	.if (. - gText_Rom_577694) > 0x5
	.error "gText_Rom_577694 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577694) < 0x5
	.space 0x5 - (. - gText_Rom_577694)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:268 easy_chat_group_lifestyle_line_268
	.globl gText_Rom_577699
gText_Rom_577699: @ 0x08577699
	.string "ワールド$"
	.if (. - gText_Rom_577699) > 0x5
	.error "gText_Rom_577699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577699) < 0x5
	.space 0x5 - (. - gText_Rom_577699)
	.endif
	.incbin "baserom.gba", 0x57769e, 0x21e

	@ src/data/easy_chat/easy_chat_group_hobbies.h:4 easy_chat_group_hobbies_line_4
	.globl gText_Rom_5778BC
gText_Rom_5778BC: @ 0x085778BC
	.string "アイドル$"
	.if (. - gText_Rom_5778BC) > 0x5
	.error "gText_Rom_5778BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778BC) < 0x5
	.space 0x5 - (. - gText_Rom_5778BC)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:10 easy_chat_group_hobbies_line_10
	.globl gText_Rom_5778C1
gText_Rom_5778C1: @ 0x085778C1
	.string "アニメ$"
	.if (. - gText_Rom_5778C1) > 0x4
	.error "gText_Rom_5778C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778C1) < 0x4
	.space 0x4 - (. - gText_Rom_5778C1)
	.endif
	.incbin "baserom.gba", 0x5778c5, 0x3

	@ src/data/easy_chat/easy_chat_group_hobbies.h:22 easy_chat_group_hobbies_line_22
	.globl gText_Rom_5778C8
gText_Rom_5778C8: @ 0x085778C8
	.string "えいが$"
	.if (. - gText_Rom_5778C8) > 0x4
	.error "gText_Rom_5778C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778C8) < 0x4
	.space 0x4 - (. - gText_Rom_5778C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:28 easy_chat_group_hobbies_line_28
	.globl gText_Rom_5778CC
gText_Rom_5778CC: @ 0x085778CC
	.string "おかし$"
	.if (. - gText_Rom_5778CC) > 0x4
	.error "gText_Rom_5778CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778CC) < 0x4
	.space 0x4 - (. - gText_Rom_5778CC)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:34 easy_chat_group_hobbies_line_34 (+1 aliases)
	.globl gText_Rom_5778D0
gText_Rom_5778D0: @ 0x085778D0
	.string "おしゃべり$"
	.if (. - gText_Rom_5778D0) > 0x6
	.error "gText_Rom_5778D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778D0) < 0x6
	.space 0x6 - (. - gText_Rom_5778D0)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:40 easy_chat_group_hobbies_line_40
	.globl gText_Rom_5778D6
gText_Rom_5778D6: @ 0x085778D6
	.string "おままごと$"
	.if (. - gText_Rom_5778D6) > 0x6
	.error "gText_Rom_5778D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778D6) < 0x6
	.space 0x6 - (. - gText_Rom_5778D6)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:46 easy_chat_group_hobbies_line_46
	.globl gText_Rom_5778DC
gText_Rom_5778DC: @ 0x085778DC
	.string "おもちゃ$"
	.if (. - gText_Rom_5778DC) > 0x5
	.error "gText_Rom_5778DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778DC) < 0x5
	.space 0x5 - (. - gText_Rom_5778DC)
	.endif

	@ src/data/credits.h:79 sCreditsText_MusicComposition (+1 aliases)
	.globl gText_Rom_5778E1
gText_Rom_5778E1: @ 0x085778E1
	.string "おんがく$"
	.if (. - gText_Rom_5778E1) > 0x5
	.error "gText_Rom_5778E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778E1) < 0x5
	.space 0x5 - (. - gText_Rom_5778E1)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:58 easy_chat_group_hobbies_line_58 (+1 aliases)
	.globl gText_Rom_5778E6
gText_Rom_5778E6: @ 0x085778E6
	.string "カード$"
	.if (. - gText_Rom_5778E6) > 0x4
	.error "gText_Rom_5778E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778E6) < 0x4
	.space 0x4 - (. - gText_Rom_5778E6)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:64 easy_chat_group_hobbies_line_64
	.globl gText_Rom_5778EA
gText_Rom_5778EA: @ 0x085778EA
	.string "かいもの$"
	.if (. - gText_Rom_5778EA) > 0x5
	.error "gText_Rom_5778EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778EA) < 0x5
	.space 0x5 - (. - gText_Rom_5778EA)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:70 easy_chat_group_hobbies_line_70
	.globl gText_Rom_5778EF
gText_Rom_5778EF: @ 0x085778EF
	.string "カメラ$"
	.if (. - gText_Rom_5778EF) > 0x4
	.error "gText_Rom_5778EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778EF) < 0x4
	.space 0x4 - (. - gText_Rom_5778EF)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:76 easy_chat_group_hobbies_line_76
	.globl gText_Rom_5778F3
gText_Rom_5778F3: @ 0x085778F3
	.string "かんしょう$"
	.if (. - gText_Rom_5778F3) > 0x6
	.error "gText_Rom_5778F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778F3) < 0x6
	.space 0x6 - (. - gText_Rom_5778F3)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:82 easy_chat_group_hobbies_line_82
	.globl gText_Rom_5778F9
gText_Rom_5778F9: @ 0x085778F9
	.string "かんせん$"
	.if (. - gText_Rom_5778F9) > 0x5
	.error "gText_Rom_5778F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778F9) < 0x5
	.space 0x5 - (. - gText_Rom_5778F9)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:88 easy_chat_group_hobbies_line_88
	.globl gText_Rom_5778FE
gText_Rom_5778FE: @ 0x085778FE
	.string "グルメ$"
	.if (. - gText_Rom_5778FE) > 0x4
	.error "gText_Rom_5778FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778FE) < 0x4
	.space 0x4 - (. - gText_Rom_5778FE)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:94 easy_chat_group_hobbies_line_94
	.globl gText_Rom_577902
gText_Rom_577902: @ 0x08577902
	.string "ゲーム$"
	.if (. - gText_Rom_577902) > 0x4
	.error "gText_Rom_577902 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577902) < 0x4
	.space 0x4 - (. - gText_Rom_577902)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:100 easy_chat_group_hobbies_line_100
	.globl gText_Rom_577906
gText_Rom_577906: @ 0x08577906
	.string "ごっこ$"
	.if (. - gText_Rom_577906) > 0x4
	.error "gText_Rom_577906 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577906) < 0x4
	.space 0x4 - (. - gText_Rom_577906)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:106 easy_chat_group_hobbies_line_106
	.globl gText_Rom_57790A
gText_Rom_57790A: @ 0x0857790A
	.string "コレクション$"
	.if (. - gText_Rom_57790A) > 0x7
	.error "gText_Rom_57790A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57790A) < 0x7
	.space 0x7 - (. - gText_Rom_57790A)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:112 easy_chat_group_hobbies_line_112
	.globl gText_Rom_577911
gText_Rom_577911: @ 0x08577911
	.string "コンプリート$"
	.if (. - gText_Rom_577911) > 0x7
	.error "gText_Rom_577911 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577911) < 0x7
	.space 0x7 - (. - gText_Rom_577911)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:118 easy_chat_group_hobbies_line_118
	.globl gText_Rom_577918
gText_Rom_577918: @ 0x08577918
	.string "ざっし$"
	.if (. - gText_Rom_577918) > 0x4
	.error "gText_Rom_577918 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577918) < 0x4
	.space 0x4 - (. - gText_Rom_577918)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:124 easy_chat_group_hobbies_line_124
	.globl gText_Rom_57791C
gText_Rom_57791C: @ 0x0857791C
	.string "さんぽ$"
	.if (. - gText_Rom_57791C) > 0x4
	.error "gText_Rom_57791C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57791C) < 0x4
	.space 0x4 - (. - gText_Rom_57791C)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:130 easy_chat_group_hobbies_line_130
	.globl gText_Rom_577920
gText_Rom_577920: @ 0x08577920
	.string "じてんしゃ$"
	.if (. - gText_Rom_577920) > 0x6
	.error "gText_Rom_577920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577920) < 0x6
	.space 0x6 - (. - gText_Rom_577920)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:136 easy_chat_group_hobbies_line_136 (+1 aliases)
	.globl gText_Rom_577926
gText_Rom_577926: @ 0x08577926
	.string "しゅみ$"
	.if (. - gText_Rom_577926) > 0x4
	.error "gText_Rom_577926 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577926) < 0x4
	.space 0x4 - (. - gText_Rom_577926)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:142 easy_chat_group_hobbies_line_142
	.globl gText_Rom_57792A
gText_Rom_57792A: @ 0x0857792A
	.string "スポーツ$"
	.if (. - gText_Rom_57792A) > 0x5
	.error "gText_Rom_57792A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57792A) < 0x5
	.space 0x5 - (. - gText_Rom_57792A)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:148 easy_chat_group_hobbies_line_148
	.globl gText_Rom_57792F
gText_Rom_57792F: @ 0x0857792F
	.string "ソフト$"
	.if (. - gText_Rom_57792F) > 0x4
	.error "gText_Rom_57792F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57792F) < 0x4
	.space 0x4 - (. - gText_Rom_57792F)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:154 easy_chat_group_hobbies_line_154
	.globl gText_Rom_577933
gText_Rom_577933: @ 0x08577933
	.string "ソング$"
	.if (. - gText_Rom_577933) > 0x4
	.error "gText_Rom_577933 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577933) < 0x4
	.space 0x4 - (. - gText_Rom_577933)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:160 easy_chat_group_hobbies_line_160
	.globl gText_Rom_577937
gText_Rom_577937: @ 0x08577937
	.string "ダイエット$"
	.if (. - gText_Rom_577937) > 0x6
	.error "gText_Rom_577937 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577937) < 0x6
	.space 0x6 - (. - gText_Rom_577937)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:166 easy_chat_group_hobbies_line_166
	.globl gText_Rom_57793D
gText_Rom_57793D: @ 0x0857793D
	.string "たからもの$"
	.if (. - gText_Rom_57793D) > 0x6
	.error "gText_Rom_57793D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57793D) < 0x6
	.space 0x6 - (. - gText_Rom_57793D)
	.endif
	.incbin "baserom.gba", 0x577943, 0x3

	@ src/data/easy_chat/easy_chat_group_hobbies.h:178 easy_chat_group_hobbies_line_178
	.globl gText_Rom_577946
gText_Rom_577946: @ 0x08577946
	.string "ダンス$"
	.if (. - gText_Rom_577946) > 0x4
	.error "gText_Rom_577946 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577946) < 0x4
	.space 0x4 - (. - gText_Rom_577946)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:184 easy_chat_group_hobbies_line_184
	.globl gText_Rom_57794A
gText_Rom_57794A: @ 0x0857794A
	.string "チャンネル$"
	.if (. - gText_Rom_57794A) > 0x6
	.error "gText_Rom_57794A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57794A) < 0x6
	.space 0x6 - (. - gText_Rom_57794A)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:190 easy_chat_group_hobbies_line_190
	.globl gText_Rom_577950
gText_Rom_577950: @ 0x08577950
	.string "つくり$"
	.if (. - gText_Rom_577950) > 0x4
	.error "gText_Rom_577950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577950) < 0x4
	.space 0x4 - (. - gText_Rom_577950)
	.endif
	.incbin "baserom.gba", 0x577954, 0x3

	@ src/data/easy_chat/easy_chat_group_hobbies.h:202 easy_chat_group_hobbies_line_202
	.globl gText_Rom_577957
gText_Rom_577957: @ 0x08577957
	.string "デート$"
	.if (. - gText_Rom_577957) > 0x4
	.error "gText_Rom_577957 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577957) < 0x4
	.space 0x4 - (. - gText_Rom_577957)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:208 easy_chat_group_hobbies_line_208
	.globl gText_Rom_57795B
gText_Rom_57795B: @ 0x0857795B
	.string "デザイン$"
	.if (. - gText_Rom_57795B) > 0x5
	.error "gText_Rom_57795B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57795B) < 0x5
	.space 0x5 - (. - gText_Rom_57795B)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:214 easy_chat_group_hobbies_line_214
	.globl gText_Rom_577960
gText_Rom_577960: @ 0x08577960
	.string "でんしゃ$"
	.if (. - gText_Rom_577960) > 0x5
	.error "gText_Rom_577960 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577960) < 0x5
	.space 0x5 - (. - gText_Rom_577960)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:220 easy_chat_group_hobbies_line_220 (+1 aliases)
	.globl gText_Rom_577965
gText_Rom_577965: @ 0x08577965
	.string "ぬいぐるみ$"
	.if (. - gText_Rom_577965) > 0x6
	.error "gText_Rom_577965 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577965) < 0x6
	.space 0x6 - (. - gText_Rom_577965)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:226 easy_chat_group_hobbies_line_226 (+1 aliases)
	.globl gText_Rom_57796B
gText_Rom_57796B: @ 0x0857796B
	.string "パソコン$"
	.if (. - gText_Rom_57796B) > 0x5
	.error "gText_Rom_57796B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57796B) < 0x5
	.space 0x5 - (. - gText_Rom_57796B)
	.endif
	.incbin "baserom.gba", 0x577970, 0x3

	@ src/data/easy_chat/easy_chat_group_hobbies.h:238 easy_chat_group_hobbies_line_238
	.globl gText_Rom_577973
gText_Rom_577973: @ 0x08577973
	.string "ヒーロー$"
	.if (. - gText_Rom_577973) > 0x5
	.error "gText_Rom_577973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577973) < 0x5
	.space 0x5 - (. - gText_Rom_577973)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:244 easy_chat_group_hobbies_line_244
	.globl gText_Rom_577978
gText_Rom_577978: @ 0x08577978
	.string "ひるね$"
	.if (. - gText_Rom_577978) > 0x4
	.error "gText_Rom_577978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577978) < 0x4
	.space 0x4 - (. - gText_Rom_577978)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:250 easy_chat_group_hobbies_line_250
	.globl gText_Rom_57797C
gText_Rom_57797C: @ 0x0857797C
	.string "ヒロイン$"
	.if (. - gText_Rom_57797C) > 0x5
	.error "gText_Rom_57797C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57797C) < 0x5
	.space 0x5 - (. - gText_Rom_57797C)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:256 easy_chat_group_hobbies_line_256
	.globl gText_Rom_577981
gText_Rom_577981: @ 0x08577981
	.string "ファッション$"
	.if (. - gText_Rom_577981) > 0x7
	.error "gText_Rom_577981 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577981) < 0x7
	.space 0x7 - (. - gText_Rom_577981)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:262 easy_chat_group_hobbies_line_262
	.globl gText_Rom_577988
gText_Rom_577988: @ 0x08577988
	.string "ぼうけん$"
	.if (. - gText_Rom_577988) > 0x5
	.error "gText_Rom_577988 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577988) < 0x5
	.space 0x5 - (. - gText_Rom_577988)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:268 easy_chat_group_hobbies_line_268
	.globl gText_Rom_57798D
gText_Rom_57798D: @ 0x0857798D
	.string "ボード$"
	.if (. - gText_Rom_57798D) > 0x4
	.error "gText_Rom_57798D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57798D) < 0x4
	.space 0x4 - (. - gText_Rom_57798D)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_577991
gText_Rom_577991: @ 0x08577991
	.string "ボール$"
	.if (. - gText_Rom_577991) > 0x4
	.error "gText_Rom_577991 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577991) < 0x4
	.space 0x4 - (. - gText_Rom_577991)
	.endif
	.incbin "baserom.gba", 0x577995, 0x3

	@ src/data/easy_chat/easy_chat_group_hobbies.h:286 easy_chat_group_hobbies_line_286
	.globl gText_Rom_577998
gText_Rom_577998: @ 0x08577998
	.string "まつり$"
	.if (. - gText_Rom_577998) > 0x4
	.error "gText_Rom_577998 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577998) < 0x4
	.space 0x4 - (. - gText_Rom_577998)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:292 easy_chat_group_hobbies_line_292
	.globl gText_Rom_57799C
gText_Rom_57799C: @ 0x0857799C
	.string "まんが$"
	.if (. - gText_Rom_57799C) > 0x4
	.error "gText_Rom_57799C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57799C) < 0x4
	.space 0x4 - (. - gText_Rom_57799C)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:298 easy_chat_group_hobbies_line_298
	.globl gText_Rom_5779A0
gText_Rom_5779A0: @ 0x085779A0
	.string "やすみ$"
	.if (. - gText_Rom_5779A0) > 0x4
	.error "gText_Rom_5779A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779A0) < 0x4
	.space 0x4 - (. - gText_Rom_5779A0)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:304 easy_chat_group_hobbies_line_304
	.globl gText_Rom_5779A4
gText_Rom_5779A4: @ 0x085779A4
	.string "よてい$"
	.if (. - gText_Rom_5779A4) > 0x4
	.error "gText_Rom_5779A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779A4) < 0x4
	.space 0x4 - (. - gText_Rom_5779A4)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:310 easy_chat_group_hobbies_line_310
	.globl gText_Rom_5779A8
gText_Rom_5779A8: @ 0x085779A8
	.string "りゅうこう$"
	.if (. - gText_Rom_5779A8) > 0x6
	.error "gText_Rom_5779A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779A8) < 0x6
	.space 0x6 - (. - gText_Rom_5779A8)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:316 easy_chat_group_hobbies_line_316
	.globl gText_Rom_5779AE
gText_Rom_5779AE: @ 0x085779AE
	.string "りょこう$"
	.if (. - gText_Rom_5779AE) > 0x5
	.error "gText_Rom_5779AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779AE) < 0x5
	.space 0x5 - (. - gText_Rom_5779AE)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:322 easy_chat_group_hobbies_line_322
	.globl gText_Rom_5779B3
gText_Rom_5779B3: @ 0x085779B3
	.string "ルック$"
	.if (. - gText_Rom_5779B3) > 0x4
	.error "gText_Rom_5779B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779B3) < 0x4
	.space 0x4 - (. - gText_Rom_5779B3)
	.endif
	.incbin "baserom.gba", 0x5779b7, 0x28f

	@ src/data/easy_chat/easy_chat_group_time.h:16 easy_chat_group_time_line_16
	.globl gText_Rom_577C46
gText_Rom_577C46: @ 0x08577C46
	.string "あした$"
	.if (. - gText_Rom_577C46) > 0x4
	.error "gText_Rom_577C46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C46) < 0x4
	.space 0x4 - (. - gText_Rom_577C46)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:22 easy_chat_group_time_line_22
	.globl gText_Rom_577C4A
gText_Rom_577C4A: @ 0x08577C4A
	.string "いちども$"
	.if (. - gText_Rom_577C4A) > 0x5
	.error "gText_Rom_577C4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C4A) < 0x5
	.space 0x5 - (. - gText_Rom_577C4A)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:28 easy_chat_group_time_line_28
	.globl gText_Rom_577C4F
gText_Rom_577C4F: @ 0x08577C4F
	.string "いちにち$"
	.if (. - gText_Rom_577C4F) > 0x5
	.error "gText_Rom_577C4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C4F) < 0x5
	.space 0x5 - (. - gText_Rom_577C4F)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:34 easy_chat_group_time_line_34
	.globl gText_Rom_577C54
gText_Rom_577C54: @ 0x08577C54
	.string "いつか$"
	.if (. - gText_Rom_577C54) > 0x4
	.error "gText_Rom_577C54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C54) < 0x4
	.space 0x4 - (. - gText_Rom_577C54)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:40 easy_chat_group_time_line_40
	.globl gText_Rom_577C58
gText_Rom_577C58: @ 0x08577C58
	.string "いつも$"
	.if (. - gText_Rom_577C58) > 0x4
	.error "gText_Rom_577C58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C58) < 0x4
	.space 0x4 - (. - gText_Rom_577C58)
	.endif
	.incbin "baserom.gba", 0x577c5c, 0x3

	@ src/data/easy_chat/easy_chat_group_time.h:52 easy_chat_group_time_line_52
	.globl gText_Rom_577C5F
gText_Rom_577C5F: @ 0x08577C5F
	.string "えいえん$"
	.if (. - gText_Rom_577C5F) > 0x5
	.error "gText_Rom_577C5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C5F) < 0x5
	.space 0x5 - (. - gText_Rom_577C5F)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:58 easy_chat_group_time_line_58
	.globl gText_Rom_577C64
gText_Rom_577C64: @ 0x08577C64
	.string "おととい$"
	.if (. - gText_Rom_577C64) > 0x5
	.error "gText_Rom_577C64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C64) < 0x5
	.space 0x5 - (. - gText_Rom_577C64)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:64 easy_chat_group_time_line_64
	.globl gText_Rom_577C69
gText_Rom_577C69: @ 0x08577C69
	.string "おわり$"
	.if (. - gText_Rom_577C69) > 0x4
	.error "gText_Rom_577C69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C69) < 0x4
	.space 0x4 - (. - gText_Rom_577C69)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:70 easy_chat_group_time_line_70 (+1 aliases)
	.globl gText_Rom_577C6D
gText_Rom_577C6D: @ 0x08577C6D
	.string "かようび$"
	.if (. - gText_Rom_577C6D) > 0x5
	.error "gText_Rom_577C6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C6D) < 0x5
	.space 0x5 - (. - gText_Rom_577C6D)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:76 easy_chat_group_time_line_76
	.globl gText_Rom_577C72
gText_Rom_577C72: @ 0x08577C72
	.string "きのう$"
	.if (. - gText_Rom_577C72) > 0x4
	.error "gText_Rom_577C72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C72) < 0x4
	.space 0x4 - (. - gText_Rom_577C72)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:82 easy_chat_group_time_line_82
	.globl gText_Rom_577C76
gText_Rom_577C76: @ 0x08577C76
	.string "きょう$"
	.if (. - gText_Rom_577C76) > 0x4
	.error "gText_Rom_577C76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C76) < 0x4
	.space 0x4 - (. - gText_Rom_577C76)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:88 easy_chat_group_time_line_88 (+1 aliases)
	.globl gText_Rom_577C7A
gText_Rom_577C7A: @ 0x08577C7A
	.string "きんようび$"
	.if (. - gText_Rom_577C7A) > 0x6
	.error "gText_Rom_577C7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C7A) < 0x6
	.space 0x6 - (. - gText_Rom_577C7A)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:94 easy_chat_group_time_line_94 (+1 aliases)
	.globl gText_Rom_577C80
gText_Rom_577C80: @ 0x08577C80
	.string "げつようび$"
	.if (. - gText_Rom_577C80) > 0x6
	.error "gText_Rom_577C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C80) < 0x6
	.space 0x6 - (. - gText_Rom_577C80)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:100 easy_chat_group_time_line_100
	.globl gText_Rom_577C86
gText_Rom_577C86: @ 0x08577C86
	.string "このあと$"
	.if (. - gText_Rom_577C86) > 0x5
	.error "gText_Rom_577C86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C86) < 0x5
	.space 0x5 - (. - gText_Rom_577C86)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:106 easy_chat_group_time_line_106
	.globl gText_Rom_577C8B
gText_Rom_577C8B: @ 0x08577C8B
	.string "このまえ$"
	.if (. - gText_Rom_577C8B) > 0x5
	.error "gText_Rom_577C8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C8B) < 0x5
	.space 0x5 - (. - gText_Rom_577C8B)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:112 easy_chat_group_time_line_112
	.globl gText_Rom_577C90
gText_Rom_577C90: @ 0x08577C90
	.string "こんど$"
	.if (. - gText_Rom_577C90) > 0x4
	.error "gText_Rom_577C90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C90) < 0x4
	.space 0x4 - (. - gText_Rom_577C90)
	.endif

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
	.incbin "baserom.gba", 0x577ca5, 0x3

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
	.incbin "baserom.gba", 0x577cbf, 0x6

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
	.incbin "baserom.gba", 0x577cca, 0x3

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
	.incbin "baserom.gba", 0x577cd7, 0x3

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
	.incbin "baserom.gba", 0x577ce9, 0x3

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

	@ src/data/easy_chat/easy_chat_group_time.h:250 easy_chat_group_time_line_250 (+1 aliases)
	.globl gText_Rom_577CF1
gText_Rom_577CF1: @ 0x08577CF1
	.string "もくようび$"
	.if (. - gText_Rom_577CF1) > 0x6
	.error "gText_Rom_577CF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CF1) < 0x6
	.space 0x6 - (. - gText_Rom_577CF1)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:256 easy_chat_group_time_line_256
	.globl gText_Rom_577CF7
gText_Rom_577CF7: @ 0x08577CF7
	.string "よなか$"
	.if (. - gText_Rom_577CF7) > 0x4
	.error "gText_Rom_577CF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CF7) < 0x4
	.space 0x4 - (. - gText_Rom_577CF7)
	.endif
	.incbin "baserom.gba", 0x577cfb, 0x3

	@ src/data/easy_chat/easy_chat_group_time.h:268 easy_chat_group_time_line_268
	.globl gText_Rom_577CFE
gText_Rom_577CFE: @ 0x08577CFE
	.string "らいしゅう$"
	.if (. - gText_Rom_577CFE) > 0x6
	.error "gText_Rom_577CFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CFE) < 0x6
	.space 0x6 - (. - gText_Rom_577CFE)
	.endif
	.incbin "baserom.gba", 0x577d04, 0x21f

	@ src/data/easy_chat/easy_chat_group_misc.h:10 easy_chat_group_misc_line_10
	.globl gText_Rom_577F23
gText_Rom_577F23: @ 0x08577F23
	.string "あっち$"
	.if (. - gText_Rom_577F23) > 0x4
	.error "gText_Rom_577F23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F23) < 0x4
	.space 0x4 - (. - gText_Rom_577F23)
	.endif
	.incbin "baserom.gba", 0x577f27, 0x3

	@ src/data/easy_chat/easy_chat_group_misc.h:22 easy_chat_group_misc_line_22
	.globl gText_Rom_577F2A
gText_Rom_577F2A: @ 0x08577F2A
	.string "ありゃ$"
	.if (. - gText_Rom_577F2A) > 0x4
	.error "gText_Rom_577F2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F2A) < 0x4
	.space 0x4 - (. - gText_Rom_577F2A)
	.endif
	.incbin "baserom.gba", 0x577f2e, 0x3

	@ src/data/easy_chat/easy_chat_group_misc.h:34 easy_chat_group_misc_line_34
	.globl gText_Rom_577F31
gText_Rom_577F31: @ 0x08577F31
	.string "あれは$"
	.if (. - gText_Rom_577F31) > 0x4
	.error "gText_Rom_577F31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F31) < 0x4
	.space 0x4 - (. - gText_Rom_577F31)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:40 easy_chat_group_misc_line_40
	.globl gText_Rom_577F35
gText_Rom_577F35: @ 0x08577F35
	.string "あんな$"
	.if (. - gText_Rom_577F35) > 0x4
	.error "gText_Rom_577F35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F35) < 0x4
	.space 0x4 - (. - gText_Rom_577F35)
	.endif
	.incbin "baserom.gba", 0x577f39, 0x9

	@ src/data/easy_chat/easy_chat_group_misc.h:64 easy_chat_group_misc_line_64
	.globl gText_Rom_577F42
gText_Rom_577F42: @ 0x08577F42
	.string "こっち$"
	.if (. - gText_Rom_577F42) > 0x4
	.error "gText_Rom_577F42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F42) < 0x4
	.space 0x4 - (. - gText_Rom_577F42)
	.endif
	.incbin "baserom.gba", 0x577f46, 0x3

	@ src/data/easy_chat/easy_chat_group_misc.h:76 easy_chat_group_misc_line_76
	.globl gText_Rom_577F49
gText_Rom_577F49: @ 0x08577F49
	.string "こりゃ$"
	.if (. - gText_Rom_577F49) > 0x4
	.error "gText_Rom_577F49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F49) < 0x4
	.space 0x4 - (. - gText_Rom_577F49)
	.endif
	.incbin "baserom.gba", 0x577f4d, 0x3

	@ src/data/easy_chat/easy_chat_group_misc.h:88 easy_chat_group_misc_line_88
	.globl gText_Rom_577F50
gText_Rom_577F50: @ 0x08577F50
	.string "これだ$"
	.if (. - gText_Rom_577F50) > 0x4
	.error "gText_Rom_577F50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F50) < 0x4
	.space 0x4 - (. - gText_Rom_577F50)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:94 easy_chat_group_misc_line_94
	.globl gText_Rom_577F54
gText_Rom_577F54: @ 0x08577F54
	.string "これは$"
	.if (. - gText_Rom_577F54) > 0x4
	.error "gText_Rom_577F54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F54) < 0x4
	.space 0x4 - (. - gText_Rom_577F54)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:100 easy_chat_group_misc_line_100
	.globl gText_Rom_577F58
gText_Rom_577F58: @ 0x08577F58
	.string "こんな$"
	.if (. - gText_Rom_577F58) > 0x4
	.error "gText_Rom_577F58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F58) < 0x4
	.space 0x4 - (. - gText_Rom_577F58)
	.endif
	.incbin "baserom.gba", 0x577f5c, 0x6

	@ src/data/easy_chat/easy_chat_group_misc.h:118 easy_chat_group_misc_line_118
	.globl gText_Rom_577F62
gText_Rom_577F62: @ 0x08577F62
	.string "そっち$"
	.if (. - gText_Rom_577F62) > 0x4
	.error "gText_Rom_577F62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F62) < 0x4
	.space 0x4 - (. - gText_Rom_577F62)
	.endif
	.incbin "baserom.gba", 0x577f66, 0x3

	@ src/data/easy_chat/easy_chat_group_misc.h:130 easy_chat_group_misc_line_130
	.globl gText_Rom_577F69
gText_Rom_577F69: @ 0x08577F69
	.string "そりゃ$"
	.if (. - gText_Rom_577F69) > 0x4
	.error "gText_Rom_577F69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F69) < 0x4
	.space 0x4 - (. - gText_Rom_577F69)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:136 easy_chat_group_misc_line_136
	.globl gText_Rom_577F6D
gText_Rom_577F6D: @ 0x08577F6D
	.string "それ$"
	.if (. - gText_Rom_577F6D) > 0x3
	.error "gText_Rom_577F6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F6D) < 0x3
	.space 0x3 - (. - gText_Rom_577F6D)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:142 easy_chat_group_misc_line_142
	.globl gText_Rom_577F70
gText_Rom_577F70: @ 0x08577F70
	.string "それだ$"
	.if (. - gText_Rom_577F70) > 0x4
	.error "gText_Rom_577F70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F70) < 0x4
	.space 0x4 - (. - gText_Rom_577F70)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:148 easy_chat_group_misc_line_148
	.globl gText_Rom_577F74
gText_Rom_577F74: @ 0x08577F74
	.string "それは$"
	.if (. - gText_Rom_577F74) > 0x4
	.error "gText_Rom_577F74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F74) < 0x4
	.space 0x4 - (. - gText_Rom_577F74)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:154 easy_chat_group_misc_line_154
	.globl gText_Rom_577F78
gText_Rom_577F78: @ 0x08577F78
	.string "そんな$"
	.if (. - gText_Rom_577F78) > 0x4
	.error "gText_Rom_577F78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F78) < 0x4
	.space 0x4 - (. - gText_Rom_577F78)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:160 easy_chat_group_misc_line_160
	.globl gText_Rom_577F7C
gText_Rom_577F7C: @ 0x08577F7C
	.string "てまえ$"
	.if (. - gText_Rom_577F7C) > 0x4
	.error "gText_Rom_577F7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F7C) < 0x4
	.space 0x4 - (. - gText_Rom_577F7C)
	.endif
	.incbin "baserom.gba", 0x577f80, 0x3

	@ src/data/easy_chat/easy_chat_group_misc.h:172 easy_chat_group_misc_line_172
	.globl gText_Rom_577F83
gText_Rom_577F83: @ 0x08577F83
	.string "どっち$"
	.if (. - gText_Rom_577F83) > 0x4
	.error "gText_Rom_577F83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F83) < 0x4
	.space 0x4 - (. - gText_Rom_577F83)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:178 easy_chat_group_misc_line_178
	.globl gText_Rom_577F87
gText_Rom_577F87: @ 0x08577F87
	.string "どの$"
	.if (. - gText_Rom_577F87) > 0x3
	.error "gText_Rom_577F87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F87) < 0x3
	.space 0x3 - (. - gText_Rom_577F87)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:184 easy_chat_group_misc_line_184
	.globl gText_Rom_577F8A
gText_Rom_577F8A: @ 0x08577F8A
	.string "どりゃ$"
	.if (. - gText_Rom_577F8A) > 0x4
	.error "gText_Rom_577F8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F8A) < 0x4
	.space 0x4 - (. - gText_Rom_577F8A)
	.endif
	.incbin "baserom.gba", 0x577f8e, 0x3

	@ src/data/easy_chat/easy_chat_group_misc.h:196 easy_chat_group_misc_line_196
	.globl gText_Rom_577F91
gText_Rom_577F91: @ 0x08577F91
	.string "どれを$"
	.if (. - gText_Rom_577F91) > 0x4
	.error "gText_Rom_577F91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F91) < 0x4
	.space 0x4 - (. - gText_Rom_577F91)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:202 easy_chat_group_misc_line_202
	.globl gText_Rom_577F95
gText_Rom_577F95: @ 0x08577F95
	.string "どんな$"
	.if (. - gText_Rom_577F95) > 0x4
	.error "gText_Rom_577F95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F95) < 0x4
	.space 0x4 - (. - gText_Rom_577F95)
	.endif
	.incbin "baserom.gba", 0x577f99, 0x3

	@ src/data/easy_chat/easy_chat_group_misc.h:214 easy_chat_group_misc_line_214
	.globl gText_Rom_577F9C
gText_Rom_577F9C: @ 0x08577F9C
	.string "なんか$"
	.if (. - gText_Rom_577F9C) > 0x4
	.error "gText_Rom_577F9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F9C) < 0x4
	.space 0x4 - (. - gText_Rom_577F9C)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:220 easy_chat_group_misc_line_220
	.globl gText_Rom_577FA0
gText_Rom_577FA0: @ 0x08577FA0
	.string "なんだ$"
	.if (. - gText_Rom_577FA0) > 0x4
	.error "gText_Rom_577FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FA0) < 0x4
	.space 0x4 - (. - gText_Rom_577FA0)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:226 easy_chat_group_misc_line_226
	.globl gText_Rom_577FA4
gText_Rom_577FA4: @ 0x08577FA4
	.string "なんで$"
	.if (. - gText_Rom_577FA4) > 0x4
	.error "gText_Rom_577FA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FA4) < 0x4
	.space 0x4 - (. - gText_Rom_577FA4)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:232 easy_chat_group_misc_line_232
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_577FA8
gText_Rom_577FA8: @ 0x08577FA8
	.string "なんなんだ$"
	.if (. - gText_Rom_577FA8) != 0x6
	.error "gText_Rom_577FA8 must retain its original byte length"
	.endif
	.globl gText_Rom_577FAA
	.set gText_Rom_577FAA, gText_Rom_577FA8 + 0x2

	@ src/data/easy_chat/easy_chat_group_misc.h:238 easy_chat_group_misc_line_238
	.globl gText_Rom_577FAE
gText_Rom_577FAE: @ 0x08577FAE
	.string "なんの$"
	.if (. - gText_Rom_577FAE) > 0x4
	.error "gText_Rom_577FAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FAE) < 0x4
	.space 0x4 - (. - gText_Rom_577FAE)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:244 easy_chat_group_misc_line_244 (+1 aliases)
	.globl gText_Rom_577FB2
gText_Rom_577FB2: @ 0x08577FB2
	.string "ひだり$"
	.if (. - gText_Rom_577FB2) > 0x4
	.error "gText_Rom_577FB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FB2) < 0x4
	.space 0x4 - (. - gText_Rom_577FB2)
	.endif
	.incbin "baserom.gba", 0x577fb6, 0x1fe

	@ src/data/easy_chat/easy_chat_group_adjectives.h:4 easy_chat_group_adjectives_line_4
	.globl gText_Rom_5781B4
gText_Rom_5781B4: @ 0x085781B4
	.string "うろうろ$"
	.if (. - gText_Rom_5781B4) > 0x5
	.error "gText_Rom_5781B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781B4) < 0x5
	.space 0x5 - (. - gText_Rom_5781B4)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:10 easy_chat_group_adjectives_line_10
	.globl gText_Rom_5781B9
gText_Rom_5781B9: @ 0x085781B9
	.string "がたがた$"
	.if (. - gText_Rom_5781B9) > 0x5
	.error "gText_Rom_5781B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781B9) < 0x5
	.space 0x5 - (. - gText_Rom_5781B9)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:16 easy_chat_group_adjectives_line_16
	.globl gText_Rom_5781BE
gText_Rom_5781BE: @ 0x085781BE
	.string "カチカチ$"
	.if (. - gText_Rom_5781BE) > 0x5
	.error "gText_Rom_5781BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781BE) < 0x5
	.space 0x5 - (. - gText_Rom_5781BE)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:22 easy_chat_group_adjectives_line_22
	.globl gText_Rom_5781C3
gText_Rom_5781C3: @ 0x085781C3
	.string "がつがつ$"
	.if (. - gText_Rom_5781C3) > 0x5
	.error "gText_Rom_5781C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781C3) < 0x5
	.space 0x5 - (. - gText_Rom_5781C3)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:28 easy_chat_group_adjectives_line_28
	.globl gText_Rom_5781C8
gText_Rom_5781C8: @ 0x085781C8
	.string "ぎゅうぎゅう$"
	.if (. - gText_Rom_5781C8) > 0x7
	.error "gText_Rom_5781C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781C8) < 0x7
	.space 0x7 - (. - gText_Rom_5781C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:34 easy_chat_group_adjectives_line_34
	.globl gText_Rom_5781CF
gText_Rom_5781CF: @ 0x085781CF
	.string "クスクス$"
	.if (. - gText_Rom_5781CF) > 0x5
	.error "gText_Rom_5781CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781CF) < 0x5
	.space 0x5 - (. - gText_Rom_5781CF)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:40 easy_chat_group_adjectives_line_40
	.globl gText_Rom_5781D4
gText_Rom_5781D4: @ 0x085781D4
	.string "くるくる$"
	.if (. - gText_Rom_5781D4) > 0x5
	.error "gText_Rom_5781D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781D4) < 0x5
	.space 0x5 - (. - gText_Rom_5781D4)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:46 easy_chat_group_adjectives_line_46
	.globl gText_Rom_5781D9
gText_Rom_5781D9: @ 0x085781D9
	.string "グルグル$"
	.if (. - gText_Rom_5781D9) > 0x5
	.error "gText_Rom_5781D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781D9) < 0x5
	.space 0x5 - (. - gText_Rom_5781D9)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:52 easy_chat_group_adjectives_line_52
	.globl gText_Rom_5781DE
gText_Rom_5781DE: @ 0x085781DE
	.string "ごくごく$"
	.if (. - gText_Rom_5781DE) > 0x5
	.error "gText_Rom_5781DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781DE) < 0x5
	.space 0x5 - (. - gText_Rom_5781DE)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:58 easy_chat_group_adjectives_line_58
	.globl gText_Rom_5781E3
gText_Rom_5781E3: @ 0x085781E3
	.string "ごろごろ$"
	.if (. - gText_Rom_5781E3) > 0x5
	.error "gText_Rom_5781E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781E3) < 0x5
	.space 0x5 - (. - gText_Rom_5781E3)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:64 easy_chat_group_adjectives_line_64
	.globl gText_Rom_5781E8
gText_Rom_5781E8: @ 0x085781E8
	.string "さらさら$"
	.if (. - gText_Rom_5781E8) > 0x5
	.error "gText_Rom_5781E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781E8) < 0x5
	.space 0x5 - (. - gText_Rom_5781E8)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:70 easy_chat_group_adjectives_line_70
	.globl gText_Rom_5781ED
gText_Rom_5781ED: @ 0x085781ED
	.string "しくしく$"
	.if (. - gText_Rom_5781ED) > 0x5
	.error "gText_Rom_5781ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781ED) < 0x5
	.space 0x5 - (. - gText_Rom_5781ED)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:76 easy_chat_group_adjectives_line_76
	.globl gText_Rom_5781F2
gText_Rom_5781F2: @ 0x085781F2
	.string "ぜんぜん$"
	.if (. - gText_Rom_5781F2) > 0x5
	.error "gText_Rom_5781F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781F2) < 0x5
	.space 0x5 - (. - gText_Rom_5781F2)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:82 easy_chat_group_adjectives_line_82
	.globl gText_Rom_5781F7
gText_Rom_5781F7: @ 0x085781F7
	.string "ダメダメ$"
	.if (. - gText_Rom_5781F7) > 0x5
	.error "gText_Rom_5781F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781F7) < 0x5
	.space 0x5 - (. - gText_Rom_5781F7)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:88 easy_chat_group_adjectives_line_88
	.globl gText_Rom_5781FC
gText_Rom_5781FC: @ 0x085781FC
	.string "だらだら$"
	.if (. - gText_Rom_5781FC) > 0x5
	.error "gText_Rom_5781FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781FC) < 0x5
	.space 0x5 - (. - gText_Rom_5781FC)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:94 easy_chat_group_adjectives_line_94
	.globl gText_Rom_578201
gText_Rom_578201: @ 0x08578201
	.string "ドキドキ$"
	.if (. - gText_Rom_578201) > 0x5
	.error "gText_Rom_578201 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578201) < 0x5
	.space 0x5 - (. - gText_Rom_578201)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:100 easy_chat_group_adjectives_line_100
	.globl gText_Rom_578206
gText_Rom_578206: @ 0x08578206
	.string "どんどん$"
	.if (. - gText_Rom_578206) > 0x5
	.error "gText_Rom_578206 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578206) < 0x5
	.space 0x5 - (. - gText_Rom_578206)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:106 easy_chat_group_adjectives_line_106
	.globl gText_Rom_57820B
gText_Rom_57820B: @ 0x0857820B
	.string "なでなで$"
	.if (. - gText_Rom_57820B) > 0x5
	.error "gText_Rom_57820B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57820B) < 0x5
	.space 0x5 - (. - gText_Rom_57820B)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:112 easy_chat_group_adjectives_line_112
	.globl gText_Rom_578210
gText_Rom_578210: @ 0x08578210
	.string "ぬるぬる$"
	.if (. - gText_Rom_578210) > 0x5
	.error "gText_Rom_578210 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578210) < 0x5
	.space 0x5 - (. - gText_Rom_578210)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:118 easy_chat_group_adjectives_line_118
	.globl gText_Rom_578215
gText_Rom_578215: @ 0x08578215
	.string "はあはあ$"
	.if (. - gText_Rom_578215) > 0x5
	.error "gText_Rom_578215 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578215) < 0x5
	.space 0x5 - (. - gText_Rom_578215)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:124 easy_chat_group_adjectives_line_124
	.globl gText_Rom_57821A
gText_Rom_57821A: @ 0x0857821A
	.string "バキバキ$"
	.if (. - gText_Rom_57821A) > 0x5
	.error "gText_Rom_57821A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57821A) < 0x5
	.space 0x5 - (. - gText_Rom_57821A)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:130 easy_chat_group_adjectives_line_130
	.globl gText_Rom_57821F
gText_Rom_57821F: @ 0x0857821F
	.string "ぱくぱく$"
	.if (. - gText_Rom_57821F) > 0x5
	.error "gText_Rom_57821F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57821F) < 0x5
	.space 0x5 - (. - gText_Rom_57821F)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:136 easy_chat_group_adjectives_line_136
	.globl gText_Rom_578224
gText_Rom_578224: @ 0x08578224
	.string "パラパラ$"
	.if (. - gText_Rom_578224) > 0x5
	.error "gText_Rom_578224 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578224) < 0x5
	.space 0x5 - (. - gText_Rom_578224)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:142 easy_chat_group_adjectives_line_142
	.globl gText_Rom_578229
gText_Rom_578229: @ 0x08578229
	.string "バリバリ$"
	.if (. - gText_Rom_578229) > 0x5
	.error "gText_Rom_578229 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578229) < 0x5
	.space 0x5 - (. - gText_Rom_578229)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:148 easy_chat_group_adjectives_line_148
	.globl gText_Rom_57822E
gText_Rom_57822E: @ 0x0857822E
	.string "ふにゃふにゃ$"
	.if (. - gText_Rom_57822E) > 0x7
	.error "gText_Rom_57822E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57822E) < 0x7
	.space 0x7 - (. - gText_Rom_57822E)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:154 easy_chat_group_adjectives_line_154
	.globl gText_Rom_578235
gText_Rom_578235: @ 0x08578235
	.string "ふらふら$"
	.if (. - gText_Rom_578235) > 0x5
	.error "gText_Rom_578235 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578235) < 0x5
	.space 0x5 - (. - gText_Rom_578235)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:160 easy_chat_group_adjectives_line_160
	.globl gText_Rom_57823A
gText_Rom_57823A: @ 0x0857823A
	.string "ブルブル$"
	.if (. - gText_Rom_57823A) > 0x5
	.error "gText_Rom_57823A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57823A) < 0x5
	.space 0x5 - (. - gText_Rom_57823A)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:166 easy_chat_group_adjectives_line_166
	.globl gText_Rom_57823F
gText_Rom_57823F: @ 0x0857823F
	.string "べろべろ$"
	.if (. - gText_Rom_57823F) > 0x5
	.error "gText_Rom_57823F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57823F) < 0x5
	.space 0x5 - (. - gText_Rom_57823F)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:172 easy_chat_group_adjectives_line_172
	.globl gText_Rom_578244
gText_Rom_578244: @ 0x08578244
	.string "ボロボロ$"
	.if (. - gText_Rom_578244) > 0x5
	.error "gText_Rom_578244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578244) < 0x5
	.space 0x5 - (. - gText_Rom_578244)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:178 easy_chat_group_adjectives_line_178
	.globl gText_Rom_578249
gText_Rom_578249: @ 0x08578249
	.string "ますます$"
	.if (. - gText_Rom_578249) > 0x5
	.error "gText_Rom_578249 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578249) < 0x5
	.space 0x5 - (. - gText_Rom_578249)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:184 easy_chat_group_adjectives_line_184
	.globl gText_Rom_57824E
gText_Rom_57824E: @ 0x0857824E
	.string "まだまだ$"
	.if (. - gText_Rom_57824E) > 0x5
	.error "gText_Rom_57824E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57824E) < 0x5
	.space 0x5 - (. - gText_Rom_57824E)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:190 easy_chat_group_adjectives_line_190
	.globl gText_Rom_578253
gText_Rom_578253: @ 0x08578253
	.string "めちゃめちゃ$"
	.if (. - gText_Rom_578253) > 0x7
	.error "gText_Rom_578253 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578253) < 0x7
	.space 0x7 - (. - gText_Rom_578253)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:196 easy_chat_group_adjectives_line_196
	.globl gText_Rom_57825A
gText_Rom_57825A: @ 0x0857825A
	.string "メラメラ$"
	.if (. - gText_Rom_57825A) > 0x5
	.error "gText_Rom_57825A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57825A) < 0x5
	.space 0x5 - (. - gText_Rom_57825A)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:202 easy_chat_group_adjectives_line_202
	.globl gText_Rom_57825F
gText_Rom_57825F: @ 0x0857825F
	.string "ラブラブ$"
	.if (. - gText_Rom_57825F) > 0x5
	.error "gText_Rom_57825F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57825F) < 0x5
	.space 0x5 - (. - gText_Rom_57825F)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:208 easy_chat_group_adjectives_line_208
	.globl gText_Rom_578264
gText_Rom_578264: @ 0x08578264
	.string "るんるん$"
	.if (. - gText_Rom_578264) > 0x5
	.error "gText_Rom_578264 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578264) < 0x5
	.space 0x5 - (. - gText_Rom_578264)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:214 easy_chat_group_adjectives_line_214
	.globl gText_Rom_578269
gText_Rom_578269: @ 0x08578269
	.string "わくわく$"
	.if (. - gText_Rom_578269) > 0x5
	.error "gText_Rom_578269 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578269) < 0x5
	.space 0x5 - (. - gText_Rom_578269)
	.endif
	.incbin "baserom.gba", 0x57826e, 0x1b2

	@ src/data/easy_chat/easy_chat_group_events.h:1 gEasyChatWord_Appeal (+3 aliases)
	.globl gText_Rom_578420
gText_Rom_578420: @ 0x08578420
	.string "アピール$"
	.if (. - gText_Rom_578420) > 0x5
	.error "gText_Rom_578420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578420) < 0x5
	.space 0x5 - (. - gText_Rom_578420)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:2 gEasyChatWord_Events (+3 aliases)
	.globl gText_Rom_578425
gText_Rom_578425: @ 0x08578425
	.string "イベント$"
	.if (. - gText_Rom_578425) > 0x5
	.error "gText_Rom_578425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578425) < 0x5
	.space 0x5 - (. - gText_Rom_578425)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:3 gEasyChatWord_StayAtHome (+1 aliases)
	.globl gText_Rom_57842A
gText_Rom_57842A: @ 0x0857842A
	.string "おるすばん$"
	.if (. - gText_Rom_57842A) > 0x6
	.error "gText_Rom_57842A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57842A) < 0x6
	.space 0x6 - (. - gText_Rom_57842A)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:4 gEasyChatWord_Berry (+4 aliases)
	.globl gText_Rom_578430
gText_Rom_578430: @ 0x08578430
	.string "きのみ$"
	.if (. - gText_Rom_578430) > 0x4
	.error "gText_Rom_578430 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578430) < 0x4
	.space 0x4 - (. - gText_Rom_578430)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:5 gEasyChatWord_Contest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_578434
gText_Rom_578434: @ 0x08578434
	.string "コンテスト$"
	.if (. - gText_Rom_578434) != 0x6
	.error "gText_Rom_578434 must retain its original byte length"
	.endif
	.globl gText_Rom_578436
	.set gText_Rom_578436, gText_Rom_578434 + 0x2

	@ src/data/easy_chat/easy_chat_group_events.h:6 gEasyChatWord_Mc (+1 aliases)
	.globl gText_Rom_57843A
gText_Rom_57843A: @ 0x0857843A
	.string "しかいしゃ$"
	.if (. - gText_Rom_57843A) > 0x6
	.error "gText_Rom_57843A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57843A) < 0x6
	.space 0x6 - (. - gText_Rom_57843A)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:7 gEasyChatWord_Judge (+1 aliases)
	.globl gText_Rom_578440
gText_Rom_578440: @ 0x08578440
	.string "しんさいん$"
	.if (. - gText_Rom_578440) > 0x6
	.error "gText_Rom_578440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578440) < 0x6
	.space 0x6 - (. - gText_Rom_578440)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:8 gEasyChatWord_Super (+3 aliases)
	.globl gText_Rom_578446
gText_Rom_578446: @ 0x08578446
	.string "スーパー$"
	.if (. - gText_Rom_578446) > 0x5
	.error "gText_Rom_578446 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578446) < 0x5
	.space 0x5 - (. - gText_Rom_578446)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:9 gEasyChatWord_Stage (+1 aliases)
	.globl gText_Rom_57844B
gText_Rom_57844B: @ 0x0857844B
	.string "ステージ$"
	.if (. - gText_Rom_57844B) > 0x5
	.error "gText_Rom_57844B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57844B) < 0x5
	.space 0x5 - (. - gText_Rom_57844B)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:10 gEasyChatWord_HallOfFame (+2 aliases)
	.globl gText_Rom_578450
gText_Rom_578450: @ 0x08578450
	.string "でんどういり$"
	.if (. - gText_Rom_578450) > 0x7
	.error "gText_Rom_578450 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578450) < 0x7
	.space 0x7 - (. - gText_Rom_578450)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gText_Rom_578457
gText_Rom_578457: @ 0x08578457
	.string "ノーマル$"
	.if (. - gText_Rom_578457) > 0x5
	.error "gText_Rom_578457 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578457) < 0x5
	.space 0x5 - (. - gText_Rom_578457)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:12 gEasyChatWord_Hyper (+3 aliases)
	.globl gText_Rom_57845C
gText_Rom_57845C: @ 0x0857845C
	.string "ハイパー$"
	.if (. - gText_Rom_57845C) > 0x5
	.error "gText_Rom_57845C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57845C) < 0x5
	.space 0x5 - (. - gText_Rom_57845C)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:13 gEasyChatWord_BattleTower (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_578461
gText_Rom_578461: @ 0x08578461
	.string "バトルタワー$"
	.if (. - gText_Rom_578461) != 0x7
	.error "gText_Rom_578461 must retain its original byte length"
	.endif
	.globl gText_Rom_578464
	.set gText_Rom_578464, gText_Rom_578461 + 0x3

	@ src/data/easy_chat/easy_chat_group_events.h:14 gEasyChatWord_Leaders (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_578468
gText_Rom_578468: @ 0x08578468
	.string "バトルリーダー$"
	.if (. - gText_Rom_578468) != 0x8
	.error "gText_Rom_578468 must retain its original byte length"
	.endif
	.globl gText_Rom_57846B
	.set gText_Rom_57846B, gText_Rom_578468 + 0x3

	@ src/data/easy_chat/easy_chat_group_events.h:15 gEasyChatWord_BattleRoom (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_578470
gText_Rom_578470: @ 0x08578470
	.string "バトルルーム$"
	.if (. - gText_Rom_578470) != 0x7
	.error "gText_Rom_578470 must retain its original byte length"
	.endif
	.globl gText_Rom_578473
	.set gText_Rom_578473, gText_Rom_578470 + 0x3

	@ src/data/easy_chat/easy_chat_group_events.h:16 gEasyChatWord_Hidden (+1 aliases)
	.globl gText_Rom_578477
gText_Rom_578477: @ 0x08578477
	.string "ひでん$"
	.if (. - gText_Rom_578477) > 0x4
	.error "gText_Rom_578477 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578477) < 0x4
	.space 0x4 - (. - gText_Rom_578477)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:17 gEasyChatWord_SecretBase (+3 aliases)
	.globl gText_Rom_57847B
gText_Rom_57847B: @ 0x0857847B
	.string "ひみつきち$"
	.if (. - gText_Rom_57847B) > 0x6
	.error "gText_Rom_57847B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57847B) < 0x6
	.space 0x6 - (. - gText_Rom_57847B)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:18 gEasyChatWord_Blend (+1 aliases)
	.globl gText_Rom_578481
gText_Rom_578481: @ 0x08578481
	.string "ブレンド$"
	.if (. - gText_Rom_578481) > 0x5
	.error "gText_Rom_578481 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578481) < 0x5
	.space 0x5 - (. - gText_Rom_578481)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:19 gEasyChatWord_POKEBLOCK (+1 aliases)
	.globl gText_Rom_578486
gText_Rom_578486: @ 0x08578486
	.string "ポロック$"
	.if (. - gText_Rom_578486) > 0x5
	.error "gText_Rom_578486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578486) < 0x5
	.space 0x5 - (. - gText_Rom_578486)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:20 gEasyChatWord_Master (+3 aliases)
	.globl gText_Rom_57848B
gText_Rom_57848B: @ 0x0857848B
	.string "マスター$"
	.if (. - gText_Rom_57848B) > 0x5
	.error "gText_Rom_57848B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57848B) < 0x5
	.space 0x5 - (. - gText_Rom_57848B)
	.endif

	@ src/battle_debug.c:320 battle_debug_line_320 (+3 aliases)
	.globl gText_Rom_578490
gText_Rom_578490: @ 0x08578490
	.string "ランク$"
	.if (. - gText_Rom_578490) > 0x4
	.error "gText_Rom_578490 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578490) < 0x4
	.space 0x4 - (. - gText_Rom_578490)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:22 gEasyChatWord_Ribbon (+1 aliases)
	.globl gText_Rom_578494
gText_Rom_578494: @ 0x08578494
	.string "リボン$"
	.if (. - gText_Rom_578494) > 0x4
	.error "gText_Rom_578494 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578494) < 0x4
	.space 0x4 - (. - gText_Rom_578494)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:23 gEasyChatWord_Crush (+1 aliases)
	.globl gText_Rom_578498
gText_Rom_578498: @ 0x08578498
	.string "クラッシュ$"
	.if (. - gText_Rom_578498) > 0x6
	.error "gText_Rom_578498 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578498) < 0x6
	.space 0x6 - (. - gText_Rom_578498)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:24 gEasyChatWord_Direct (+1 aliases)
	.globl gText_Rom_57849E
gText_Rom_57849E: @ 0x0857849E
	.string "ダイレクト$"
	.if (. - gText_Rom_57849E) > 0x6
	.error "gText_Rom_57849E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57849E) < 0x6
	.space 0x6 - (. - gText_Rom_57849E)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:25 gEasyChatWord_Tower (+1 aliases)
	.globl gText_Rom_5784A4
gText_Rom_5784A4: @ 0x085784A4
	.string "タワー$"
	.if (. - gText_Rom_5784A4) > 0x4
	.error "gText_Rom_5784A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5784A4) < 0x4
	.space 0x4 - (. - gText_Rom_5784A4)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:26 gEasyChatWord_Union (+1 aliases)
	.globl gText_Rom_5784A8
gText_Rom_5784A8: @ 0x085784A8
	.string "ユニオン$"
	.if (. - gText_Rom_5784A8) > 0x5
	.error "gText_Rom_5784A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5784A8) < 0x5
	.space 0x5 - (. - gText_Rom_5784A8)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:27 gEasyChatWord_Room (+1 aliases)
	.globl gText_Rom_5784AD
gText_Rom_5784AD: @ 0x085784AD
	.string "ルーム$"
	.if (. - gText_Rom_5784AD) > 0x4
	.error "gText_Rom_5784AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5784AD) < 0x4
	.space 0x4 - (. - gText_Rom_5784AD)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:28 gEasyChatWord_Wireless (+1 aliases)
	.globl gText_Rom_5784B1
gText_Rom_5784B1: @ 0x085784B1
	.string "ワイヤレス$"
	.if (. - gText_Rom_5784B1) > 0x6
	.error "gText_Rom_5784B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5784B1) < 0x6
	.space 0x6 - (. - gText_Rom_5784B1)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:29 gEasyChatWord_Frontier (+1 aliases)
	.globl gText_Rom_5784B7
gText_Rom_5784B7: @ 0x085784B7
	.string "フロンティア$"
	.if (. - gText_Rom_5784B7) > 0x7
	.error "gText_Rom_5784B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5784B7) < 0x7
	.space 0x7 - (. - gText_Rom_5784B7)
	.endif
	.incbin "baserom.gba", 0x5784be, 0x422

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:4 easy_chat_group_trendy_saying_line_4
	.globl gText_Rom_5788E0
gText_Rom_5788E0: @ 0x085788E0
	.string "4649$"
	.if (. - gText_Rom_5788E0) > 0x5
	.error "gText_Rom_5788E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5788E0) < 0x5
	.space 0x5 - (. - gText_Rom_5788E0)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:10 easy_chat_group_trendy_saying_line_10
	.globl gText_Rom_5788E5
gText_Rom_5788E5: @ 0x085788E5
	.string "アイアイサー$"
	.if (. - gText_Rom_5788E5) > 0x7
	.error "gText_Rom_5788E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5788E5) < 0x7
	.space 0x7 - (. - gText_Rom_5788E5)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:16 easy_chat_group_trendy_saying_line_16
	.globl gText_Rom_5788EC
gText_Rom_5788EC: @ 0x085788EC
	.string "アバンギャルド$"
	.if (. - gText_Rom_5788EC) > 0x8
	.error "gText_Rom_5788EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5788EC) < 0x8
	.space 0x8 - (. - gText_Rom_5788EC)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:22 easy_chat_group_trendy_saying_line_22
	.globl gText_Rom_5788F4
gText_Rom_5788F4: @ 0x085788F4
	.string "アベック$"
	.if (. - gText_Rom_5788F4) > 0x5
	.error "gText_Rom_5788F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5788F4) < 0x5
	.space 0x5 - (. - gText_Rom_5788F4)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:28 easy_chat_group_trendy_saying_line_28
	.globl gText_Rom_5788F9
gText_Rom_5788F9: @ 0x085788F9
	.string "ありがじゅう$"
	.if (. - gText_Rom_5788F9) > 0x7
	.error "gText_Rom_5788F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5788F9) < 0x7
	.space 0x7 - (. - gText_Rom_5788F9)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:34 easy_chat_group_trendy_saying_line_34
	.globl gText_Rom_578900
gText_Rom_578900: @ 0x08578900
	.string "イェーイ$"
	.if (. - gText_Rom_578900) > 0x5
	.error "gText_Rom_578900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578900) < 0x5
	.space 0x5 - (. - gText_Rom_578900)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:40 easy_chat_group_trendy_saying_line_40
	.globl gText_Rom_578905
gText_Rom_578905: @ 0x08578905
	.string "イカス$"
	.if (. - gText_Rom_578905) > 0x4
	.error "gText_Rom_578905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578905) < 0x4
	.space 0x4 - (. - gText_Rom_578905)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:46 easy_chat_group_trendy_saying_line_46
	.globl gText_Rom_578909
gText_Rom_578909: @ 0x08578909
	.string "イチコロ$"
	.if (. - gText_Rom_578909) > 0x5
	.error "gText_Rom_578909 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578909) < 0x5
	.space 0x5 - (. - gText_Rom_578909)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:52 easy_chat_group_trendy_saying_line_52
	.globl gText_Rom_57890E
gText_Rom_57890E: @ 0x0857890E
	.string "いのち$"
	.if (. - gText_Rom_57890E) > 0x4
	.error "gText_Rom_57890E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57890E) < 0x4
	.space 0x4 - (. - gText_Rom_57890E)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:58 easy_chat_group_trendy_saying_line_58
	.globl gText_Rom_578912
gText_Rom_578912: @ 0x08578912
	.string "おきゃん$"
	.if (. - gText_Rom_578912) > 0x5
	.error "gText_Rom_578912 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578912) < 0x5
	.space 0x5 - (. - gText_Rom_578912)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:64 easy_chat_group_trendy_saying_line_64
	.globl gText_Rom_578917
gText_Rom_578917: @ 0x08578917
	.string "おニュー$"
	.if (. - gText_Rom_578917) > 0x5
	.error "gText_Rom_578917 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578917) < 0x5
	.space 0x5 - (. - gText_Rom_578917)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:70 easy_chat_group_trendy_saying_line_70
	.globl gText_Rom_57891C
gText_Rom_57891C: @ 0x0857891C
	.string "ぎゃふん$"
	.if (. - gText_Rom_57891C) > 0x5
	.error "gText_Rom_57891C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57891C) < 0x5
	.space 0x5 - (. - gText_Rom_57891C)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:76 easy_chat_group_trendy_saying_line_76
	.globl gText_Rom_578921
gText_Rom_578921: @ 0x08578921
	.string "そんなバナナ$"
	.if (. - gText_Rom_578921) > 0x7
	.error "gText_Rom_578921 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578921) < 0x7
	.space 0x7 - (. - gText_Rom_578921)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:82 easy_chat_group_trendy_saying_line_82
	.globl gText_Rom_578928
gText_Rom_578928: @ 0x08578928
	.string "ダサイ$"
	.if (. - gText_Rom_578928) > 0x4
	.error "gText_Rom_578928 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578928) < 0x4
	.space 0x4 - (. - gText_Rom_578928)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:88 easy_chat_group_trendy_saying_line_88
	.globl gText_Rom_57892C
gText_Rom_57892C: @ 0x0857892C
	.string "トホホ$"
	.if (. - gText_Rom_57892C) > 0x4
	.error "gText_Rom_57892C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57892C) < 0x4
	.space 0x4 - (. - gText_Rom_57892C)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:94 easy_chat_group_trendy_saying_line_94
	.globl gText_Rom_578930
gText_Rom_578930: @ 0x08578930
	.string "トレンディー$"
	.if (. - gText_Rom_578930) > 0x7
	.error "gText_Rom_578930 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578930) < 0x7
	.space 0x7 - (. - gText_Rom_578930)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:100 easy_chat_group_trendy_saying_line_100
	.globl gText_Rom_578937
gText_Rom_578937: @ 0x08578937
	.string "ナウイ$"
	.if (. - gText_Rom_578937) > 0x4
	.error "gText_Rom_578937 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578937) < 0x4
	.space 0x4 - (. - gText_Rom_578937)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:106 easy_chat_group_trendy_saying_line_106
	.globl gText_Rom_57893B
gText_Rom_57893B: @ 0x0857893B
	.string "なるへそ$"
	.if (. - gText_Rom_57893B) > 0x5
	.error "gText_Rom_57893B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57893B) < 0x5
	.space 0x5 - (. - gText_Rom_57893B)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:112 easy_chat_group_trendy_saying_line_112
	.globl gText_Rom_578940
gText_Rom_578940: @ 0x08578940
	.string "ネクラ$"
	.if (. - gText_Rom_578940) > 0x4
	.error "gText_Rom_578940 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578940) < 0x4
	.space 0x4 - (. - gText_Rom_578940)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:118 easy_chat_group_trendy_saying_line_118
	.globl gText_Rom_578944
gText_Rom_578944: @ 0x08578944
	.string "ノリノリ$"
	.if (. - gText_Rom_578944) > 0x5
	.error "gText_Rom_578944 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578944) < 0x5
	.space 0x5 - (. - gText_Rom_578944)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:124 easy_chat_group_trendy_saying_line_124
	.globl gText_Rom_578949
gText_Rom_578949: @ 0x08578949
	.string "ハイカラ$"
	.if (. - gText_Rom_578949) > 0x5
	.error "gText_Rom_578949 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578949) < 0x5
	.space 0x5 - (. - gText_Rom_578949)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:130 easy_chat_group_trendy_saying_line_130
	.globl gText_Rom_57894E
gText_Rom_57894E: @ 0x0857894E
	.string "バイナラ$"
	.if (. - gText_Rom_57894E) > 0x5
	.error "gText_Rom_57894E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57894E) < 0x5
	.space 0x5 - (. - gText_Rom_57894E)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:136 easy_chat_group_trendy_saying_line_136
	.globl gText_Rom_578953
gText_Rom_578953: @ 0x08578953
	.string "バカウケ$"
	.if (. - gText_Rom_578953) > 0x5
	.error "gText_Rom_578953 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578953) < 0x5
	.space 0x5 - (. - gText_Rom_578953)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:142 easy_chat_group_trendy_saying_line_142
	.globl gText_Rom_578958
gText_Rom_578958: @ 0x08578958
	.string "バタンキュー$"
	.if (. - gText_Rom_578958) > 0x7
	.error "gText_Rom_578958 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578958) < 0x7
	.space 0x7 - (. - gText_Rom_578958)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:148 easy_chat_group_trendy_saying_line_148
	.globl gText_Rom_57895F
gText_Rom_57895F: @ 0x0857895F
	.string "ハッスル$"
	.if (. - gText_Rom_57895F) > 0x5
	.error "gText_Rom_57895F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57895F) < 0x5
	.space 0x5 - (. - gText_Rom_57895F)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:154 easy_chat_group_trendy_saying_line_154
	.globl gText_Rom_578964
gText_Rom_578964: @ 0x08578964
	.string "バッチグー$"
	.if (. - gText_Rom_578964) > 0x6
	.error "gText_Rom_578964 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578964) < 0x6
	.space 0x6 - (. - gText_Rom_578964)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:160 easy_chat_group_trendy_saying_line_160
	.globl gText_Rom_57896A
gText_Rom_57896A: @ 0x0857896A
	.string "フィーバー$"
	.if (. - gText_Rom_57896A) > 0x6
	.error "gText_Rom_57896A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57896A) < 0x6
	.space 0x6 - (. - gText_Rom_57896A)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:166 easy_chat_group_trendy_saying_line_166
	.globl gText_Rom_578970
gText_Rom_578970: @ 0x08578970
	.string "ぶりっこ$"
	.if (. - gText_Rom_578970) > 0x5
	.error "gText_Rom_578970 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578970) < 0x5
	.space 0x5 - (. - gText_Rom_578970)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:172 easy_chat_group_trendy_saying_line_172
	.globl gText_Rom_578975
gText_Rom_578975: @ 0x08578975
	.string "ベイベー$"
	.if (. - gText_Rom_578975) > 0x5
	.error "gText_Rom_578975 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578975) < 0x5
	.space 0x5 - (. - gText_Rom_578975)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:178 easy_chat_group_trendy_saying_line_178
	.globl gText_Rom_57897A
gText_Rom_57897A: @ 0x0857897A
	.string "むねキュン$"
	.if (. - gText_Rom_57897A) > 0x6
	.error "gText_Rom_57897A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57897A) < 0x6
	.space 0x6 - (. - gText_Rom_57897A)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:184 easy_chat_group_trendy_saying_line_184
	.globl gText_Rom_578980
gText_Rom_578980: @ 0x08578980
	.string "モーレツ$"
	.if (. - gText_Rom_578980) > 0x5
	.error "gText_Rom_578980 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578980) < 0x5
	.space 0x5 - (. - gText_Rom_578980)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:190 easy_chat_group_trendy_saying_line_190
	.globl gText_Rom_578985
gText_Rom_578985: @ 0x08578985
	.string "ヤング$"
	.if (. - gText_Rom_578985) > 0x4
	.error "gText_Rom_578985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578985) < 0x4
	.space 0x4 - (. - gText_Rom_578985)
	.endif

	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:196 easy_chat_group_trendy_saying_line_196
	.globl gText_Rom_578989
gText_Rom_578989: @ 0x08578989
	.string "レッツラゴー$"
	.if (. - gText_Rom_578989) > 0x7
	.error "gText_Rom_578989 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578989) < 0x7
	.space 0x7 - (. - gText_Rom_578989)
	.endif
	.incbin "baserom.gba", 0x578990, 0x384
	.globl gUnknown_8578D14
gUnknown_8578D14: @ 0x08578D14
	.incbin "baserom.gba", 0x578d14, 0xff0
	.globl gUnknown_8579D04
gUnknown_8579D04: @ 0x08579D04
	.incbin "baserom.gba", 0x579d04, 0x168

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_579E6C
gText_Rom_579E6C: @ 0x08579E6C
	.string "ポケモン$"
	.if (. - gText_Rom_579E6C) > 0x5
	.error "gText_Rom_579E6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E6C) < 0x5
	.space 0x5 - (. - gText_Rom_579E6C)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_579E71
gText_Rom_579E71: @ 0x08579E71
	.string "トレーナー$"
	.if (. - gText_Rom_579E71) > 0x6
	.error "gText_Rom_579E71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E71) < 0x6
	.space 0x6 - (. - gText_Rom_579E71)
	.endif

	@ src/battle_debug.c:319 battle_debug_line_319 (+1 aliases)
	.globl gText_Rom_579E77
gText_Rom_579E77: @ 0x08579E77
	.string "ステータス$"
	.if (. - gText_Rom_579E77) > 0x6
	.error "gText_Rom_579E77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E77) < 0x6
	.space 0x6 - (. - gText_Rom_579E77)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:244 easy_chat_group_battle_line_244 (+3 aliases)
	.globl gText_Rom_579E7D
gText_Rom_579E7D: @ 0x08579E7D
	.string "バトル$"
	.if (. - gText_Rom_579E7D) > 0x4
	.error "gText_Rom_579E7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E7D) < 0x4
	.space 0x4 - (. - gText_Rom_579E7D)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:57 easy_chat_groups_line_57 (+1 aliases)
	.globl gText_Rom_579E81
gText_Rom_579E81: @ 0x08579E81
	.string "あいさつ$"
	.if (. - gText_Rom_579E81) > 0x5
	.error "gText_Rom_579E81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E81) < 0x5
	.space 0x5 - (. - gText_Rom_579E81)
	.endif
	.incbin "baserom.gba", 0x579e86, 0x6

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:34 easy_chat_group_lifestyle_line_34 (+1 aliases)
	.globl gText_Rom_579E8C
gText_Rom_579E8C: @ 0x08579E8C
	.string "かいわ$"
	.if (. - gText_Rom_579E8C) > 0x4
	.error "gText_Rom_579E8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E8C) < 0x4
	.space 0x4 - (. - gText_Rom_579E8C)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:85 easy_chat_groups_line_85
	.globl gText_Rom_579E90
gText_Rom_579E90: @ 0x08579E90
	.string "むすび$"
	.if (. - gText_Rom_579E90) > 0x4
	.error "gText_Rom_579E90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E90) < 0x4
	.space 0x4 - (. - gText_Rom_579E90)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:92 easy_chat_groups_line_92
	.globl gText_Rom_579E94
gText_Rom_579E94: @ 0x08579E94
	.string "きもち$"
	.if (. - gText_Rom_579E94) > 0x4
	.error "gText_Rom_579E94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E94) < 0x4
	.space 0x4 - (. - gText_Rom_579E94)
	.endif

	@ src/battle_debug.c:321 battle_debug_line_321 (+2 aliases)
	.globl gText_Rom_579E98
gText_Rom_579E98: @ 0x08579E98
	.string "じょうたい$"
	.if (. - gText_Rom_579E98) > 0x6
	.error "gText_Rom_579E98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E98) < 0x6
	.space 0x6 - (. - gText_Rom_579E98)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:106 easy_chat_groups_line_106
	.globl gText_Rom_579E9E
gText_Rom_579E9E: @ 0x08579E9E
	.string "こうどう$"
	.if (. - gText_Rom_579E9E) > 0x5
	.error "gText_Rom_579E9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E9E) < 0x5
	.space 0x5 - (. - gText_Rom_579E9E)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:118 easy_chat_group_lifestyle_line_118 (+1 aliases)
	.globl gText_Rom_579EA3
gText_Rom_579EA3: @ 0x08579EA3
	.string "せいかつ$"
	.if (. - gText_Rom_579EA3) > 0x5
	.error "gText_Rom_579EA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EA3) < 0x5
	.space 0x5 - (. - gText_Rom_579EA3)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:136 easy_chat_group_hobbies_line_136 (+1 aliases)
	.globl gText_Rom_579EA8
gText_Rom_579EA8: @ 0x08579EA8
	.string "しゅみ$"
	.if (. - gText_Rom_579EA8) > 0x4
	.error "gText_Rom_579EA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EA8) < 0x4
	.space 0x4 - (. - gText_Rom_579EA8)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:118 easy_chat_group_time_line_118 (+1 aliases)
	.globl gText_Rom_579EAC
gText_Rom_579EAC: @ 0x08579EAC
	.string "じかん$"
	.if (. - gText_Rom_579EAC) > 0x4
	.error "gText_Rom_579EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EAC) < 0x4
	.space 0x4 - (. - gText_Rom_579EAC)
	.endif

