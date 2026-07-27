	@ src/data/easy_chat/easy_chat_group_battle.h:118 easy_chat_group_battle_line_118
	.globl gText_Rom_5750A3
gText_Rom_5750A3: @ 0x085750A3
	.string "こうさん$"
	.if (. - gText_Rom_5750A3) > 0x5
	.error "gText_Rom_5750A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750A3) < 0x5
	.space 0x5 - (. - gText_Rom_5750A3)
	.endif

	@ src/data/abilities.h:476 abilities_line_476 (+2 aliases)
	.globl gText_Rom_5750A8
gText_Rom_5750A8: @ 0x085750A8
	.string "こんじょう$"
	.if (. - gText_Rom_5750A8) > 0x6
	.error "gText_Rom_5750A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750A8) < 0x6
	.space 0x6 - (. - gText_Rom_5750A8)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:130 easy_chat_group_battle_line_130
	.globl gText_Rom_5750AE
gText_Rom_5750AE: @ 0x085750AE
	.string "さいのう$"
	.if (. - gText_Rom_5750AE) > 0x5
	.error "gText_Rom_5750AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750AE) < 0x5
	.space 0x5 - (. - gText_Rom_5750AE)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:136 easy_chat_group_battle_line_136 (+1 aliases)
	.globl gText_Rom_5750B3
gText_Rom_5750B3: @ 0x085750B3
	.string "さくせん$"
	.if (. - gText_Rom_5750B3) > 0x5
	.error "gText_Rom_5750B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750B3) < 0x5
	.space 0x5 - (. - gText_Rom_5750B3)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:142 easy_chat_group_battle_line_142
	.globl gText_Rom_5750B8
gText_Rom_5750B8: @ 0x085750B8
	.string "さばき$"
	.if (. - gText_Rom_5750B8) > 0x4
	.error "gText_Rom_5750B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750B8) < 0x4
	.space 0x4 - (. - gText_Rom_5750B8)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:148 easy_chat_group_battle_line_148
	.globl gText_Rom_5750BC
gText_Rom_5750BC: @ 0x085750BC
	.string "しょうぶ$"
	.if (. - gText_Rom_5750BC) > 0x5
	.error "gText_Rom_5750BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750BC) < 0x5
	.space 0x5 - (. - gText_Rom_5750BC)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:154 easy_chat_group_battle_line_154 (+1 aliases)
	.globl gText_Rom_5750C1
gText_Rom_5750C1: @ 0x085750C1
	.string "しょうり$"
	.if (. - gText_Rom_5750C1) > 0x5
	.error "gText_Rom_5750C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750C1) < 0x5
	.space 0x5 - (. - gText_Rom_5750C1)
	.endif
	.incbin "baserom.gba", 0x5750c6, 0x3

	@ src/data/easy_chat/easy_chat_group_battle.h:166 easy_chat_group_battle_line_166
	.globl gText_Rom_5750C9
gText_Rom_5750C9: @ 0x085750C9
	.string "センス$"
	.if (. - gText_Rom_5750C9) > 0x4
	.error "gText_Rom_5750C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750C9) < 0x4
	.space 0x4 - (. - gText_Rom_5750C9)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:172 easy_chat_group_battle_line_172 (+1 aliases)
	.globl gText_Rom_5750CD
gText_Rom_5750CD: @ 0x085750CD
	.string "たいせん$"
	.if (. - gText_Rom_5750CD) > 0x5
	.error "gText_Rom_5750CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750CD) < 0x5
	.space 0x5 - (. - gText_Rom_5750CD)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:178 easy_chat_group_battle_line_178
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5750D2
gText_Rom_5750D2: @ 0x085750D2
	.string "たたかい$"
	.if (. - gText_Rom_5750D2) != 0x5
	.error "gText_Rom_5750D2 must retain its original byte length"
	.endif
	.globl gText_Rom_5750D3
	.set gText_Rom_5750D3, gText_Rom_5750D2 + 0x1

	@ src/data/easy_chat/easy_chat_group_battle.h:184 easy_chat_group_battle_line_184
	.globl gText_Rom_5750D7
gText_Rom_5750D7: @ 0x085750D7
	.string "ちから$"
	.if (. - gText_Rom_5750D7) > 0x4
	.error "gText_Rom_5750D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750D7) < 0x4
	.space 0x4 - (. - gText_Rom_5750D7)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:190 easy_chat_group_battle_line_190
	.globl gText_Rom_5750DB
gText_Rom_5750DB: @ 0x085750DB
	.string "チャレンジ$"
	.if (. - gText_Rom_5750DB) > 0x6
	.error "gText_Rom_5750DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750DB) < 0x6
	.space 0x6 - (. - gText_Rom_5750DB)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:196 easy_chat_group_battle_line_196
	.globl gText_Rom_5750E1
gText_Rom_5750E1: @ 0x085750E1
	.string "つよい$"
	.if (. - gText_Rom_5750E1) > 0x4
	.error "gText_Rom_5750E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750E1) < 0x4
	.space 0x4 - (. - gText_Rom_5750E1)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:202 easy_chat_group_battle_line_202
	.globl gText_Rom_5750E5
gText_Rom_5750E5: @ 0x085750E5
	.string "つよすぎ$"
	.if (. - gText_Rom_5750E5) > 0x5
	.error "gText_Rom_5750E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750E5) < 0x5
	.space 0x5 - (. - gText_Rom_5750E5)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:208 easy_chat_group_battle_line_208 (+1 aliases)
	.globl gText_Rom_5750EA
gText_Rom_5750EA: @ 0x085750EA
	.string "てかげん$"
	.if (. - gText_Rom_5750EA) > 0x5
	.error "gText_Rom_5750EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750EA) < 0x5
	.space 0x5 - (. - gText_Rom_5750EA)
	.endif
	.incbin "baserom.gba", 0x5750ef, 0x3

	@ src/data/easy_chat/easy_chat_group_battle.h:220 easy_chat_group_battle_line_220
	.globl gText_Rom_5750F2
gText_Rom_5750F2: @ 0x085750F2
	.string "てんさい$"
	.if (. - gText_Rom_5750F2) > 0x5
	.error "gText_Rom_5750F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750F2) < 0x5
	.space 0x5 - (. - gText_Rom_5750F2)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:226 easy_chat_group_battle_line_226 (+1 aliases)
	.globl gText_Rom_5750F7
gText_Rom_5750F7: @ 0x085750F7
	.string "でんせつ$"
	.if (. - gText_Rom_5750F7) > 0x5
	.error "gText_Rom_5750F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750F7) < 0x5
	.space 0x5 - (. - gText_Rom_5750F7)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:232 easy_chat_group_battle_line_232
	.globl gText_Rom_5750FC
gText_Rom_5750FC: @ 0x085750FC
	.string "にげ$"
	.if (. - gText_Rom_5750FC) > 0x3
	.error "gText_Rom_5750FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750FC) < 0x3
	.space 0x3 - (. - gText_Rom_5750FC)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:238 easy_chat_group_battle_line_238
	.globl gText_Rom_5750FF
gText_Rom_5750FF: @ 0x085750FF
	.string "ねらう$"
	.if (. - gText_Rom_5750FF) > 0x4
	.error "gText_Rom_5750FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750FF) < 0x4
	.space 0x4 - (. - gText_Rom_5750FF)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:244 easy_chat_group_battle_line_244 (+3 aliases)
	.globl gText_Rom_575103
gText_Rom_575103: @ 0x08575103
	.string "バトル$"
	.if (. - gText_Rom_575103) > 0x4
	.error "gText_Rom_575103 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575103) < 0x4
	.space 0x4 - (. - gText_Rom_575103)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:250 easy_chat_group_battle_line_250
	.globl gText_Rom_575107
gText_Rom_575107: @ 0x08575107
	.string "ファイト$"
	.if (. - gText_Rom_575107) > 0x5
	.error "gText_Rom_575107 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575107) < 0x5
	.space 0x5 - (. - gText_Rom_575107)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:256 easy_chat_group_battle_line_256
	.globl gText_Rom_57510C
gText_Rom_57510C: @ 0x0857510C
	.string "ふっかつ$"
	.if (. - gText_Rom_57510C) > 0x5
	.error "gText_Rom_57510C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57510C) < 0x5
	.space 0x5 - (. - gText_Rom_57510C)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:262 easy_chat_group_battle_line_262
	.globl gText_Rom_575111
gText_Rom_575111: @ 0x08575111
	.string "ポイント$"
	.if (. - gText_Rom_575111) > 0x5
	.error "gText_Rom_575111 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575111) < 0x5
	.space 0x5 - (. - gText_Rom_575111)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:268 easy_chat_group_battle_line_268
	.globl gText_Rom_575116
gText_Rom_575116: @ 0x08575116
	.string "ほんき$"
	.if (. - gText_Rom_575116) > 0x4
	.error "gText_Rom_575116 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575116) < 0x4
	.space 0x4 - (. - gText_Rom_575116)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:274 easy_chat_group_battle_line_274
	.globl gText_Rom_57511A
gText_Rom_57511A: @ 0x0857511A
	.string "まいった$"
	.if (. - gText_Rom_57511A) > 0x5
	.error "gText_Rom_57511A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57511A) < 0x5
	.space 0x5 - (. - gText_Rom_57511A)
	.endif
	.incbin "baserom.gba", 0x57511f, 0x3

	@ src/data/easy_chat/easy_chat_group_battle.h:286 easy_chat_group_battle_line_286
	.globl gText_Rom_575122
gText_Rom_575122: @ 0x08575122
	.string "まけたら$"
	.if (. - gText_Rom_575122) > 0x5
	.error "gText_Rom_575122 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575122) < 0x5
	.space 0x5 - (. - gText_Rom_575122)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:292 easy_chat_group_battle_line_292
	.globl gText_Rom_575127
gText_Rom_575127: @ 0x08575127
	.string "まけて$"
	.if (. - gText_Rom_575127) > 0x4
	.error "gText_Rom_575127 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575127) < 0x4
	.space 0x4 - (. - gText_Rom_575127)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:298 easy_chat_group_battle_line_298
	.globl gText_Rom_57512B
gText_Rom_57512B: @ 0x0857512B
	.string "まける$"
	.if (. - gText_Rom_57512B) > 0x4
	.error "gText_Rom_57512B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57512B) < 0x4
	.space 0x4 - (. - gText_Rom_57512B)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:304 easy_chat_group_battle_line_304
	.globl gText_Rom_57512F
gText_Rom_57512F: @ 0x0857512F
	.string "まもり$"
	.if (. - gText_Rom_57512F) > 0x4
	.error "gText_Rom_57512F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57512F) < 0x4
	.space 0x4 - (. - gText_Rom_57512F)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:310 easy_chat_group_battle_line_310
	.globl gText_Rom_575133
gText_Rom_575133: @ 0x08575133
	.string "みかた$"
	.if (. - gText_Rom_575133) > 0x4
	.error "gText_Rom_575133 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575133) < 0x4
	.space 0x4 - (. - gText_Rom_575133)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:316 easy_chat_group_battle_line_316
	.globl gText_Rom_575137
gText_Rom_575137: @ 0x08575137
	.string "みとめない$"
	.if (. - gText_Rom_575137) > 0x6
	.error "gText_Rom_575137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575137) < 0x6
	.space 0x6 - (. - gText_Rom_575137)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:322 easy_chat_group_battle_line_322
	.globl gText_Rom_57513D
gText_Rom_57513D: @ 0x0857513D
	.string "みとめる$"
	.if (. - gText_Rom_57513D) > 0x5
	.error "gText_Rom_57513D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57513D) < 0x5
	.space 0x5 - (. - gText_Rom_57513D)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:328 easy_chat_group_battle_line_328
	.globl gText_Rom_575142
gText_Rom_575142: @ 0x08575142
	.string "むてき$"
	.if (. - gText_Rom_575142) > 0x4
	.error "gText_Rom_575142 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575142) < 0x4
	.space 0x4 - (. - gText_Rom_575142)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:334 easy_chat_group_battle_line_334
	.globl gText_Rom_575146
gText_Rom_575146: @ 0x08575146
	.string "もらった$"
	.if (. - gText_Rom_575146) > 0x5
	.error "gText_Rom_575146 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575146) < 0x5
	.space 0x5 - (. - gText_Rom_575146)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:340 easy_chat_group_battle_line_340
	.globl gText_Rom_57514B
gText_Rom_57514B: @ 0x0857514B
	.string "よゆう$"
	.if (. - gText_Rom_57514B) > 0x4
	.error "gText_Rom_57514B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57514B) < 0x4
	.space 0x4 - (. - gText_Rom_57514B)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:346 easy_chat_group_battle_line_346
	.globl gText_Rom_57514F
gText_Rom_57514F: @ 0x0857514F
	.string "よわい$"
	.if (. - gText_Rom_57514F) > 0x4
	.error "gText_Rom_57514F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57514F) < 0x4
	.space 0x4 - (. - gText_Rom_57514F)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:352 easy_chat_group_battle_line_352
	.globl gText_Rom_575153
gText_Rom_575153: @ 0x08575153
	.string "よわすぎ$"
	.if (. - gText_Rom_575153) > 0x5
	.error "gText_Rom_575153 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575153) < 0x5
	.space 0x5 - (. - gText_Rom_575153)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:358 easy_chat_group_battle_line_358
	.globl gText_Rom_575158
gText_Rom_575158: @ 0x08575158
	.string "らくしょう$"
	.if (. - gText_Rom_575158) > 0x6
	.error "gText_Rom_575158 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575158) < 0x6
	.space 0x6 - (. - gText_Rom_575158)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:364 easy_chat_group_battle_line_364
	.globl gText_Rom_57515E
gText_Rom_57515E: @ 0x0857515E
	.string "リーダー$"
	.if (. - gText_Rom_57515E) > 0x5
	.error "gText_Rom_57515E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57515E) < 0x5
	.space 0x5 - (. - gText_Rom_57515E)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:370 easy_chat_group_battle_line_370
	.globl gText_Rom_575163
gText_Rom_575163: @ 0x08575163
	.string "ルール$"
	.if (. - gText_Rom_575163) > 0x4
	.error "gText_Rom_575163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575163) < 0x4
	.space 0x4 - (. - gText_Rom_575163)
	.endif
	.incbin "baserom.gba", 0x575167, 0x2f9

	@ src/data/easy_chat/easy_chat_group_greetings.h:4 easy_chat_group_greetings_line_4
	.globl gText_Rom_575460
gText_Rom_575460: @ 0x08575460
	.string "ありがとう$"
	.if (. - gText_Rom_575460) > 0x6
	.error "gText_Rom_575460 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575460) < 0x6
	.space 0x6 - (. - gText_Rom_575460)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:10 easy_chat_group_greetings_line_10
	.globl gText_Rom_575466
gText_Rom_575466: @ 0x08575466
	.string "イエス$"
	.if (. - gText_Rom_575466) > 0x4
	.error "gText_Rom_575466 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575466) < 0x4
	.space 0x4 - (. - gText_Rom_575466)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:16 easy_chat_group_greetings_line_16
	.globl gText_Rom_57546A
gText_Rom_57546A: @ 0x0857546A
	.string "いくぜ$"
	.if (. - gText_Rom_57546A) > 0x4
	.error "gText_Rom_57546A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57546A) < 0x4
	.space 0x4 - (. - gText_Rom_57546A)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:22 easy_chat_group_greetings_line_22
	.globl gText_Rom_57546E
gText_Rom_57546E: @ 0x0857546E
	.string "いくよ$"
	.if (. - gText_Rom_57546E) > 0x4
	.error "gText_Rom_57546E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57546E) < 0x4
	.space 0x4 - (. - gText_Rom_57546E)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:28 easy_chat_group_greetings_line_28
	.globl gText_Rom_575472
gText_Rom_575472: @ 0x08575472
	.string "いくわよ$"
	.if (. - gText_Rom_575472) > 0x5
	.error "gText_Rom_575472 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575472) < 0x5
	.space 0x5 - (. - gText_Rom_575472)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:34 easy_chat_group_greetings_line_34
	.globl gText_Rom_575477
gText_Rom_575477: @ 0x08575477
	.string "いやー$"
	.if (. - gText_Rom_575477) > 0x4
	.error "gText_Rom_575477 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575477) < 0x4
	.space 0x4 - (. - gText_Rom_575477)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:40 easy_chat_group_greetings_line_40
	.globl gText_Rom_57547B
gText_Rom_57547B: @ 0x0857547B
	.string "いらっしゃい$"
	.if (. - gText_Rom_57547B) > 0x7
	.error "gText_Rom_57547B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57547B) < 0x7
	.space 0x7 - (. - gText_Rom_57547B)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:46 easy_chat_group_greetings_line_46
	.globl gText_Rom_575482
gText_Rom_575482: @ 0x08575482
	.string "おーい$"
	.if (. - gText_Rom_575482) > 0x4
	.error "gText_Rom_575482 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575482) < 0x4
	.space 0x4 - (. - gText_Rom_575482)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:52 easy_chat_group_greetings_line_52
	.globl gText_Rom_575486
gText_Rom_575486: @ 0x08575486
	.string "おっす$"
	.if (. - gText_Rom_575486) > 0x4
	.error "gText_Rom_575486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575486) < 0x4
	.space 0x4 - (. - gText_Rom_575486)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:58 easy_chat_group_greetings_line_58
	.globl gText_Rom_57548A
gText_Rom_57548A: @ 0x0857548A
	.string "おめでとう$"
	.if (. - gText_Rom_57548A) > 0x6
	.error "gText_Rom_57548A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57548A) < 0x6
	.space 0x6 - (. - gText_Rom_57548A)
	.endif
	.incbin "baserom.gba", 0x575490, 0x5

	@ src/data/easy_chat/easy_chat_group_greetings.h:70 easy_chat_group_greetings_line_70
	.globl gText_Rom_575495
gText_Rom_575495: @ 0x08575495
	.string "ゴメン$"
	.if (. - gText_Rom_575495) > 0x4
	.error "gText_Rom_575495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575495) < 0x4
	.space 0x4 - (. - gText_Rom_575495)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:76 easy_chat_group_greetings_line_76
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_575499
gText_Rom_575499: @ 0x08575499
	.string "ごめんなさい$"
	.if (. - gText_Rom_575499) != 0x7
	.error "gText_Rom_575499 must retain its original byte length"
	.endif
	.globl gText_Rom_57549C
	.set gText_Rom_57549C, gText_Rom_575499 + 0x3

	@ src/data/easy_chat/easy_chat_group_greetings.h:82 easy_chat_group_greetings_line_82
	.globl gText_Rom_5754A0
gText_Rom_5754A0: @ 0x085754A0
	.string "ごめんね$"
	.if (. - gText_Rom_5754A0) > 0x5
	.error "gText_Rom_5754A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A0) < 0x5
	.space 0x5 - (. - gText_Rom_5754A0)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:88 easy_chat_group_greetings_line_88
	.globl gText_Rom_5754A5
gText_Rom_5754A5: @ 0x085754A5
	.string "こらっ$"
	.if (. - gText_Rom_5754A5) > 0x4
	.error "gText_Rom_5754A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A5) < 0x4
	.space 0x4 - (. - gText_Rom_5754A5)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:94 easy_chat_group_greetings_line_94 (+1 aliases)
	.globl gText_Rom_5754A9
gText_Rom_5754A9: @ 0x085754A9
	.string "こんにちは$"
	.if (. - gText_Rom_5754A9) > 0x6
	.error "gText_Rom_5754A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A9) < 0x6
	.space 0x6 - (. - gText_Rom_5754A9)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:100 easy_chat_group_greetings_line_100 (+1 aliases)
	.globl gText_Rom_5754AF
gText_Rom_5754AF: @ 0x085754AF
	.string "さようなら$"
	.if (. - gText_Rom_5754AF) > 0x6
	.error "gText_Rom_5754AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754AF) < 0x6
	.space 0x6 - (. - gText_Rom_5754AF)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:106 easy_chat_group_greetings_line_106 (+1 aliases)
	.globl gText_Rom_5754B5
gText_Rom_5754B5: @ 0x085754B5
	.string "サンキュー$"
	.if (. - gText_Rom_5754B5) > 0x6
	.error "gText_Rom_5754B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754B5) < 0x6
	.space 0x6 - (. - gText_Rom_5754B5)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:112 easy_chat_group_greetings_line_112
	.globl gText_Rom_5754BB
gText_Rom_5754BB: @ 0x085754BB
	.string "さんじょう$"
	.if (. - gText_Rom_5754BB) > 0x6
	.error "gText_Rom_5754BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754BB) < 0x6
	.space 0x6 - (. - gText_Rom_5754BB)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:118 easy_chat_group_greetings_line_118
	.globl gText_Rom_5754C1
gText_Rom_5754C1: @ 0x085754C1
	.string "しっけい$"
	.if (. - gText_Rom_5754C1) > 0x5
	.error "gText_Rom_5754C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754C1) < 0x5
	.space 0x5 - (. - gText_Rom_5754C1)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:124 easy_chat_group_greetings_line_124
	.globl gText_Rom_5754C6
gText_Rom_5754C6: @ 0x085754C6
	.string "しつれい$"
	.if (. - gText_Rom_5754C6) > 0x5
	.error "gText_Rom_5754C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754C6) < 0x5
	.space 0x5 - (. - gText_Rom_5754C6)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:130 easy_chat_group_greetings_line_130
	.globl gText_Rom_5754CB
gText_Rom_5754CB: @ 0x085754CB
	.string "じゃーね$"
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
	.string "すみません$"
	.if (. - gText_Rom_5754D0) != 0x6
	.error "gText_Rom_5754D0 must retain its original byte length"
	.endif
	.globl gText_Rom_5754D2
	.set gText_Rom_5754D2, gText_Rom_5754D0 + 0x2

	@ src/data/easy_chat/easy_chat_group_greetings.h:142 easy_chat_group_greetings_line_142
	.globl gText_Rom_5754D6
gText_Rom_5754D6: @ 0x085754D6
	.string "それじゃ$"
	.if (. - gText_Rom_5754D6) > 0x5
	.error "gText_Rom_5754D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754D6) < 0x5
	.space 0x5 - (. - gText_Rom_5754D6)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:148 easy_chat_group_greetings_line_148
	.globl gText_Rom_5754DB
gText_Rom_5754DB: @ 0x085754DB
	.string "どうぞ$"
	.if (. - gText_Rom_5754DB) > 0x4
	.error "gText_Rom_5754DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754DB) < 0x4
	.space 0x4 - (. - gText_Rom_5754DB)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:154 easy_chat_group_greetings_line_154
	.globl gText_Rom_5754DF
gText_Rom_5754DF: @ 0x085754DF
	.string "どうも$"
	.if (. - gText_Rom_5754DF) > 0x4
	.error "gText_Rom_5754DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754DF) < 0x4
	.space 0x4 - (. - gText_Rom_5754DF)
	.endif
	.incbin "baserom.gba", 0x5754e3, 0x3

	@ src/data/easy_chat/easy_chat_group_greetings.h:166 easy_chat_group_greetings_line_166
	.globl gText_Rom_5754E6
gText_Rom_5754E6: @ 0x085754E6
	.string "なんじゃ$"
	.if (. - gText_Rom_5754E6) > 0x5
	.error "gText_Rom_5754E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754E6) < 0x5
	.space 0x5 - (. - gText_Rom_5754E6)
	.endif
	.incbin "baserom.gba", 0x5754eb, 0x3

	@ src/data/easy_chat/easy_chat_group_greetings.h:178 easy_chat_group_greetings_line_178
	.globl gText_Rom_5754EE
gText_Rom_5754EE: @ 0x085754EE
	.string "ノー$"
	.if (. - gText_Rom_5754EE) > 0x3
	.error "gText_Rom_5754EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754EE) < 0x3
	.space 0x3 - (. - gText_Rom_5754EE)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:184 easy_chat_group_greetings_line_184
	.globl gText_Rom_5754F1
gText_Rom_5754F1: @ 0x085754F1
	.string "ハーイ$"
	.if (. - gText_Rom_5754F1) > 0x4
	.error "gText_Rom_5754F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754F1) < 0x4
	.space 0x4 - (. - gText_Rom_5754F1)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:190 easy_chat_group_greetings_line_190
	.globl gText_Rom_5754F5
gText_Rom_5754F5: @ 0x085754F5
	.string "はいはい$"
	.if (. - gText_Rom_5754F5) > 0x5
	.error "gText_Rom_5754F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754F5) < 0x5
	.space 0x5 - (. - gText_Rom_5754F5)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:196 easy_chat_group_greetings_line_196
	.globl gText_Rom_5754FA
gText_Rom_5754FA: @ 0x085754FA
	.string "バイバイ$"
	.if (. - gText_Rom_5754FA) > 0x5
	.error "gText_Rom_5754FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754FA) < 0x5
	.space 0x5 - (. - gText_Rom_5754FA)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:202 easy_chat_group_greetings_line_202
	.globl gText_Rom_5754FF
gText_Rom_5754FF: @ 0x085754FF
	.string "はじめまして$"
	.if (. - gText_Rom_5754FF) > 0x7
	.error "gText_Rom_5754FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754FF) < 0x7
	.space 0x7 - (. - gText_Rom_5754FF)
	.endif
	.incbin "baserom.gba", 0x575506, 0x3

	@ src/data/easy_chat/easy_chat_group_greetings.h:214 easy_chat_group_greetings_line_214
	.globl gText_Rom_575509
gText_Rom_575509: @ 0x08575509
	.string "またね$"
	.if (. - gText_Rom_575509) > 0x4
	.error "gText_Rom_575509 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575509) < 0x4
	.space 0x4 - (. - gText_Rom_575509)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:220 easy_chat_group_greetings_line_220
	.globl gText_Rom_57550D
gText_Rom_57550D: @ 0x0857550D
	.string "もしもし$"
	.if (. - gText_Rom_57550D) > 0x5
	.error "gText_Rom_57550D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57550D) < 0x5
	.space 0x5 - (. - gText_Rom_57550D)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:226 easy_chat_group_greetings_line_226
	.globl gText_Rom_575512
gText_Rom_575512: @ 0x08575512
	.string "やあ$"
	.if (. - gText_Rom_575512) > 0x3
	.error "gText_Rom_575512 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575512) < 0x3
	.space 0x3 - (. - gText_Rom_575512)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:232 easy_chat_group_greetings_line_232
	.globl gText_Rom_575515
gText_Rom_575515: @ 0x08575515
	.string "やっほー$"
	.if (. - gText_Rom_575515) > 0x5
	.error "gText_Rom_575515 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575515) < 0x5
	.space 0x5 - (. - gText_Rom_575515)
	.endif
	.incbin "baserom.gba", 0x57551a, 0x3

	@ src/data/easy_chat/easy_chat_group_greetings.h:244 easy_chat_group_greetings_line_244
	.globl gText_Rom_57551D
gText_Rom_57551D: @ 0x0857551D
	.string "ようこそ$"
	.if (. - gText_Rom_57551D) > 0x5
	.error "gText_Rom_57551D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57551D) < 0x5
	.space 0x5 - (. - gText_Rom_57551D)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:250 easy_chat_group_greetings_line_250
	.globl gText_Rom_575522
gText_Rom_575522: @ 0x08575522
	.string "よろしく$"
	.if (. - gText_Rom_575522) > 0x5
	.error "gText_Rom_575522 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575522) < 0x5
	.space 0x5 - (. - gText_Rom_575522)
	.endif
	.incbin "baserom.gba", 0x575527, 0x1f9

	@ src/data/easy_chat/easy_chat_group_people.h:4 easy_chat_group_people_line_4 (+1 aliases)
	.globl gText_Rom_575720
gText_Rom_575720: @ 0x08575720
	.string "あいて$"
	.if (. - gText_Rom_575720) > 0x4
	.error "gText_Rom_575720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575720) < 0x4
	.space 0x4 - (. - gText_Rom_575720)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:10 easy_chat_group_people_line_10
	.globl gText_Rom_575724
gText_Rom_575724: @ 0x08575724
	.string "あたし$"
	.if (. - gText_Rom_575724) > 0x4
	.error "gText_Rom_575724 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575724) < 0x4
	.space 0x4 - (. - gText_Rom_575724)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:16 easy_chat_group_people_line_16
	.globl gText_Rom_575728
gText_Rom_575728: @ 0x08575728
	.string "あなた$"
	.if (. - gText_Rom_575728) > 0x4
	.error "gText_Rom_575728 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575728) < 0x4
	.space 0x4 - (. - gText_Rom_575728)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:22 easy_chat_group_people_line_22
	.globl gText_Rom_57572C
gText_Rom_57572C: @ 0x0857572C
	.string "あなたが$"
	.if (. - gText_Rom_57572C) > 0x5
	.error "gText_Rom_57572C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57572C) < 0x5
	.space 0x5 - (. - gText_Rom_57572C)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:28 easy_chat_group_people_line_28
	.globl gText_Rom_575731
gText_Rom_575731: @ 0x08575731
	.string "あなたに$"
	.if (. - gText_Rom_575731) > 0x5
	.error "gText_Rom_575731 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575731) < 0x5
	.space 0x5 - (. - gText_Rom_575731)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:34 easy_chat_group_people_line_34
	.globl gText_Rom_575736
gText_Rom_575736: @ 0x08575736
	.string "あなたの$"
	.if (. - gText_Rom_575736) > 0x5
	.error "gText_Rom_575736 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575736) < 0x5
	.space 0x5 - (. - gText_Rom_575736)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:40 easy_chat_group_people_line_40
	.globl gText_Rom_57573B
gText_Rom_57573B: @ 0x0857573B
	.string "あなたは$"
	.if (. - gText_Rom_57573B) > 0x5
	.error "gText_Rom_57573B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57573B) < 0x5
	.space 0x5 - (. - gText_Rom_57573B)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:46 easy_chat_group_people_line_46
	.globl gText_Rom_575740
gText_Rom_575740: @ 0x08575740
	.string "あなたを$"
	.if (. - gText_Rom_575740) > 0x5
	.error "gText_Rom_575740 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575740) < 0x5
	.space 0x5 - (. - gText_Rom_575740)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:52 easy_chat_group_people_line_52
	.globl gText_Rom_575745
gText_Rom_575745: @ 0x08575745
	.string "おかあさん$"
	.if (. - gText_Rom_575745) > 0x6
	.error "gText_Rom_575745 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575745) < 0x6
	.space 0x6 - (. - gText_Rom_575745)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:58 easy_chat_group_people_line_58 (+1 aliases)
	.globl gText_Rom_57574B
gText_Rom_57574B: @ 0x0857574B
	.string "おじいさん$"
	.if (. - gText_Rom_57574B) > 0x6
	.error "gText_Rom_57574B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57574B) < 0x6
	.space 0x6 - (. - gText_Rom_57574B)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:64 easy_chat_group_people_line_64
	.globl gText_Rom_575751
gText_Rom_575751: @ 0x08575751
	.string "おじさん$"
	.if (. - gText_Rom_575751) > 0x5
	.error "gText_Rom_575751 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575751) < 0x5
	.space 0x5 - (. - gText_Rom_575751)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:70 easy_chat_group_people_line_70
	.globl gText_Rom_575756
gText_Rom_575756: @ 0x08575756
	.string "おとうさん$"
	.if (. - gText_Rom_575756) > 0x6
	.error "gText_Rom_575756 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575756) < 0x6
	.space 0x6 - (. - gText_Rom_575756)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:76 easy_chat_group_people_line_76
	.globl gText_Rom_57575C
gText_Rom_57575C: @ 0x0857575C
	.string "おとこのこ$"
	.if (. - gText_Rom_57575C) > 0x6
	.error "gText_Rom_57575C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57575C) < 0x6
	.space 0x6 - (. - gText_Rom_57575C)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:82 easy_chat_group_people_line_82
	.globl gText_Rom_575762
gText_Rom_575762: @ 0x08575762
	.string "おとな$"
	.if (. - gText_Rom_575762) > 0x4
	.error "gText_Rom_575762 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575762) < 0x4
	.space 0x4 - (. - gText_Rom_575762)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:88 easy_chat_group_people_line_88
	.globl gText_Rom_575766
gText_Rom_575766: @ 0x08575766
	.string "おにいさん$"
	.if (. - gText_Rom_575766) > 0x6
	.error "gText_Rom_575766 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575766) < 0x6
	.space 0x6 - (. - gText_Rom_575766)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:94 easy_chat_group_people_line_94 (+1 aliases)
	.globl gText_Rom_57576C
gText_Rom_57576C: @ 0x0857576C
	.string "おねえさん$"
	.if (. - gText_Rom_57576C) > 0x6
	.error "gText_Rom_57576C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57576C) < 0x6
	.space 0x6 - (. - gText_Rom_57576C)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:100 easy_chat_group_people_line_100 (+1 aliases)
	.globl gText_Rom_575772
gText_Rom_575772: @ 0x08575772
	.string "おばあさん$"
	.if (. - gText_Rom_575772) > 0x6
	.error "gText_Rom_575772 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575772) < 0x6
	.space 0x6 - (. - gText_Rom_575772)
	.endif

	@ src/berry_blender.c:275 berry_blender_line_275 (+1 aliases)
	.globl gText_Rom_575778
gText_Rom_575778: @ 0x08575778
	.string "おばさん$"
	.if (. - gText_Rom_575778) > 0x5
	.error "gText_Rom_575778 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575778) < 0x5
	.space 0x5 - (. - gText_Rom_575778)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:112 easy_chat_group_people_line_112
	.globl gText_Rom_57577D
gText_Rom_57577D: @ 0x0857577D
	.string "おや$"
	.if (. - gText_Rom_57577D) > 0x3
	.error "gText_Rom_57577D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57577D) < 0x3
	.space 0x3 - (. - gText_Rom_57577D)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:118 easy_chat_group_people_line_118
	.globl gText_Rom_575780
gText_Rom_575780: @ 0x08575780
	.string "オヤジ$"
	.if (. - gText_Rom_575780) > 0x4
	.error "gText_Rom_575780 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575780) < 0x4
	.space 0x4 - (. - gText_Rom_575780)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:124 easy_chat_group_people_line_124
	.globl gText_Rom_575784
gText_Rom_575784: @ 0x08575784
	.string "おれさま$"
	.if (. - gText_Rom_575784) > 0x5
	.error "gText_Rom_575784 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575784) < 0x5
	.space 0x5 - (. - gText_Rom_575784)
	.endif

	@ src/berry_blender.c:272 berry_blender_line_272 (+1 aliases)
	.globl gText_Rom_575789
gText_Rom_575789: @ 0x08575789
	.string "おんなのこ$"
	.if (. - gText_Rom_575789) > 0x6
	.error "gText_Rom_575789 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575789) < 0x6
	.space 0x6 - (. - gText_Rom_575789)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:136 easy_chat_group_people_line_136
	.globl gText_Rom_57578F
gText_Rom_57578F: @ 0x0857578F
	.string "ガール$"
	.if (. - gText_Rom_57578F) > 0x4
	.error "gText_Rom_57578F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57578F) < 0x4
	.space 0x4 - (. - gText_Rom_57578F)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:142 easy_chat_group_people_line_142
	.globl gText_Rom_575793
gText_Rom_575793: @ 0x08575793
	.string "かぞく$"
	.if (. - gText_Rom_575793) > 0x4
	.error "gText_Rom_575793 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575793) < 0x4
	.space 0x4 - (. - gText_Rom_575793)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:148 easy_chat_group_people_line_148
	.globl gText_Rom_575797
gText_Rom_575797: @ 0x08575797
	.string "かのじょ$"
	.if (. - gText_Rom_575797) > 0x5
	.error "gText_Rom_575797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575797) < 0x5
	.space 0x5 - (. - gText_Rom_575797)
	.endif
	.incbin "baserom.gba", 0x57579c, 0x6

	@ src/data/easy_chat/easy_chat_group_people.h:166 easy_chat_group_people_line_166
	.globl gText_Rom_5757A2
gText_Rom_5757A2: @ 0x085757A2
	.string "きみが$"
	.if (. - gText_Rom_5757A2) > 0x4
	.error "gText_Rom_5757A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757A2) < 0x4
	.space 0x4 - (. - gText_Rom_5757A2)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:172 easy_chat_group_people_line_172
	.globl gText_Rom_5757A6
gText_Rom_5757A6: @ 0x085757A6
	.string "きみに$"
	.if (. - gText_Rom_5757A6) > 0x4
	.error "gText_Rom_5757A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757A6) < 0x4
	.space 0x4 - (. - gText_Rom_5757A6)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:178 easy_chat_group_people_line_178
	.globl gText_Rom_5757AA
gText_Rom_5757AA: @ 0x085757AA
	.string "きみの$"
	.if (. - gText_Rom_5757AA) > 0x4
	.error "gText_Rom_5757AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757AA) < 0x4
	.space 0x4 - (. - gText_Rom_5757AA)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:184 easy_chat_group_people_line_184
	.globl gText_Rom_5757AE
gText_Rom_5757AE: @ 0x085757AE
	.string "きみは$"
	.if (. - gText_Rom_5757AE) > 0x4
	.error "gText_Rom_5757AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757AE) < 0x4
	.space 0x4 - (. - gText_Rom_5757AE)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:190 easy_chat_group_people_line_190
	.globl gText_Rom_5757B2
gText_Rom_5757B2: @ 0x085757B2
	.string "きみを$"
	.if (. - gText_Rom_5757B2) > 0x4
	.error "gText_Rom_5757B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757B2) < 0x4
	.space 0x4 - (. - gText_Rom_5757B2)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:196 easy_chat_group_people_line_196
	.globl gText_Rom_5757B6
gText_Rom_5757B6: @ 0x085757B6
	.string "きょうだい$"
	.if (. - gText_Rom_5757B6) > 0x6
	.error "gText_Rom_5757B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757B6) < 0x6
	.space 0x6 - (. - gText_Rom_5757B6)
	.endif
	.incbin "baserom.gba", 0x5757bc, 0x3

	@ src/data/easy_chat/easy_chat_group_people.h:208 easy_chat_group_people_line_208
	.globl gText_Rom_5757BF
gText_Rom_5757BF: @ 0x085757BF
	.string "こども$"
	.if (. - gText_Rom_5757BF) > 0x4
	.error "gText_Rom_5757BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757BF) < 0x4
	.space 0x4 - (. - gText_Rom_5757BF)
	.endif
	.incbin "baserom.gba", 0x5757c3, 0x6

	@ src/data/easy_chat/easy_chat_group_people.h:226 easy_chat_group_people_line_226
	.globl gText_Rom_5757C9
gText_Rom_5757C9: @ 0x085757C9
	.string "じぶん$"
	.if (. - gText_Rom_5757C9) > 0x4
	.error "gText_Rom_5757C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757C9) < 0x4
	.space 0x4 - (. - gText_Rom_5757C9)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:232 easy_chat_group_people_line_232
	.globl gText_Rom_5757CD
gText_Rom_5757CD: @ 0x085757CD
	.string "じぶんが$"
	.if (. - gText_Rom_5757CD) > 0x5
	.error "gText_Rom_5757CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757CD) < 0x5
	.space 0x5 - (. - gText_Rom_5757CD)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:238 easy_chat_group_people_line_238
	.globl gText_Rom_5757D2
gText_Rom_5757D2: @ 0x085757D2
	.string "じぶんに$"
	.if (. - gText_Rom_5757D2) > 0x5
	.error "gText_Rom_5757D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757D2) < 0x5
	.space 0x5 - (. - gText_Rom_5757D2)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:244 easy_chat_group_people_line_244
	.globl gText_Rom_5757D7
gText_Rom_5757D7: @ 0x085757D7
	.string "じぶんの$"
	.if (. - gText_Rom_5757D7) > 0x5
	.error "gText_Rom_5757D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757D7) < 0x5
	.space 0x5 - (. - gText_Rom_5757D7)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:250 easy_chat_group_people_line_250
	.globl gText_Rom_5757DC
gText_Rom_5757DC: @ 0x085757DC
	.string "じぶんは$"
	.if (. - gText_Rom_5757DC) > 0x5
	.error "gText_Rom_5757DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757DC) < 0x5
	.space 0x5 - (. - gText_Rom_5757DC)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:256 easy_chat_group_people_line_256
	.globl gText_Rom_5757E1
gText_Rom_5757E1: @ 0x085757E1
	.string "じぶんを$"
	.if (. - gText_Rom_5757E1) > 0x5
	.error "gText_Rom_5757E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757E1) < 0x5
	.space 0x5 - (. - gText_Rom_5757E1)
	.endif
	.incbin "baserom.gba", 0x5757e6, 0x3

	@ src/data/easy_chat/easy_chat_group_people.h:268 easy_chat_group_people_line_268
	.globl gText_Rom_5757E9
gText_Rom_5757E9: @ 0x085757E9
	.string "だれか$"
	.if (. - gText_Rom_5757E9) > 0x4
	.error "gText_Rom_5757E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757E9) < 0x4
	.space 0x4 - (. - gText_Rom_5757E9)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:274 easy_chat_group_people_line_274
	.globl gText_Rom_5757ED
gText_Rom_5757ED: @ 0x085757ED
	.string "だれが$"
	.if (. - gText_Rom_5757ED) > 0x4
	.error "gText_Rom_5757ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757ED) < 0x4
	.space 0x4 - (. - gText_Rom_5757ED)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:280 easy_chat_group_people_line_280
	.globl gText_Rom_5757F1
gText_Rom_5757F1: @ 0x085757F1
	.string "だれに$"
	.if (. - gText_Rom_5757F1) > 0x4
	.error "gText_Rom_5757F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757F1) < 0x4
	.space 0x4 - (. - gText_Rom_5757F1)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:286 easy_chat_group_people_line_286
	.globl gText_Rom_5757F5
gText_Rom_5757F5: @ 0x085757F5
	.string "だれの$"
	.if (. - gText_Rom_5757F5) > 0x4
	.error "gText_Rom_5757F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757F5) < 0x4
	.space 0x4 - (. - gText_Rom_5757F5)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:292 easy_chat_group_people_line_292
	.globl gText_Rom_5757F9
gText_Rom_5757F9: @ 0x085757F9
	.string "だれも$"
	.if (. - gText_Rom_5757F9) > 0x4
	.error "gText_Rom_5757F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757F9) < 0x4
	.space 0x4 - (. - gText_Rom_5757F9)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:298 easy_chat_group_people_line_298
	.globl gText_Rom_5757FD
gText_Rom_5757FD: @ 0x085757FD
	.string "だれを$"
	.if (. - gText_Rom_5757FD) > 0x4
	.error "gText_Rom_5757FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757FD) < 0x4
	.space 0x4 - (. - gText_Rom_5757FD)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_575801
gText_Rom_575801: @ 0x08575801
	.string "ちゃん$"
	.if (. - gText_Rom_575801) > 0x4
	.error "gText_Rom_575801 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575801) < 0x4
	.space 0x4 - (. - gText_Rom_575801)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:310 easy_chat_group_people_line_310 (+2 aliases)
	.globl gText_Rom_575805
gText_Rom_575805: @ 0x08575805
	.string "ともだち$"
	.if (. - gText_Rom_575805) > 0x5
	.error "gText_Rom_575805 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575805) < 0x5
	.space 0x5 - (. - gText_Rom_575805)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:316 easy_chat_group_people_line_316 (+1 aliases)
	.globl gText_Rom_57580A
gText_Rom_57580A: @ 0x0857580A
	.string "なかま$"
	.if (. - gText_Rom_57580A) > 0x4
	.error "gText_Rom_57580A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57580A) < 0x4
	.space 0x4 - (. - gText_Rom_57580A)
	.endif
	.incbin "baserom.gba", 0x57580e, 0x3

	@ src/data/easy_chat/easy_chat_group_people.h:328 easy_chat_group_people_line_328
	.globl gText_Rom_575811
gText_Rom_575811: @ 0x08575811
	.string "ボーイ$"
	.if (. - gText_Rom_575811) > 0x4
	.error "gText_Rom_575811 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575811) < 0x4
	.space 0x4 - (. - gText_Rom_575811)
	.endif
	.incbin "baserom.gba", 0x575815, 0x3

	@ src/data/easy_chat/easy_chat_group_people.h:340 easy_chat_group_people_line_340
	.globl gText_Rom_575818
gText_Rom_575818: @ 0x08575818
	.string "ボクが$"
	.if (. - gText_Rom_575818) > 0x4
	.error "gText_Rom_575818 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575818) < 0x4
	.space 0x4 - (. - gText_Rom_575818)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:346 easy_chat_group_people_line_346
	.globl gText_Rom_57581C
gText_Rom_57581C: @ 0x0857581C
	.string "ボクに$"
	.if (. - gText_Rom_57581C) > 0x4
	.error "gText_Rom_57581C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57581C) < 0x4
	.space 0x4 - (. - gText_Rom_57581C)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:352 easy_chat_group_people_line_352
	.globl gText_Rom_575820
gText_Rom_575820: @ 0x08575820
	.string "ボクの$"
	.if (. - gText_Rom_575820) > 0x4
	.error "gText_Rom_575820 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575820) < 0x4
	.space 0x4 - (. - gText_Rom_575820)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:358 easy_chat_group_people_line_358
	.globl gText_Rom_575824
gText_Rom_575824: @ 0x08575824
	.string "ボクは$"
	.if (. - gText_Rom_575824) > 0x4
	.error "gText_Rom_575824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575824) < 0x4
	.space 0x4 - (. - gText_Rom_575824)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:364 easy_chat_group_people_line_364
	.globl gText_Rom_575828
gText_Rom_575828: @ 0x08575828
	.string "ボクを$"
	.if (. - gText_Rom_575828) > 0x4
	.error "gText_Rom_575828 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575828) < 0x4
	.space 0x4 - (. - gText_Rom_575828)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:370 easy_chat_group_people_line_370
	.globl gText_Rom_57582C
gText_Rom_57582C: @ 0x0857582C
	.string "みんな$"
	.if (. - gText_Rom_57582C) > 0x4
	.error "gText_Rom_57582C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57582C) < 0x4
	.space 0x4 - (. - gText_Rom_57582C)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:376 easy_chat_group_people_line_376
	.globl gText_Rom_575830
gText_Rom_575830: @ 0x08575830
	.string "みんなが$"
	.if (. - gText_Rom_575830) > 0x5
	.error "gText_Rom_575830 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575830) < 0x5
	.space 0x5 - (. - gText_Rom_575830)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:382 easy_chat_group_people_line_382
	.globl gText_Rom_575835
gText_Rom_575835: @ 0x08575835
	.string "みんなに$"
	.if (. - gText_Rom_575835) > 0x5
	.error "gText_Rom_575835 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575835) < 0x5
	.space 0x5 - (. - gText_Rom_575835)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:388 easy_chat_group_people_line_388
	.globl gText_Rom_57583A
gText_Rom_57583A: @ 0x0857583A
	.string "みんなの$"
	.if (. - gText_Rom_57583A) > 0x5
	.error "gText_Rom_57583A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57583A) < 0x5
	.space 0x5 - (. - gText_Rom_57583A)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:394 easy_chat_group_people_line_394
	.globl gText_Rom_57583F
gText_Rom_57583F: @ 0x0857583F
	.string "みんなは$"
	.if (. - gText_Rom_57583F) > 0x5
	.error "gText_Rom_57583F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57583F) < 0x5
	.space 0x5 - (. - gText_Rom_57583F)
	.endif

	@ src/battle_main.c:393 battle_main_line_393 (+3 aliases)
	.globl gText_Rom_575844
gText_Rom_575844: @ 0x08575844
	.string "ライバル$"
	.if (. - gText_Rom_575844) > 0x5
	.error "gText_Rom_575844 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575844) < 0x5
	.space 0x5 - (. - gText_Rom_575844)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:406 easy_chat_group_people_line_406
	.globl gText_Rom_575849
gText_Rom_575849: @ 0x08575849
	.string "わし$"
	.if (. - gText_Rom_575849) > 0x3
	.error "gText_Rom_575849 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575849) < 0x3
	.space 0x3 - (. - gText_Rom_575849)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:412 easy_chat_group_people_line_412
	.globl gText_Rom_57584C
gText_Rom_57584C: @ 0x0857584C
	.string "わたくし$"
	.if (. - gText_Rom_57584C) > 0x5
	.error "gText_Rom_57584C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57584C) < 0x5
	.space 0x5 - (. - gText_Rom_57584C)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:418 easy_chat_group_people_line_418
	.globl gText_Rom_575851
gText_Rom_575851: @ 0x08575851
	.string "わたし$"
	.if (. - gText_Rom_575851) > 0x4
	.error "gText_Rom_575851 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575851) < 0x4
	.space 0x4 - (. - gText_Rom_575851)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:424 easy_chat_group_people_line_424
	.globl gText_Rom_575855
gText_Rom_575855: @ 0x08575855
	.string "わたしが$"
	.if (. - gText_Rom_575855) > 0x5
	.error "gText_Rom_575855 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575855) < 0x5
	.space 0x5 - (. - gText_Rom_575855)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:430 easy_chat_group_people_line_430
	.globl gText_Rom_57585A
gText_Rom_57585A: @ 0x0857585A
	.string "わたしに$"
	.if (. - gText_Rom_57585A) > 0x5
	.error "gText_Rom_57585A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57585A) < 0x5
	.space 0x5 - (. - gText_Rom_57585A)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:436 easy_chat_group_people_line_436
	.globl gText_Rom_57585F
gText_Rom_57585F: @ 0x0857585F
	.string "わたしの$"
	.if (. - gText_Rom_57585F) > 0x5
	.error "gText_Rom_57585F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57585F) < 0x5
	.space 0x5 - (. - gText_Rom_57585F)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:442 easy_chat_group_people_line_442
	.globl gText_Rom_575864
gText_Rom_575864: @ 0x08575864
	.string "わたしは$"
	.if (. - gText_Rom_575864) > 0x5
	.error "gText_Rom_575864 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575864) < 0x5
	.space 0x5 - (. - gText_Rom_575864)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:448 easy_chat_group_people_line_448
	.globl gText_Rom_575869
gText_Rom_575869: @ 0x08575869
	.string "わたしを$"
	.if (. - gText_Rom_575869) > 0x5
	.error "gText_Rom_575869 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575869) < 0x5
	.space 0x5 - (. - gText_Rom_575869)
	.endif
	.incbin "baserom.gba", 0x57586e, 0x395

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_575C03
gText_Rom_575C03: @ 0x08575C03
	.string "………$"
	.if (. - gText_Rom_575C03) > 0x4
	.error "gText_Rom_575C03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C03) < 0x4
	.space 0x4 - (. - gText_Rom_575C03)
	.endif
	.incbin "baserom.gba", 0x575c07, 0x2

	@ src/data/easy_chat/easy_chat_group_voices.h:52 easy_chat_group_voices_line_52 (+3 aliases)
	.globl gText_Rom_575C09
gText_Rom_575C09: @ 0x08575C09
	.string "ーーー$"
	.if (. - gText_Rom_575C09) > 0x4
	.error "gText_Rom_575C09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C09) < 0x4
	.space 0x4 - (. - gText_Rom_575C09)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:58 easy_chat_group_voices_line_58
	.globl gText_Rom_575C0D
gText_Rom_575C0D: @ 0x08575C0D
	.string "あーあ$"
	.if (. - gText_Rom_575C0D) > 0x4
	.error "gText_Rom_575C0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C0D) < 0x4
	.space 0x4 - (. - gText_Rom_575C0D)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:64 easy_chat_group_voices_line_64
	.globl gText_Rom_575C11
gText_Rom_575C11: @ 0x08575C11
	.string "あーん$"
	.if (. - gText_Rom_575C11) > 0x4
	.error "gText_Rom_575C11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C11) < 0x4
	.space 0x4 - (. - gText_Rom_575C11)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:70 easy_chat_group_voices_line_70
	.globl gText_Rom_575C15
gText_Rom_575C15: @ 0x08575C15
	.string "あはは$"
	.if (. - gText_Rom_575C15) > 0x4
	.error "gText_Rom_575C15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C15) < 0x4
	.space 0x4 - (. - gText_Rom_575C15)
	.endif
	.incbin "baserom.gba", 0x575c19, 0x9

	@ src/data/easy_chat/easy_chat_group_voices.h:94 easy_chat_group_voices_line_94
	.globl gText_Rom_575C22
gText_Rom_575C22: @ 0x08575C22
	.string "うーん$"
	.if (. - gText_Rom_575C22) > 0x4
	.error "gText_Rom_575C22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C22) < 0x4
	.space 0x4 - (. - gText_Rom_575C22)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:100 easy_chat_group_voices_line_100
	.globl gText_Rom_575C26
gText_Rom_575C26: @ 0x08575C26
	.string "うおー!$"
	.if (. - gText_Rom_575C26) > 0x5
	.error "gText_Rom_575C26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C26) < 0x5
	.space 0x5 - (. - gText_Rom_575C26)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:106 easy_chat_group_voices_line_106
	.globl gText_Rom_575C2B
gText_Rom_575C2B: @ 0x08575C2B
	.string "うおりゃー$"
	.if (. - gText_Rom_575C2B) > 0x6
	.error "gText_Rom_575C2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C2B) < 0x6
	.space 0x6 - (. - gText_Rom_575C2B)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:112 easy_chat_group_voices_line_112
	.globl gText_Rom_575C31
gText_Rom_575C31: @ 0x08575C31
	.string "うひょー$"
	.if (. - gText_Rom_575C31) > 0x5
	.error "gText_Rom_575C31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C31) < 0x5
	.space 0x5 - (. - gText_Rom_575C31)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:118 easy_chat_group_voices_line_118
	.globl gText_Rom_575C36
gText_Rom_575C36: @ 0x08575C36
	.string "うふふ$"
	.if (. - gText_Rom_575C36) > 0x4
	.error "gText_Rom_575C36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C36) < 0x4
	.space 0x4 - (. - gText_Rom_575C36)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:124 easy_chat_group_voices_line_124
	.globl gText_Rom_575C3A
gText_Rom_575C3A: @ 0x08575C3A
	.string "うふん$"
	.if (. - gText_Rom_575C3A) > 0x4
	.error "gText_Rom_575C3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C3A) < 0x4
	.space 0x4 - (. - gText_Rom_575C3A)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:130 easy_chat_group_voices_line_130
	.globl gText_Rom_575C3E
gText_Rom_575C3E: @ 0x08575C3E
	.string "うわー$"
	.if (. - gText_Rom_575C3E) > 0x4
	.error "gText_Rom_575C3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C3E) < 0x4
	.space 0x4 - (. - gText_Rom_575C3E)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:136 easy_chat_group_voices_line_136
	.globl gText_Rom_575C42
gText_Rom_575C42: @ 0x08575C42
	.string "うわーん$"
	.if (. - gText_Rom_575C42) > 0x5
	.error "gText_Rom_575C42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C42) < 0x5
	.space 0x5 - (. - gText_Rom_575C42)
	.endif
	.incbin "baserom.gba", 0x575c47, 0x6

	@ src/data/easy_chat/easy_chat_group_voices.h:154 easy_chat_group_voices_line_154
	.globl gText_Rom_575C4D
gText_Rom_575C4D: @ 0x08575C4D
	.string "えーん$"
	.if (. - gText_Rom_575C4D) > 0x4
	.error "gText_Rom_575C4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C4D) < 0x4
	.space 0x4 - (. - gText_Rom_575C4D)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:160 easy_chat_group_voices_line_160
	.globl gText_Rom_575C51
gText_Rom_575C51: @ 0x08575C51
	.string "えへへ$"
	.if (. - gText_Rom_575C51) > 0x4
	.error "gText_Rom_575C51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C51) < 0x4
	.space 0x4 - (. - gText_Rom_575C51)
	.endif
	.incbin "baserom.gba", 0x575c55, 0x9

	@ src/data/easy_chat/easy_chat_group_voices.h:184 easy_chat_group_voices_line_184
	.globl gText_Rom_575C5E
gText_Rom_575C5E: @ 0x08575C5E
	.string "おっと$"
	.if (. - gText_Rom_575C5E) > 0x4
	.error "gText_Rom_575C5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C5E) < 0x4
	.space 0x4 - (. - gText_Rom_575C5E)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:190 easy_chat_group_voices_line_190
	.globl gText_Rom_575C62
gText_Rom_575C62: @ 0x08575C62
	.string "がーん$"
	.if (. - gText_Rom_575C62) > 0x4
	.error "gText_Rom_575C62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C62) < 0x4
	.space 0x4 - (. - gText_Rom_575C62)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:196 easy_chat_group_voices_line_196
	.globl gText_Rom_575C66
gText_Rom_575C66: @ 0x08575C66
	.string "キャー$"
	.if (. - gText_Rom_575C66) > 0x4
	.error "gText_Rom_575C66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C66) < 0x4
	.space 0x4 - (. - gText_Rom_575C66)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:202 easy_chat_group_voices_line_202
	.globl gText_Rom_575C6A
gText_Rom_575C6A: @ 0x08575C6A
	.string "ギャー$"
	.if (. - gText_Rom_575C6A) > 0x4
	.error "gText_Rom_575C6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C6A) < 0x4
	.space 0x4 - (. - gText_Rom_575C6A)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:208 easy_chat_group_voices_line_208
	.globl gText_Rom_575C6E
gText_Rom_575C6E: @ 0x08575C6E
	.string "ぐふふ$"
	.if (. - gText_Rom_575C6E) > 0x4
	.error "gText_Rom_575C6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C6E) < 0x4
	.space 0x4 - (. - gText_Rom_575C6E)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:214 easy_chat_group_voices_line_214
	.globl gText_Rom_575C72
gText_Rom_575C72: @ 0x08575C72
	.string "げっ$"
	.if (. - gText_Rom_575C72) > 0x3
	.error "gText_Rom_575C72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C72) < 0x3
	.space 0x3 - (. - gText_Rom_575C72)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:220 easy_chat_group_voices_line_220
	.globl gText_Rom_575C75
gText_Rom_575C75: @ 0x08575C75
	.string "ちぇっ$"
	.if (. - gText_Rom_575C75) > 0x4
	.error "gText_Rom_575C75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C75) < 0x4
	.space 0x4 - (. - gText_Rom_575C75)
	.endif
	.incbin "baserom.gba", 0x575c79, 0x3

	@ src/data/easy_chat/easy_chat_group_voices.h:232 easy_chat_group_voices_line_232
	.globl gText_Rom_575C7C
gText_Rom_575C7C: @ 0x08575C7C
	.string "はぁー$"
	.if (. - gText_Rom_575C7C) > 0x4
	.error "gText_Rom_575C7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C7C) < 0x4
	.space 0x4 - (. - gText_Rom_575C7C)
	.endif
	.incbin "baserom.gba", 0x575c80, 0x3

	@ src/data/easy_chat/easy_chat_group_voices.h:244 easy_chat_group_voices_line_244
	.globl gText_Rom_575C83
gText_Rom_575C83: @ 0x08575C83
	.string "はっはっは$"
	.if (. - gText_Rom_575C83) > 0x6
	.error "gText_Rom_575C83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C83) < 0x6
	.space 0x6 - (. - gText_Rom_575C83)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:250 easy_chat_group_voices_line_250
	.globl gText_Rom_575C89
gText_Rom_575C89: @ 0x08575C89
	.string "ひいー$"
	.if (. - gText_Rom_575C89) > 0x4
	.error "gText_Rom_575C89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C89) < 0x4
	.space 0x4 - (. - gText_Rom_575C89)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:256 easy_chat_group_voices_line_256
	.globl gText_Rom_575C8D
gText_Rom_575C8D: @ 0x08575C8D
	.string "ひゃあ$"
	.if (. - gText_Rom_575C8D) > 0x4
	.error "gText_Rom_575C8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C8D) < 0x4
	.space 0x4 - (. - gText_Rom_575C8D)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:262 easy_chat_group_voices_line_262
	.globl gText_Rom_575C91
gText_Rom_575C91: @ 0x08575C91
	.string "ふっふっふ$"
	.if (. - gText_Rom_575C91) > 0x6
	.error "gText_Rom_575C91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C91) < 0x6
	.space 0x6 - (. - gText_Rom_575C91)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:268 easy_chat_group_voices_line_268
	.globl gText_Rom_575C97
gText_Rom_575C97: @ 0x08575C97
	.string "ププ$"
	.if (. - gText_Rom_575C97) > 0x3
	.error "gText_Rom_575C97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C97) < 0x3
	.space 0x3 - (. - gText_Rom_575C97)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:274 easy_chat_group_voices_line_274
	.globl gText_Rom_575C9A
gText_Rom_575C9A: @ 0x08575C9A
	.string "ふふん$"
	.if (. - gText_Rom_575C9A) > 0x4
	.error "gText_Rom_575C9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C9A) < 0x4
	.space 0x4 - (. - gText_Rom_575C9A)
	.endif
	.incbin "baserom.gba", 0x575c9e, 0x3

	@ src/data/easy_chat/easy_chat_group_voices.h:286 easy_chat_group_voices_line_286
	.globl gText_Rom_575CA1
gText_Rom_575CA1: @ 0x08575CA1
	.string "へっへっへ$"
	.if (. - gText_Rom_575CA1) > 0x6
	.error "gText_Rom_575CA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CA1) < 0x6
	.space 0x6 - (. - gText_Rom_575CA1)
	.endif
	.incbin "baserom.gba", 0x575ca7, 0x3

	@ src/data/easy_chat/easy_chat_group_voices.h:298 easy_chat_group_voices_line_298
	.globl gText_Rom_575CAA
gText_Rom_575CAA: @ 0x08575CAA
	.string "ほほほ$"
	.if (. - gText_Rom_575CAA) > 0x4
	.error "gText_Rom_575CAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CAA) < 0x4
	.space 0x4 - (. - gText_Rom_575CAA)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:304 easy_chat_group_voices_line_304
	.globl gText_Rom_575CAE
gText_Rom_575CAE: @ 0x08575CAE
	.string "ほら$"
	.if (. - gText_Rom_575CAE) > 0x3
	.error "gText_Rom_575CAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CAE) < 0x3
	.space 0x3 - (. - gText_Rom_575CAE)
	.endif
	.incbin "baserom.gba", 0x575cb1, 0x3

	@ src/data/easy_chat/easy_chat_group_voices.h:316 easy_chat_group_voices_line_316
	.globl gText_Rom_575CB4
gText_Rom_575CB4: @ 0x08575CB4
	.string "むきー!!$"
	.if (. - gText_Rom_575CB4) > 0x6
	.error "gText_Rom_575CB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CB4) < 0x6
	.space 0x6 - (. - gText_Rom_575CB4)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:322 easy_chat_group_voices_line_322
	.globl gText_Rom_575CBA
gText_Rom_575CBA: @ 0x08575CBA
	.string "むふふ$"
	.if (. - gText_Rom_575CBA) > 0x4
	.error "gText_Rom_575CBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CBA) < 0x4
	.space 0x4 - (. - gText_Rom_575CBA)
	.endif
	.incbin "baserom.gba", 0x575cbe, 0x3

	@ src/data/easy_chat/easy_chat_group_voices.h:334 easy_chat_group_voices_line_334
	.globl gText_Rom_575CC1
gText_Rom_575CC1: @ 0x08575CC1
	.string "よーし$"
	.if (. - gText_Rom_575CC1) > 0x4
	.error "gText_Rom_575CC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CC1) < 0x4
	.space 0x4 - (. - gText_Rom_575CC1)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:340 easy_chat_group_voices_line_340
	.globl gText_Rom_575CC5
gText_Rom_575CC5: @ 0x08575CC5
	.string "よし!$"
	.if (. - gText_Rom_575CC5) > 0x4
	.error "gText_Rom_575CC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CC5) < 0x4
	.space 0x4 - (. - gText_Rom_575CC5)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_575CC9
gText_Rom_575CC9: @ 0x08575CC9
	.string "ラララ$"
	.if (. - gText_Rom_575CC9) > 0x4
	.error "gText_Rom_575CC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CC9) < 0x4
	.space 0x4 - (. - gText_Rom_575CC9)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:352 easy_chat_group_voices_line_352
	.globl gText_Rom_575CCD
gText_Rom_575CCD: @ 0x08575CCD
	.string "わーい$"
	.if (. - gText_Rom_575CCD) > 0x4
	.error "gText_Rom_575CCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CCD) < 0x4
	.space 0x4 - (. - gText_Rom_575CCD)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:358 easy_chat_group_voices_line_358
	.globl gText_Rom_575CD1
gText_Rom_575CD1: @ 0x08575CD1
	.string "わーん!!$"
	.if (. - gText_Rom_575CD1) > 0x6
	.error "gText_Rom_575CD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CD1) < 0x6
	.space 0x6 - (. - gText_Rom_575CD1)
	.endif
	.incbin "baserom.gba", 0x575cd7, 0x3

	@ src/data/easy_chat/easy_chat_group_voices.h:370 easy_chat_group_voices_line_370
	.globl gText_Rom_575CDA
gText_Rom_575CDA: @ 0x08575CDA
	.string "わっ!!$"
	.if (. - gText_Rom_575CDA) > 0x5
	.error "gText_Rom_575CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CDA) < 0x5
	.space 0x5 - (. - gText_Rom_575CDA)
	.endif
	.incbin "baserom.gba", 0x575cdf, 0x2fd

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
	.incbin "baserom.gba", 0x575fea, 0x6

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
	.incbin "baserom.gba", 0x575fff, 0x3

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
	.incbin "baserom.gba", 0x576006, 0xe

	@ src/data/easy_chat/easy_chat_group_speech.h:94 easy_chat_group_speech_line_94
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
	.incbin "baserom.gba", 0x576034, 0x3

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
	.incbin "baserom.gba", 0x57603f, 0x3

	@ src/data/easy_chat/easy_chat_group_speech.h:160 easy_chat_group_speech_line_160
	.globl gText_Rom_576042
gText_Rom_576042: @ 0x08576042
	.string "ちょー$"
	.if (. - gText_Rom_576042) > 0x4
	.error "gText_Rom_576042 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576042) < 0x4
	.space 0x4 - (. - gText_Rom_576042)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:166 easy_chat_group_speech_line_166
	.globl gText_Rom_576046
gText_Rom_576046: @ 0x08576046
	.string "ちょっと$"
	.if (. - gText_Rom_576046) > 0x5
	.error "gText_Rom_576046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576046) < 0x5
	.space 0x5 - (. - gText_Rom_576046)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:172 easy_chat_group_speech_line_172
	.globl gText_Rom_57604B
gText_Rom_57604B: @ 0x0857604B
	.string "ったら$"
	.if (. - gText_Rom_57604B) > 0x4
	.error "gText_Rom_57604B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57604B) < 0x4
	.space 0x4 - (. - gText_Rom_57604B)
	.endif
	.incbin "baserom.gba", 0x57604f, 0x3

	@ src/data/easy_chat/easy_chat_group_speech.h:184 easy_chat_group_speech_line_184
	.globl gText_Rom_576052
gText_Rom_576052: @ 0x08576052
	.string "っていうか$"
	.if (. - gText_Rom_576052) > 0x6
	.error "gText_Rom_576052 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576052) < 0x6
	.space 0x6 - (. - gText_Rom_576052)
	.endif
	.incbin "baserom.gba", 0x576058, 0x3

	@ src/data/easy_chat/easy_chat_group_speech.h:196 easy_chat_group_speech_line_196
	.globl gText_Rom_57605B
gText_Rom_57605B: @ 0x0857605B
	.string "どうしても$"
	.if (. - gText_Rom_57605B) > 0x6
	.error "gText_Rom_57605B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57605B) < 0x6
	.space 0x6 - (. - gText_Rom_57605B)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:202 easy_chat_group_speech_line_202
	.globl gText_Rom_576061
gText_Rom_576061: @ 0x08576061
	.string "とうぜん$"
	.if (. - gText_Rom_576061) > 0x5
	.error "gText_Rom_576061 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576061) < 0x5
	.space 0x5 - (. - gText_Rom_576061)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:208 easy_chat_group_speech_line_208
	.globl gText_Rom_576066
gText_Rom_576066: @ 0x08576066
	.string "とりあえず$"
	.if (. - gText_Rom_576066) > 0x6
	.error "gText_Rom_576066 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576066) < 0x6
	.space 0x6 - (. - gText_Rom_576066)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:214 easy_chat_group_speech_line_214
	.globl gText_Rom_57606C
gText_Rom_57606C: @ 0x0857606C
	.string "なるほど$"
	.if (. - gText_Rom_57606C) > 0x5
	.error "gText_Rom_57606C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57606C) < 0x5
	.space 0x5 - (. - gText_Rom_57606C)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:220 easy_chat_group_speech_line_220
	.globl gText_Rom_576071
gText_Rom_576071: @ 0x08576071
	.string "なんて$"
	.if (. - gText_Rom_576071) > 0x4
	.error "gText_Rom_576071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576071) < 0x4
	.space 0x4 - (. - gText_Rom_576071)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:226 easy_chat_group_speech_line_226
	.globl gText_Rom_576075
gText_Rom_576075: @ 0x08576075
	.string "なんでも$"
	.if (. - gText_Rom_576075) > 0x5
	.error "gText_Rom_576075 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576075) < 0x5
	.space 0x5 - (. - gText_Rom_576075)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:232 easy_chat_group_speech_line_232
	.globl gText_Rom_57607A
gText_Rom_57607A: @ 0x0857607A
	.string "なんとか$"
	.if (. - gText_Rom_57607A) > 0x5
	.error "gText_Rom_57607A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57607A) < 0x5
	.space 0x5 - (. - gText_Rom_57607A)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:238 easy_chat_group_speech_line_238
	.globl gText_Rom_57607F
gText_Rom_57607F: @ 0x0857607F
	.string "なんとなく$"
	.if (. - gText_Rom_57607F) > 0x6
	.error "gText_Rom_57607F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57607F) < 0x6
	.space 0x6 - (. - gText_Rom_57607F)
	.endif
	.incbin "baserom.gba", 0x576085, 0x6

	@ src/data/easy_chat/easy_chat_group_speech.h:256 easy_chat_group_speech_line_256
	.globl gText_Rom_57608B
gText_Rom_57608B: @ 0x0857608B
	.string "バッチリ$"
	.if (. - gText_Rom_57608B) > 0x5
	.error "gText_Rom_57608B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57608B) < 0x5
	.space 0x5 - (. - gText_Rom_57608B)
	.endif
	.incbin "baserom.gba", 0x576090, 0x3

	@ src/data/easy_chat/easy_chat_group_speech.h:268 easy_chat_group_speech_line_268
	.globl gText_Rom_576093
gText_Rom_576093: @ 0x08576093
	.string "ほんと$"
	.if (. - gText_Rom_576093) > 0x4
	.error "gText_Rom_576093 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576093) < 0x4
	.space 0x4 - (. - gText_Rom_576093)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:274 easy_chat_group_speech_line_274
	.globl gText_Rom_576097
gText_Rom_576097: @ 0x08576097
	.string "まさに$"
	.if (. - gText_Rom_576097) > 0x4
	.error "gText_Rom_576097 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576097) < 0x4
	.space 0x4 - (. - gText_Rom_576097)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:280 easy_chat_group_speech_line_280
	.globl gText_Rom_57609B
gText_Rom_57609B: @ 0x0857609B
	.string "マジ$"
	.if (. - gText_Rom_57609B) > 0x3
	.error "gText_Rom_57609B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57609B) < 0x3
	.space 0x3 - (. - gText_Rom_57609B)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:286 easy_chat_group_speech_line_286
	.globl gText_Rom_57609E
gText_Rom_57609E: @ 0x0857609E
	.string "まったく$"
	.if (. - gText_Rom_57609E) > 0x5
	.error "gText_Rom_57609E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57609E) < 0x5
	.space 0x5 - (. - gText_Rom_57609E)
	.endif
	.incbin "baserom.gba", 0x5760a3, 0x3

	@ src/data/easy_chat/easy_chat_group_speech.h:298 easy_chat_group_speech_line_298
	.globl gText_Rom_5760A6
gText_Rom_5760A6: @ 0x085760A6
	.string "まるで$"
	.if (. - gText_Rom_5760A6) > 0x4
	.error "gText_Rom_5760A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760A6) < 0x4
	.space 0x4 - (. - gText_Rom_5760A6)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:304 easy_chat_group_speech_line_304
	.globl gText_Rom_5760AA
gText_Rom_5760AA: @ 0x085760AA
	.string "ムード$"
	.if (. - gText_Rom_5760AA) > 0x4
	.error "gText_Rom_5760AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760AA) < 0x4
	.space 0x4 - (. - gText_Rom_5760AA)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:310 easy_chat_group_speech_line_310
	.globl gText_Rom_5760AE
gText_Rom_5760AE: @ 0x085760AE
	.string "むしろ$"
	.if (. - gText_Rom_5760AE) > 0x4
	.error "gText_Rom_5760AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760AE) < 0x4
	.space 0x4 - (. - gText_Rom_5760AE)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:316 easy_chat_group_speech_line_316
	.globl gText_Rom_5760B2
gText_Rom_5760B2: @ 0x085760B2
	.string "めっぽう$"
	.if (. - gText_Rom_5760B2) > 0x5
	.error "gText_Rom_5760B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760B2) < 0x5
	.space 0x5 - (. - gText_Rom_5760B2)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:322 easy_chat_group_speech_line_322
	.globl gText_Rom_5760B7
gText_Rom_5760B7: @ 0x085760B7
	.string "モード$"
	.if (. - gText_Rom_5760B7) > 0x4
	.error "gText_Rom_5760B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760B7) < 0x4
	.space 0x4 - (. - gText_Rom_5760B7)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:328 easy_chat_group_speech_line_328
	.globl gText_Rom_5760BB
gText_Rom_5760BB: @ 0x085760BB
	.string "もっと$"
	.if (. - gText_Rom_5760BB) > 0x4
	.error "gText_Rom_5760BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760BB) < 0x4
	.space 0x4 - (. - gText_Rom_5760BB)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:334 easy_chat_group_speech_line_334
	.globl gText_Rom_5760BF
gText_Rom_5760BF: @ 0x085760BF
	.string "もはや$"
	.if (. - gText_Rom_5760BF) > 0x4
	.error "gText_Rom_5760BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760BF) < 0x4
	.space 0x4 - (. - gText_Rom_5760BF)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:340 easy_chat_group_speech_line_340
	.globl gText_Rom_5760C3
gText_Rom_5760C3: @ 0x085760C3
	.string "やっと$"
	.if (. - gText_Rom_5760C3) > 0x4
	.error "gText_Rom_5760C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760C3) < 0x4
	.space 0x4 - (. - gText_Rom_5760C3)
	.endif

	@ src/data/easy_chat/easy_chat_group_speech.h:346 easy_chat_group_speech_line_346
	.globl gText_Rom_5760C7
gText_Rom_5760C7: @ 0x085760C7
	.string "やっぱり$"
	.if (. - gText_Rom_5760C7) > 0x5
	.error "gText_Rom_5760C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760C7) < 0x5
	.space 0x5 - (. - gText_Rom_5760C7)
	.endif
	.incbin "baserom.gba", 0x5760cc, 0x2d8

	@ src/data/easy_chat/easy_chat_group_endings.h:4 easy_chat_group_endings_line_4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5763A4
gText_Rom_5763A4: @ 0x085763A4
	.string "いたします$"
	.if (. - gText_Rom_5763A4) != 0x6
	.error "gText_Rom_5763A4 must retain its original byte length"
	.endif
	.globl gText_Rom_5763A6
	.set gText_Rom_5763A6, gText_Rom_5763A4 + 0x2

	@ src/data/easy_chat/easy_chat_group_endings.h:10 easy_chat_group_endings_line_10
	.globl gText_Rom_5763AA
gText_Rom_5763AA: @ 0x085763AA
	.string "おります$"
	.if (. - gText_Rom_5763AA) > 0x5
	.error "gText_Rom_5763AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763AA) < 0x5
	.space 0x5 - (. - gText_Rom_5763AA)
	.endif
	.incbin "baserom.gba", 0x5763af, 0x5

	@ src/data/easy_chat/easy_chat_group_endings.h:28 easy_chat_group_endings_line_28
	.globl gText_Rom_5763B4
gText_Rom_5763B4: @ 0x085763B4
	.string "かしら$"
	.if (. - gText_Rom_5763B4) > 0x4
	.error "gText_Rom_5763B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763B4) < 0x4
	.space 0x4 - (. - gText_Rom_5763B4)
	.endif
	.incbin "baserom.gba", 0x5763b8, 0xa

	@ src/data/easy_chat/easy_chat_group_endings.h:52 easy_chat_group_endings_line_52
	.globl gText_Rom_5763C2
gText_Rom_5763C2: @ 0x085763C2
	.string "ございます$"
	.if (. - gText_Rom_5763C2) > 0x6
	.error "gText_Rom_5763C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763C2) < 0x6
	.space 0x6 - (. - gText_Rom_5763C2)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:58 easy_chat_group_endings_line_58
	.globl gText_Rom_5763C8
gText_Rom_5763C8: @ 0x085763C8
	.string "しがち$"
	.if (. - gText_Rom_5763C8) > 0x4
	.error "gText_Rom_5763C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763C8) < 0x4
	.space 0x4 - (. - gText_Rom_5763C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_5763CC
gText_Rom_5763CC: @ 0x085763CC
	.string "します$"
	.if (. - gText_Rom_5763CC) > 0x4
	.error "gText_Rom_5763CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763CC) < 0x4
	.space 0x4 - (. - gText_Rom_5763CC)
	.endif
	.incbin "baserom.gba", 0x5763d0, 0x3

	@ src/data/easy_chat/easy_chat_group_endings.h:76 easy_chat_group_endings_line_76
	.globl gText_Rom_5763D3
gText_Rom_5763D3: @ 0x085763D3
	.string "じゃん$"
	.if (. - gText_Rom_5763D3) > 0x4
	.error "gText_Rom_5763D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763D3) < 0x4
	.space 0x4 - (. - gText_Rom_5763D3)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:82 easy_chat_group_endings_line_82
	.globl gText_Rom_5763D7
gText_Rom_5763D7: @ 0x085763D7
	.string "しよう$"
	.if (. - gText_Rom_5763D7) > 0x4
	.error "gText_Rom_5763D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763D7) < 0x4
	.space 0x4 - (. - gText_Rom_5763D7)
	.endif
	.incbin "baserom.gba", 0x5763db, 0xa

	@ src/data/easy_chat/easy_chat_group_endings.h:112 easy_chat_group_endings_line_112
	.globl gText_Rom_5763E5
gText_Rom_5763E5: @ 0x085763E5
	.string "だからね$"
	.if (. - gText_Rom_5763E5) > 0x5
	.error "gText_Rom_5763E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763E5) < 0x5
	.space 0x5 - (. - gText_Rom_5763E5)
	.endif
	.incbin "baserom.gba", 0x5763ea, 0x3

	@ src/data/easy_chat/easy_chat_group_endings.h:124 easy_chat_group_endings_line_124
	.globl gText_Rom_5763ED
gText_Rom_5763ED: @ 0x085763ED
	.string "だった$"
	.if (. - gText_Rom_5763ED) > 0x4
	.error "gText_Rom_5763ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763ED) < 0x4
	.space 0x4 - (. - gText_Rom_5763ED)
	.endif
	.incbin "baserom.gba", 0x5763f1, 0x6

	@ src/data/easy_chat/easy_chat_group_endings.h:142 easy_chat_group_endings_line_142
	.globl gText_Rom_5763F7
gText_Rom_5763F7: @ 0x085763F7
	.string "だよねー!$"
	.if (. - gText_Rom_5763F7) > 0x6
	.error "gText_Rom_5763F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763F7) < 0x6
	.space 0x6 - (. - gText_Rom_5763F7)
	.endif
	.incbin "baserom.gba", 0x5763fd, 0x6

	@ src/data/easy_chat/easy_chat_group_endings.h:160 easy_chat_group_endings_line_160
	.globl gText_Rom_576403
gText_Rom_576403: @ 0x08576403
	.string "ってかんじ$"
	.if (. - gText_Rom_576403) > 0x6
	.error "gText_Rom_576403 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576403) < 0x6
	.space 0x6 - (. - gText_Rom_576403)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:166 easy_chat_group_endings_line_166
	.globl gText_Rom_576409
gText_Rom_576409: @ 0x08576409
	.string "っぱなし$"
	.if (. - gText_Rom_576409) > 0x5
	.error "gText_Rom_576409 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576409) < 0x5
	.space 0x5 - (. - gText_Rom_576409)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:172 easy_chat_group_endings_line_172
	.globl gText_Rom_57640E
gText_Rom_57640E: @ 0x0857640E
	.string "つもり$"
	.if (. - gText_Rom_57640E) > 0x4
	.error "gText_Rom_57640E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57640E) < 0x4
	.space 0x4 - (. - gText_Rom_57640E)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:178 easy_chat_group_endings_line_178
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576412
gText_Rom_576412: @ 0x08576412
	.string "ていない$"
	.if (. - gText_Rom_576412) != 0x5
	.error "gText_Rom_576412 must retain its original byte length"
	.endif
	.globl gText_Rom_576413
	.set gText_Rom_576413, gText_Rom_576412 + 0x1

	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_576417
gText_Rom_576417: @ 0x08576417
	.string "ている$"
	.if (. - gText_Rom_576417) > 0x4
	.error "gText_Rom_576417 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576417) < 0x4
	.space 0x4 - (. - gText_Rom_576417)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:190 easy_chat_group_endings_line_190
	.globl gText_Rom_57641B
gText_Rom_57641B: @ 0x0857641B
	.string "でーす!$"
	.if (. - gText_Rom_57641B) > 0x5
	.error "gText_Rom_57641B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57641B) < 0x5
	.space 0x5 - (. - gText_Rom_57641B)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_576420
gText_Rom_576420: @ 0x08576420
	.string "でした$"
	.if (. - gText_Rom_576420) > 0x4
	.error "gText_Rom_576420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576420) < 0x4
	.space 0x4 - (. - gText_Rom_576420)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:202 easy_chat_group_endings_line_202
	.globl gText_Rom_576424
gText_Rom_576424: @ 0x08576424
	.string "でしょ?$"
	.if (. - gText_Rom_576424) > 0x5
	.error "gText_Rom_576424 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576424) < 0x5
	.space 0x5 - (. - gText_Rom_576424)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:208 easy_chat_group_endings_line_208
	.globl gText_Rom_576429
gText_Rom_576429: @ 0x08576429
	.string "でしょー!$"
	.if (. - gText_Rom_576429) > 0x6
	.error "gText_Rom_576429 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576429) < 0x6
	.space 0x6 - (. - gText_Rom_576429)
	.endif
	.incbin "baserom.gba", 0x57642f, 0x8

	@ src/data/easy_chat/easy_chat_group_endings.h:226 easy_chat_group_endings_line_226
	.globl gText_Rom_576437
gText_Rom_576437: @ 0x08576437
	.string "ですよ$"
	.if (. - gText_Rom_576437) > 0x4
	.error "gText_Rom_576437 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576437) < 0x4
	.space 0x4 - (. - gText_Rom_576437)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:232 easy_chat_group_endings_line_232
	.globl gText_Rom_57643B
gText_Rom_57643B: @ 0x0857643B
	.string "ですわ$"
	.if (. - gText_Rom_57643B) > 0x4
	.error "gText_Rom_57643B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57643B) < 0x4
	.space 0x4 - (. - gText_Rom_57643B)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:238 easy_chat_group_endings_line_238
	.globl gText_Rom_57643F
gText_Rom_57643F: @ 0x0857643F
	.string "どうなの?$"
	.if (. - gText_Rom_57643F) > 0x6
	.error "gText_Rom_57643F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57643F) < 0x6
	.space 0x6 - (. - gText_Rom_57643F)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:244 easy_chat_group_endings_line_244
	.globl gText_Rom_576445
gText_Rom_576445: @ 0x08576445
	.string "どうよ?$"
	.if (. - gText_Rom_576445) > 0x5
	.error "gText_Rom_576445 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576445) < 0x5
	.space 0x5 - (. - gText_Rom_576445)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:250 easy_chat_group_endings_line_250
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57644A
gText_Rom_57644A: @ 0x0857644A
	.string "とかいって$"
	.if (. - gText_Rom_57644A) != 0x6
	.error "gText_Rom_57644A must retain its original byte length"
	.endif
	.globl gText_Rom_57644C
	.set gText_Rom_57644C, gText_Rom_57644A + 0x2

	@ src/data/easy_chat/easy_chat_group_endings.h:256 easy_chat_group_endings_line_256
	.globl gText_Rom_576450
gText_Rom_576450: @ 0x08576450
	.string "なさい$"
	.if (. - gText_Rom_576450) > 0x4
	.error "gText_Rom_576450 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576450) < 0x4
	.space 0x4 - (. - gText_Rom_576450)
	.endif
	.incbin "baserom.gba", 0x576454, 0x3

	@ src/data/easy_chat/easy_chat_group_endings.h:268 easy_chat_group_endings_line_268
	.globl gText_Rom_576457
gText_Rom_576457: @ 0x08576457
	.string "なのか$"
	.if (. - gText_Rom_576457) > 0x4
	.error "gText_Rom_576457 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576457) < 0x4
	.space 0x4 - (. - gText_Rom_576457)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:274 easy_chat_group_endings_line_274
	.globl gText_Rom_57645B
gText_Rom_57645B: @ 0x0857645B
	.string "なのだ$"
	.if (. - gText_Rom_57645B) > 0x4
	.error "gText_Rom_57645B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57645B) < 0x4
	.space 0x4 - (. - gText_Rom_57645B)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:280 easy_chat_group_endings_line_280
	.globl gText_Rom_57645F
gText_Rom_57645F: @ 0x0857645F
	.string "なのよ$"
	.if (. - gText_Rom_57645F) > 0x4
	.error "gText_Rom_57645F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57645F) < 0x4
	.space 0x4 - (. - gText_Rom_57645F)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:286 easy_chat_group_endings_line_286
	.globl gText_Rom_576463
gText_Rom_576463: @ 0x08576463
	.string "なんだね$"
	.if (. - gText_Rom_576463) > 0x5
	.error "gText_Rom_576463 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576463) < 0x5
	.space 0x5 - (. - gText_Rom_576463)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:292 easy_chat_group_endings_line_292
	.globl gText_Rom_576468
gText_Rom_576468: @ 0x08576468
	.string "なんです$"
	.if (. - gText_Rom_576468) > 0x5
	.error "gText_Rom_576468 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576468) < 0x5
	.space 0x5 - (. - gText_Rom_576468)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:298 easy_chat_group_endings_line_298
	.globl gText_Rom_57646D
gText_Rom_57646D: @ 0x0857646D
	.string "なんてね$"
	.if (. - gText_Rom_57646D) > 0x5
	.error "gText_Rom_57646D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57646D) < 0x5
	.space 0x5 - (. - gText_Rom_57646D)
	.endif
	.incbin "baserom.gba", 0x576472, 0xa

	@ src/data/easy_chat/easy_chat_group_endings.h:328 easy_chat_group_endings_line_328
	.globl gText_Rom_57647C
gText_Rom_57647C: @ 0x0857647C
	.string "ばっかり$"
	.if (. - gText_Rom_57647C) > 0x5
	.error "gText_Rom_57647C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57647C) < 0x5
	.space 0x5 - (. - gText_Rom_57647C)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:334 easy_chat_group_endings_line_334
	.globl gText_Rom_576481
gText_Rom_576481: @ 0x08576481
	.string "まーす!$"
	.if (. - gText_Rom_576481) > 0x5
	.error "gText_Rom_576481 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576481) < 0x5
	.space 0x5 - (. - gText_Rom_576481)
	.endif
	.incbin "baserom.gba", 0x576486, 0x3

	@ src/data/easy_chat/easy_chat_group_endings.h:346 easy_chat_group_endings_line_346
	.globl gText_Rom_576489
gText_Rom_576489: @ 0x08576489
	.string "ますわ$"
	.if (. - gText_Rom_576489) > 0x4
	.error "gText_Rom_576489 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576489) < 0x4
	.space 0x4 - (. - gText_Rom_576489)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_57648D
gText_Rom_57648D: @ 0x0857648D
	.string "ません$"
	.if (. - gText_Rom_57648D) > 0x4
	.error "gText_Rom_57648D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57648D) < 0x4
	.space 0x4 - (. - gText_Rom_57648D)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:358 easy_chat_group_endings_line_358
	.globl gText_Rom_576491
gText_Rom_576491: @ 0x08576491
	.string "みたいな$"
	.if (. - gText_Rom_576491) > 0x5
	.error "gText_Rom_576491 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576491) < 0x5
	.space 0x5 - (. - gText_Rom_576491)
	.endif
	.incbin "baserom.gba", 0x576496, 0xc

	@ src/data/easy_chat/easy_chat_group_endings.h:388 easy_chat_group_endings_line_388
	.globl gText_Rom_5764A2
gText_Rom_5764A2: @ 0x085764A2
	.string "よーん$"
	.if (. - gText_Rom_5764A2) > 0x4
	.error "gText_Rom_5764A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5764A2) < 0x4
	.space 0x4 - (. - gText_Rom_5764A2)
	.endif
	.incbin "baserom.gba", 0x5764a6, 0x9

	@ src/data/easy_chat/easy_chat_group_endings.h:412 easy_chat_group_endings_line_412
	.globl gText_Rom_5764AF
gText_Rom_5764AF: @ 0x085764AF
	.string "わよ!$"
	.if (. - gText_Rom_5764AF) > 0x4
	.error "gText_Rom_5764AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5764AF) < 0x4
	.space 0x4 - (. - gText_Rom_5764AF)
	.endif
	.incbin "baserom.gba", 0x5764b3, 0x33d

	@ src/data/easy_chat/easy_chat_group_feelings.h:1 gEasyChatWord_Meet (+1 aliases)
	.globl gText_Rom_5767F0
gText_Rom_5767F0: @ 0x085767F0
	.string "あいたい$"
	.if (. - gText_Rom_5767F0) > 0x5
	.error "gText_Rom_5767F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5767F0) < 0x5
	.space 0x5 - (. - gText_Rom_5767F0)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:2 gEasyChatWord_Play (+1 aliases)
	.globl gText_Rom_5767F5
gText_Rom_5767F5: @ 0x085767F5
	.string "あそびたい$"
	.if (. - gText_Rom_5767F5) > 0x6
	.error "gText_Rom_5767F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5767F5) < 0x6
	.space 0x6 - (. - gText_Rom_5767F5)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:3 gEasyChatWord_Hurried (+1 aliases)
	.globl gText_Rom_5767FB
gText_Rom_5767FB: @ 0x085767FB
	.string "あわてて$"
	.if (. - gText_Rom_5767FB) > 0x5
	.error "gText_Rom_5767FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5767FB) < 0x5
	.space 0x5 - (. - gText_Rom_5767FB)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:4 gEasyChatWord_Goes (+1 aliases)
	.globl gText_Rom_576800
gText_Rom_576800: @ 0x08576800
	.string "いきたい$"
	.if (. - gText_Rom_576800) > 0x5
	.error "gText_Rom_576800 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576800) < 0x5
	.space 0x5 - (. - gText_Rom_576800)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:5 gEasyChatWord_Giddy (+1 aliases)
	.globl gText_Rom_576805
gText_Rom_576805: @ 0x08576805
	.string "うかれて$"
	.if (. - gText_Rom_576805) > 0x5
	.error "gText_Rom_576805 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576805) < 0x5
	.space 0x5 - (. - gText_Rom_576805)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:6 gEasyChatWord_Happy (+1 aliases)
	.globl gText_Rom_57680A
gText_Rom_57680A: @ 0x0857680A
	.string "うれしい$"
	.if (. - gText_Rom_57680A) > 0x5
	.error "gText_Rom_57680A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57680A) < 0x5
	.space 0x5 - (. - gText_Rom_57680A)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:7 gEasyChatWord_Happiness (+1 aliases)
	.globl gText_Rom_57680F
gText_Rom_57680F: @ 0x0857680F
	.string "うれしさ$"
	.if (. - gText_Rom_57680F) > 0x5
	.error "gText_Rom_57680F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57680F) < 0x5
	.space 0x5 - (. - gText_Rom_57680F)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:8 gEasyChatWord_Excite (+1 aliases)
	.globl gText_Rom_576814
gText_Rom_576814: @ 0x08576814
	.string "エキサイト$"
	.if (. - gText_Rom_576814) > 0x6
	.error "gText_Rom_576814 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576814) < 0x6
	.space 0x6 - (. - gText_Rom_576814)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:9 gEasyChatWord_Important (+1 aliases)
	.globl gText_Rom_57681A
gText_Rom_57681A: @ 0x0857681A
	.string "えらい$"
	.if (. - gText_Rom_57681A) > 0x4
	.error "gText_Rom_57681A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57681A) < 0x4
	.space 0x4 - (. - gText_Rom_57681A)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:10 gEasyChatWord_Funny (+1 aliases)
	.globl gText_Rom_57681E
gText_Rom_57681E: @ 0x0857681E
	.string "おかしい$"
	.if (. - gText_Rom_57681E) > 0x5
	.error "gText_Rom_57681E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57681E) < 0x5
	.space 0x5 - (. - gText_Rom_57681E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:11 gEasyChatWord_Got (+1 aliases)
	.globl gText_Rom_576823
gText_Rom_576823: @ 0x08576823
	.string "オッケー$"
	.if (. - gText_Rom_576823) > 0x5
	.error "gText_Rom_576823 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576823) < 0x5
	.space 0x5 - (. - gText_Rom_576823)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:12 gEasyChatWord_GoHome (+1 aliases)
	.globl gText_Rom_576828
gText_Rom_576828: @ 0x08576828
	.string "かえりたい$"
	.if (. - gText_Rom_576828) > 0x6
	.error "gText_Rom_576828 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576828) < 0x6
	.space 0x6 - (. - gText_Rom_576828)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:13 gEasyChatWord_Disappointed (+1 aliases)
	.globl gText_Rom_57682E
gText_Rom_57682E: @ 0x0857682E
	.string "がっかり$"
	.if (. - gText_Rom_57682E) > 0x5
	.error "gText_Rom_57682E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57682E) < 0x5
	.space 0x5 - (. - gText_Rom_57682E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:14 gEasyChatWord_Disappoints (+1 aliases)
	.globl gText_Rom_576833
gText_Rom_576833: @ 0x08576833
	.string "がっくし$"
	.if (. - gText_Rom_576833) > 0x5
	.error "gText_Rom_576833 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576833) < 0x5
	.space 0x5 - (. - gText_Rom_576833)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:15 gEasyChatWord_Sad (+1 aliases)
	.globl gText_Rom_576838
gText_Rom_576838: @ 0x08576838
	.string "かなしい$"
	.if (. - gText_Rom_576838) > 0x5
	.error "gText_Rom_576838 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576838) < 0x5
	.space 0x5 - (. - gText_Rom_576838)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:16 gEasyChatWord_Try (+1 aliases)
	.globl gText_Rom_57683D
gText_Rom_57683D: @ 0x0857683D
	.string "がんばって$"
	.if (. - gText_Rom_57683D) > 0x6
	.error "gText_Rom_57683D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57683D) < 0x6
	.space 0x6 - (. - gText_Rom_57683D)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:17 gEasyChatWord_Tries (+1 aliases)
	.globl gText_Rom_576843
gText_Rom_576843: @ 0x08576843
	.string "がんばる$"
	.if (. - gText_Rom_576843) > 0x5
	.error "gText_Rom_576843 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576843) < 0x5
	.space 0x5 - (. - gText_Rom_576843)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:18 gEasyChatWord_Hears (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576848
gText_Rom_576848: @ 0x08576848
	.string "きがしない$"
	.if (. - gText_Rom_576848) != 0x6
	.error "gText_Rom_576848 must retain its original byte length"
	.endif
	.globl gText_Rom_57684A
	.set gText_Rom_57684A, gText_Rom_576848 + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:19 gEasyChatWord_Think (+1 aliases)
	.globl gText_Rom_57684E
gText_Rom_57684E: @ 0x0857684E
	.string "きがする$"
	.if (. - gText_Rom_57684E) > 0x5
	.error "gText_Rom_57684E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57684E) < 0x5
	.space 0x5 - (. - gText_Rom_57684E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:20 gEasyChatWord_Hear (+1 aliases)
	.globl gText_Rom_576853
gText_Rom_576853: @ 0x08576853
	.string "ききたい$"
	.if (. - gText_Rom_576853) > 0x5
	.error "gText_Rom_576853 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576853) < 0x5
	.space 0x5 - (. - gText_Rom_576853)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:21 gEasyChatWord_Wants (+1 aliases)
	.globl gText_Rom_576858
gText_Rom_576858: @ 0x08576858
	.string "きになる$"
	.if (. - gText_Rom_576858) > 0x5
	.error "gText_Rom_576858 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576858) < 0x5
	.space 0x5 - (. - gText_Rom_576858)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:22 gEasyChatWord_Misheard (+1 aliases)
	.globl gText_Rom_57685D
gText_Rom_57685D: @ 0x0857685D
	.string "きのせい$"
	.if (. - gText_Rom_57685D) > 0x5
	.error "gText_Rom_57685D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57685D) < 0x5
	.space 0x5 - (. - gText_Rom_57685D)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:23 gEasyChatWord_Dislike (+1 aliases)
	.globl gText_Rom_576862
gText_Rom_576862: @ 0x08576862
	.string "きらい$"
	.if (. - gText_Rom_576862) > 0x4
	.error "gText_Rom_576862 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576862) < 0x4
	.space 0x4 - (. - gText_Rom_576862)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:24 gEasyChatWord_Angry (+1 aliases)
	.globl gText_Rom_576866
gText_Rom_576866: @ 0x08576866
	.string "くやしい$"
	.if (. - gText_Rom_576866) > 0x5
	.error "gText_Rom_576866 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576866) < 0x5
	.space 0x5 - (. - gText_Rom_576866)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:25 gEasyChatWord_Anger (+1 aliases)
	.globl gText_Rom_57686B
gText_Rom_57686B: @ 0x0857686B
	.string "くやしさ$"
	.if (. - gText_Rom_57686B) > 0x5
	.error "gText_Rom_57686B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57686B) < 0x5
	.space 0x5 - (. - gText_Rom_57686B)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:26 gEasyChatWord_Scary (+1 aliases)
	.globl gText_Rom_576870
gText_Rom_576870: @ 0x08576870
	.string "こわい$"
	.if (. - gText_Rom_576870) > 0x4
	.error "gText_Rom_576870 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576870) < 0x4
	.space 0x4 - (. - gText_Rom_576870)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:27 gEasyChatWord_Lonesome (+1 aliases)
	.globl gText_Rom_576874
gText_Rom_576874: @ 0x08576874
	.string "さみしい$"
	.if (. - gText_Rom_576874) > 0x5
	.error "gText_Rom_576874 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576874) < 0x5
	.space 0x5 - (. - gText_Rom_576874)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:28 gEasyChatWord_Disappoint (+1 aliases)
	.globl gText_Rom_576879
gText_Rom_576879: @ 0x08576879
	.string "ざんねん$"
	.if (. - gText_Rom_576879) > 0x5
	.error "gText_Rom_576879 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576879) < 0x5
	.space 0x5 - (. - gText_Rom_576879)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:29 gEasyChatWord_Joy (+1 aliases)
	.globl gText_Rom_57687E
gText_Rom_57687E: @ 0x0857687E
	.string "しあわせ$"
	.if (. - gText_Rom_57687E) > 0x5
	.error "gText_Rom_57687E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57687E) < 0x5
	.space 0x5 - (. - gText_Rom_57687E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:30 gEasyChatWord_Gets (+1 aliases)
	.globl gText_Rom_576883
gText_Rom_576883: @ 0x08576883
	.string "したい$"
	.if (. - gText_Rom_576883) > 0x4
	.error "gText_Rom_576883 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576883) < 0x4
	.space 0x4 - (. - gText_Rom_576883)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:31 gEasyChatWord_Never (+1 aliases)
	.globl gText_Rom_576887
gText_Rom_576887: @ 0x08576887
	.string "したくない$"
	.if (. - gText_Rom_576887) > 0x6
	.error "gText_Rom_576887 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576887) < 0x6
	.space 0x6 - (. - gText_Rom_576887)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:32 gEasyChatWord_Darn (+1 aliases)
	.globl gText_Rom_57688D
gText_Rom_57688D: @ 0x0857688D
	.string "しまった$"
	.if (. - gText_Rom_57688D) > 0x5
	.error "gText_Rom_57688D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57688D) < 0x5
	.space 0x5 - (. - gText_Rom_57688D)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:33 gEasyChatWord_Downcast (+1 aliases)
	.globl gText_Rom_576892
gText_Rom_576892: @ 0x08576892
	.string "しょんぼり$"
	.if (. - gText_Rom_576892) > 0x6
	.error "gText_Rom_576892 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576892) < 0x6
	.space 0x6 - (. - gText_Rom_576892)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:34 gEasyChatWord_Incredible (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576898
gText_Rom_576898: @ 0x08576898
	.string "しんじられない$"
	.if (. - gText_Rom_576898) != 0x8
	.error "gText_Rom_576898 must retain its original byte length"
	.endif
	.globl gText_Rom_57689B
	.set gText_Rom_57689B, gText_Rom_576898 + 0x3
	.incbin "baserom.gba", 0x5768a0, 0x3

	@ src/data/easy_chat/easy_chat_group_feelings.h:36 gEasyChatWord_Dislikes (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768A3
gText_Rom_5768A3: @ 0x085768A3
	.string "だいきらい$"
	.if (. - gText_Rom_5768A3) != 0x6
	.error "gText_Rom_5768A3 must retain its original byte length"
	.endif
	.globl gText_Rom_5768A5
	.set gText_Rom_5768A5, gText_Rom_5768A3 + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:37 gEasyChatWord_Boring (+1 aliases)
	.globl gText_Rom_5768A9
gText_Rom_5768A9: @ 0x085768A9
	.string "たいくつ$"
	.if (. - gText_Rom_5768A9) > 0x5
	.error "gText_Rom_5768A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768A9) < 0x5
	.space 0x5 - (. - gText_Rom_5768A9)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:38 gEasyChatWord_Care (+1 aliases)
	.globl gText_Rom_5768AE
gText_Rom_5768AE: @ 0x085768AE
	.string "だいじ$"
	.if (. - gText_Rom_5768AE) > 0x4
	.error "gText_Rom_5768AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768AE) < 0x4
	.space 0x4 - (. - gText_Rom_5768AE)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:39 gEasyChatWord_Cares (+1 aliases)
	.globl gText_Rom_5768B2
gText_Rom_5768B2: @ 0x085768B2
	.string "だいじに$"
	.if (. - gText_Rom_5768B2) > 0x5
	.error "gText_Rom_5768B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768B2) < 0x5
	.space 0x5 - (. - gText_Rom_5768B2)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:40 gEasyChatWord_AllRight (+1 aliases)
	.globl gText_Rom_5768B7
gText_Rom_5768B7: @ 0x085768B7
	.string "だいじょうぶ$"
	.if (. - gText_Rom_5768B7) > 0x7
	.error "gText_Rom_5768B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768B7) < 0x7
	.space 0x7 - (. - gText_Rom_5768B7)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:41 gEasyChatWord_Adore (+2 aliases)
	.globl gText_Rom_5768BE
gText_Rom_5768BE: @ 0x085768BE
	.string "だいすき$"
	.if (. - gText_Rom_5768BE) > 0x5
	.error "gText_Rom_5768BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768BE) < 0x5
	.space 0x5 - (. - gText_Rom_5768BE)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:42 gEasyChatWord_Disaster (+1 aliases)
	.globl gText_Rom_5768C3
gText_Rom_5768C3: @ 0x085768C3
	.string "たいへん$"
	.if (. - gText_Rom_5768C3) > 0x5
	.error "gText_Rom_5768C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768C3) < 0x5
	.space 0x5 - (. - gText_Rom_5768C3)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:43 gEasyChatWord_Enjoy (+1 aliases)
	.globl gText_Rom_5768C8
gText_Rom_5768C8: @ 0x085768C8
	.string "たのしい$"
	.if (. - gText_Rom_5768C8) > 0x5
	.error "gText_Rom_5768C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768C8) < 0x5
	.space 0x5 - (. - gText_Rom_5768C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:44 gEasyChatWord_Enjoys (+1 aliases)
	.globl gText_Rom_5768CD
gText_Rom_5768CD: @ 0x085768CD
	.string "たのしすぎ$"
	.if (. - gText_Rom_5768CD) > 0x6
	.error "gText_Rom_5768CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768CD) < 0x6
	.space 0x6 - (. - gText_Rom_5768CD)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:45 gEasyChatWord_Eat (+1 aliases)
	.globl gText_Rom_5768D3
gText_Rom_5768D3: @ 0x085768D3
	.string "たべたい$"
	.if (. - gText_Rom_5768D3) > 0x5
	.error "gText_Rom_5768D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768D3) < 0x5
	.space 0x5 - (. - gText_Rom_5768D3)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:46 gEasyChatWord_Lacking (+1 aliases)
	.globl gText_Rom_5768D8
gText_Rom_5768D8: @ 0x085768D8
	.string "たりない$"
	.if (. - gText_Rom_5768D8) > 0x5
	.error "gText_Rom_5768D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768D8) < 0x5
	.space 0x5 - (. - gText_Rom_5768D8)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:47 gEasyChatWord_Bad (+1 aliases)
	.globl gText_Rom_5768DD
gText_Rom_5768DD: @ 0x085768DD
	.string "ちくしょー$"
	.if (. - gText_Rom_5768DD) > 0x6
	.error "gText_Rom_5768DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768DD) < 0x6
	.space 0x6 - (. - gText_Rom_5768DD)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:48 gEasyChatWord_Hard (+1 aliases)
	.globl gText_Rom_5768E3
gText_Rom_5768E3: @ 0x085768E3
	.string "つらい$"
	.if (. - gText_Rom_5768E3) > 0x4
	.error "gText_Rom_5768E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768E3) < 0x4
	.space 0x4 - (. - gText_Rom_5768E3)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:49 gEasyChatWord_Terrible (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768E7
gText_Rom_5768E7: @ 0x085768E7
	.string "つらかった$"
	.if (. - gText_Rom_5768E7) != 0x6
	.error "gText_Rom_5768E7 must retain its original byte length"
	.endif
	.globl gText_Rom_5768E9
	.set gText_Rom_5768E9, gText_Rom_5768E7 + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:50 gEasyChatWord_Should (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768ED
gText_Rom_5768ED: @ 0x085768ED
	.string "どうしよう$"
	.if (. - gText_Rom_5768ED) != 0x6
	.error "gText_Rom_5768ED must retain its original byte length"
	.endif
	.globl gText_Rom_5768EF
	.set gText_Rom_5768EF, gText_Rom_5768ED + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:51 gEasyChatWord_Nice (+1 aliases)
	.globl gText_Rom_5768F3
gText_Rom_5768F3: @ 0x085768F3
	.string "ナイス$"
	.if (. - gText_Rom_5768F3) > 0x4
	.error "gText_Rom_5768F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768F3) < 0x4
	.space 0x4 - (. - gText_Rom_5768F3)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:52 gEasyChatWord_Drink (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768F7
gText_Rom_5768F7: @ 0x085768F7
	.string "のみたい$"
	.if (. - gText_Rom_5768F7) != 0x5
	.error "gText_Rom_5768F7 must retain its original byte length"
	.endif
	.globl gText_Rom_5768F8
	.set gText_Rom_5768F8, gText_Rom_5768F7 + 0x1

	@ src/data/easy_chat/easy_chat_group_feelings.h:53 gEasyChatWord_Surprise (+1 aliases)
	.globl gText_Rom_5768FC
gText_Rom_5768FC: @ 0x085768FC
	.string "びっくり$"
	.if (. - gText_Rom_5768FC) > 0x5
	.error "gText_Rom_5768FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768FC) < 0x5
	.space 0x5 - (. - gText_Rom_5768FC)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:54 gEasyChatWord_Fear (+1 aliases)
	.globl gText_Rom_576901
gText_Rom_576901: @ 0x08576901
	.string "ふあん$"
	.if (. - gText_Rom_576901) > 0x4
	.error "gText_Rom_576901 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576901) < 0x4
	.space 0x4 - (. - gText_Rom_576901)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:55 gEasyChatWord_Want (+1 aliases)
	.globl gText_Rom_576905
gText_Rom_576905: @ 0x08576905
	.string "ほしい$"
	.if (. - gText_Rom_576905) > 0x4
	.error "gText_Rom_576905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576905) < 0x4
	.space 0x4 - (. - gText_Rom_576905)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:56 gEasyChatWord_Wait (+1 aliases)
	.globl gText_Rom_576909
gText_Rom_576909: @ 0x08576909
	.string "まてない$"
	.if (. - gText_Rom_576909) > 0x5
	.error "gText_Rom_576909 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576909) < 0x5
	.space 0x5 - (. - gText_Rom_576909)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:57 gEasyChatWord_Satisfied (+2 aliases)
	.globl gText_Rom_57690E
gText_Rom_57690E: @ 0x0857690E
	.string "まんぞく$"
	.if (. - gText_Rom_57690E) > 0x5
	.error "gText_Rom_57690E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57690E) < 0x5
	.space 0x5 - (. - gText_Rom_57690E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:58 gEasyChatWord_See (+1 aliases)
	.globl gText_Rom_576913
gText_Rom_576913: @ 0x08576913
	.string "みたい$"
	.if (. - gText_Rom_576913) > 0x4
	.error "gText_Rom_576913 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576913) < 0x4
	.space 0x4 - (. - gText_Rom_576913)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:59 gEasyChatWord_Rare (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576917
gText_Rom_576917: @ 0x08576917
	.string "めずらしい$"
	.if (. - gText_Rom_576917) != 0x6
	.error "gText_Rom_576917 must retain its original byte length"
	.endif
	.globl gText_Rom_576919
	.set gText_Rom_576919, gText_Rom_576917 + 0x2
	.incbin "baserom.gba", 0x57691d, 0x3

	@ src/data/easy_chat/easy_chat_group_feelings.h:61 gEasyChatWord_Done (+1 aliases)
	.globl gText_Rom_576920
gText_Rom_576920: @ 0x08576920
	.string "やったー$"
	.if (. - gText_Rom_576920) > 0x5
	.error "gText_Rom_576920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576920) < 0x5
	.space 0x5 - (. - gText_Rom_576920)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:62 gEasyChatWord_Danger (+1 aliases)
	.globl gText_Rom_576925
gText_Rom_576925: @ 0x08576925
	.string "やばい$"
	.if (. - gText_Rom_576925) > 0x4
	.error "gText_Rom_576925 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576925) < 0x4
	.space 0x4 - (. - gText_Rom_576925)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:63 gEasyChatWord_Defeated (+1 aliases)
	.globl gText_Rom_576929
gText_Rom_576929: @ 0x08576929
	.string "やられた$"
	.if (. - gText_Rom_576929) > 0x5
	.error "gText_Rom_576929 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576929) < 0x5
	.space 0x5 - (. - gText_Rom_576929)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:64 gEasyChatWord_Beat (+1 aliases)
	.globl gText_Rom_57692E
gText_Rom_57692E: @ 0x0857692E
	.string "やられて$"
	.if (. - gText_Rom_57692E) > 0x5
	.error "gText_Rom_57692E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57692E) < 0x5
	.space 0x5 - (. - gText_Rom_57692E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:65 gEasyChatWord_Great (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576933
gText_Rom_576933: @ 0x08576933
	.string "よかった$"
	.if (. - gText_Rom_576933) != 0x5
	.error "gText_Rom_576933 must retain its original byte length"
	.endif
	.globl gText_Rom_576934
	.set gText_Rom_576934, gText_Rom_576933 + 0x1

	@ src/data/easy_chat/easy_chat_group_feelings.h:66 gEasyChatWord_Romantic (+1 aliases)
	.globl gText_Rom_576938
gText_Rom_576938: @ 0x08576938
	.string "ロマン$"
	.if (. - gText_Rom_576938) > 0x4
	.error "gText_Rom_576938 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576938) < 0x4
	.space 0x4 - (. - gText_Rom_576938)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:67 gEasyChatWord_Question (+1 aliases)
	.globl gText_Rom_57693C
gText_Rom_57693C: @ 0x0857693C
	.string "ろんがい$"
	.if (. - gText_Rom_57693C) > 0x5
	.error "gText_Rom_57693C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57693C) < 0x5
	.space 0x5 - (. - gText_Rom_57693C)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:68 gEasyChatWord_Understand (+1 aliases)
	.globl gText_Rom_576941
gText_Rom_576941: @ 0x08576941
	.string "わから$"
	.if (. - gText_Rom_576941) > 0x4
	.error "gText_Rom_576941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576941) < 0x4
	.space 0x4 - (. - gText_Rom_576941)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:69 gEasyChatWord_Understands (+1 aliases)
	.globl gText_Rom_576945
gText_Rom_576945: @ 0x08576945
	.string "わかり$"
	.if (. - gText_Rom_576945) > 0x4
	.error "gText_Rom_576945 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576945) < 0x4
	.space 0x4 - (. - gText_Rom_576945)
	.endif
	.incbin "baserom.gba", 0x576949, 0x33f

	@ src/data/easy_chat/easy_chat_group_conditions.h:4 easy_chat_group_conditions_line_4
	.globl gText_Rom_576C88
gText_Rom_576C88: @ 0x08576C88
	.string "あつい$"
	.if (. - gText_Rom_576C88) > 0x4
	.error "gText_Rom_576C88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576C88) < 0x4
	.space 0x4 - (. - gText_Rom_576C88)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:10 easy_chat_group_conditions_line_10
	.globl gText_Rom_576C8C
gText_Rom_576C8C: @ 0x08576C8C
	.string "あった$"
	.if (. - gText_Rom_576C8C) > 0x4
	.error "gText_Rom_576C8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576C8C) < 0x4
	.space 0x4 - (. - gText_Rom_576C8C)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:16 easy_chat_group_conditions_line_16
	.globl gText_Rom_576C90
gText_Rom_576C90: @ 0x08576C90
	.string "あまり$"
	.if (. - gText_Rom_576C90) > 0x4
	.error "gText_Rom_576C90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576C90) < 0x4
	.space 0x4 - (. - gText_Rom_576C90)
	.endif
	.incbin "baserom.gba", 0x576c94, 0xc

	@ src/data/easy_chat/easy_chat_group_conditions.h:46 easy_chat_group_conditions_line_46
	.globl gText_Rom_576CA0
gText_Rom_576CA0: @ 0x08576CA0
	.string "いきおい$"
	.if (. - gText_Rom_576CA0) > 0x5
	.error "gText_Rom_576CA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CA0) < 0x5
	.space 0x5 - (. - gText_Rom_576CA0)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:52 easy_chat_group_conditions_line_52
	.globl gText_Rom_576CA5
gText_Rom_576CA5: @ 0x08576CA5
	.string "いける$"
	.if (. - gText_Rom_576CA5) > 0x4
	.error "gText_Rom_576CA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CA5) < 0x4
	.space 0x4 - (. - gText_Rom_576CA5)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:58 easy_chat_group_conditions_line_58
	.globl gText_Rom_576CA9
gText_Rom_576CA9: @ 0x08576CA9
	.string "いじょう$"
	.if (. - gText_Rom_576CA9) > 0x5
	.error "gText_Rom_576CA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CA9) < 0x5
	.space 0x5 - (. - gText_Rom_576CA9)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:64 easy_chat_group_conditions_line_64
	.globl gText_Rom_576CAE
gText_Rom_576CAE: @ 0x08576CAE
	.string "いそがしい$"
	.if (. - gText_Rom_576CAE) > 0x6
	.error "gText_Rom_576CAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CAE) < 0x6
	.space 0x6 - (. - gText_Rom_576CAE)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:70 easy_chat_group_conditions_line_70
	.globl gText_Rom_576CB4
gText_Rom_576CB4: @ 0x08576CB4
	.string "いっしょに$"
	.if (. - gText_Rom_576CB4) > 0x6
	.error "gText_Rom_576CB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CB4) < 0x6
	.space 0x6 - (. - gText_Rom_576CB4)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:76 easy_chat_group_conditions_line_76
	.globl gText_Rom_576CBA
gText_Rom_576CBA: @ 0x08576CBA
	.string "いっぱい$"
	.if (. - gText_Rom_576CBA) > 0x5
	.error "gText_Rom_576CBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CBA) < 0x5
	.space 0x5 - (. - gText_Rom_576CBA)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:82 easy_chat_group_conditions_line_82
	.globl gText_Rom_576CBF
gText_Rom_576CBF: @ 0x08576CBF
	.string "いない$"
	.if (. - gText_Rom_576CBF) > 0x4
	.error "gText_Rom_576CBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CBF) < 0x4
	.space 0x4 - (. - gText_Rom_576CBF)
	.endif
	.incbin "baserom.gba", 0x576cc3, 0x6

	@ src/data/easy_chat/easy_chat_group_conditions.h:100 easy_chat_group_conditions_line_100
	.globl gText_Rom_576CC9
gText_Rom_576CC9: @ 0x08576CC9
	.string "うまい$"
	.if (. - gText_Rom_576CC9) > 0x4
	.error "gText_Rom_576CC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CC9) < 0x4
	.space 0x4 - (. - gText_Rom_576CC9)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:106 easy_chat_group_conditions_line_106
	.globl gText_Rom_576CCD
gText_Rom_576CCD: @ 0x08576CCD
	.string "うまく$"
	.if (. - gText_Rom_576CCD) > 0x4
	.error "gText_Rom_576CCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CCD) < 0x4
	.space 0x4 - (. - gText_Rom_576CCD)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:112 easy_chat_group_conditions_line_112
	.globl gText_Rom_576CD1
gText_Rom_576CD1: @ 0x08576CD1
	.string "うるさい$"
	.if (. - gText_Rom_576CD1) > 0x5
	.error "gText_Rom_576CD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CD1) < 0x5
	.space 0x5 - (. - gText_Rom_576CD1)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:118 easy_chat_group_conditions_line_118
	.globl gText_Rom_576CD6
gText_Rom_576CD6: @ 0x08576CD6
	.string "おおきい$"
	.if (. - gText_Rom_576CD6) > 0x5
	.error "gText_Rom_576CD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CD6) < 0x5
	.space 0x5 - (. - gText_Rom_576CD6)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:124 easy_chat_group_conditions_line_124
	.globl gText_Rom_576CDB
gText_Rom_576CDB: @ 0x08576CDB
	.string "おくれ$"
	.if (. - gText_Rom_576CDB) > 0x4
	.error "gText_Rom_576CDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CDB) < 0x4
	.space 0x4 - (. - gText_Rom_576CDB)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:130 easy_chat_group_conditions_line_130
	.globl gText_Rom_576CDF
gText_Rom_576CDF: @ 0x08576CDF
	.string "おしい$"
	.if (. - gText_Rom_576CDF) > 0x4
	.error "gText_Rom_576CDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CDF) < 0x4
	.space 0x4 - (. - gText_Rom_576CDF)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:136 easy_chat_group_conditions_line_136 (+1 aliases)
	.globl gText_Rom_576CE3
gText_Rom_576CE3: @ 0x08576CE3
	.string "おとなしい$"
	.if (. - gText_Rom_576CE3) > 0x6
	.error "gText_Rom_576CE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CE3) < 0x6
	.space 0x6 - (. - gText_Rom_576CE3)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:142 easy_chat_group_conditions_line_142
	.globl gText_Rom_576CE9
gText_Rom_576CE9: @ 0x08576CE9
	.string "おもしろい$"
	.if (. - gText_Rom_576CE9) > 0x6
	.error "gText_Rom_576CE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CE9) < 0x6
	.space 0x6 - (. - gText_Rom_576CE9)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:148 easy_chat_group_conditions_line_148
	.globl gText_Rom_576CEF
gText_Rom_576CEF: @ 0x08576CEF
	.string "おもしろく$"
	.if (. - gText_Rom_576CEF) > 0x6
	.error "gText_Rom_576CEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CEF) < 0x6
	.space 0x6 - (. - gText_Rom_576CEF)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:154 easy_chat_group_conditions_line_154
	.globl gText_Rom_576CF5
gText_Rom_576CF5: @ 0x08576CF5
	.string "かんぺき$"
	.if (. - gText_Rom_576CF5) > 0x5
	.error "gText_Rom_576CF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CF5) < 0x5
	.space 0x5 - (. - gText_Rom_576CF5)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:160 easy_chat_group_conditions_line_160
	.globl gText_Rom_576CFA
gText_Rom_576CFA: @ 0x08576CFA
	.string "けっこう$"
	.if (. - gText_Rom_576CFA) > 0x5
	.error "gText_Rom_576CFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CFA) < 0x5
	.space 0x5 - (. - gText_Rom_576CFA)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:166 easy_chat_group_conditions_line_166
	.globl gText_Rom_576CFF
gText_Rom_576CFF: @ 0x08576CFF
	.string "げんき$"
	.if (. - gText_Rom_576CFF) > 0x4
	.error "gText_Rom_576CFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CFF) < 0x4
	.space 0x4 - (. - gText_Rom_576CFF)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:172 easy_chat_group_conditions_line_172 (+1 aliases)
	.globl gText_Rom_576D03
gText_Rom_576D03: @ 0x08576D03
	.string "さいこう$"
	.if (. - gText_Rom_576D03) > 0x5
	.error "gText_Rom_576D03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D03) < 0x5
	.space 0x5 - (. - gText_Rom_576D03)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:178 easy_chat_group_conditions_line_178
	.globl gText_Rom_576D08
gText_Rom_576D08: @ 0x08576D08
	.string "さかさま$"
	.if (. - gText_Rom_576D08) > 0x5
	.error "gText_Rom_576D08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D08) < 0x5
	.space 0x5 - (. - gText_Rom_576D08)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:184 easy_chat_group_conditions_line_184
	.globl gText_Rom_576D0D
gText_Rom_576D0D: @ 0x08576D0D
	.string "さむい$"
	.if (. - gText_Rom_576D0D) > 0x4
	.error "gText_Rom_576D0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D0D) < 0x4
	.space 0x4 - (. - gText_Rom_576D0D)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:190 easy_chat_group_conditions_line_190
	.globl gText_Rom_576D11
gText_Rom_576D11: @ 0x08576D11
	.string "さわやか$"
	.if (. - gText_Rom_576D11) > 0x5
	.error "gText_Rom_576D11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D11) < 0x5
	.space 0x5 - (. - gText_Rom_576D11)
	.endif

