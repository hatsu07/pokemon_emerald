	@ src/data/easy_chat/easy_chat_group_battle.h:4 easy_chat_group_battle_line_4
	.globl gText_Rom_575050
gText_Rom_575050: @ 0x08575050
	.string "あいしょう{EOS}"
	.if (. - gText_Rom_575050) > 0x6
	.error "gText_Rom_575050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575050) < 0x6
	.space 0x6 - (. - gText_Rom_575050)
	.endif
	@ Decoded text from ROM range: offset=0x575056, size=0x3
	.string "いけ{EOS}"

	@ src/data/easy_chat/easy_chat_group_battle.h:16 easy_chat_group_battle_line_16
	.globl gText_Rom_575059
gText_Rom_575059: @ 0x08575059
	.string "いちばん{EOS}"
	.if (. - gText_Rom_575059) > 0x5
	.error "gText_Rom_575059 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575059) < 0x5
	.space 0x5 - (. - gText_Rom_575059)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:22 easy_chat_group_battle_line_22
	.globl gText_Rom_57505E
gText_Rom_57505E: @ 0x0857505E
	.string "かくご{EOS}"
	.if (. - gText_Rom_57505E) > 0x4
	.error "gText_Rom_57505E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57505E) < 0x4
	.space 0x4 - (. - gText_Rom_57505E)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:28 easy_chat_group_battle_line_28
	.globl gText_Rom_575062
gText_Rom_575062: @ 0x08575062
	.string "かたせて{EOS}"
	.if (. - gText_Rom_575062) > 0x5
	.error "gText_Rom_575062 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575062) < 0x5
	.space 0x5 - (. - gText_Rom_575062)
	.endif
	@ Decoded text from ROM range: offset=0x575067, size=0x6
	.string "かち{EOS}"
	.string "かつ{EOS}"

	@ src/data/easy_chat/easy_chat_group_battle.h:46 easy_chat_group_battle_line_46
	.globl gText_Rom_57506D
gText_Rom_57506D: @ 0x0857506D
	.string "かった{EOS}"
	.if (. - gText_Rom_57506D) > 0x4
	.error "gText_Rom_57506D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57506D) < 0x4
	.space 0x4 - (. - gText_Rom_57506D)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:52 easy_chat_group_battle_line_52
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_575071
gText_Rom_575071: @ 0x08575071
	.string "かったら{EOS}"
	.if (. - gText_Rom_575071) != 0x5
	.error "gText_Rom_575071 must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:58 easy_chat_group_battle_line_58
	.globl gText_Rom_575076
gText_Rom_575076: @ 0x08575076
	.string "かって{EOS}"
	.if (. - gText_Rom_575076) > 0x4
	.error "gText_Rom_575076 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575076) < 0x4
	.space 0x4 - (. - gText_Rom_575076)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:64 easy_chat_group_battle_line_64
	.globl gText_Rom_57507A
gText_Rom_57507A: @ 0x0857507A
	.string "かてない{EOS}"
	.if (. - gText_Rom_57507A) > 0x5
	.error "gText_Rom_57507A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57507A) < 0x5
	.space 0x5 - (. - gText_Rom_57507A)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:70 easy_chat_group_battle_line_70
	.globl gText_Rom_57507F
gText_Rom_57507F: @ 0x0857507F
	.string "かてる{EOS}"
	.if (. - gText_Rom_57507F) > 0x4
	.error "gText_Rom_57507F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57507F) < 0x4
	.space 0x4 - (. - gText_Rom_57507F)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:76 easy_chat_group_battle_line_76
	.globl gText_Rom_575083
gText_Rom_575083: @ 0x08575083
	.string "かなわない{EOS}"
	.if (. - gText_Rom_575083) > 0x6
	.error "gText_Rom_575083 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575083) < 0x6
	.space 0x6 - (. - gText_Rom_575083)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:82 easy_chat_group_battle_line_82
	.globl gText_Rom_575089
gText_Rom_575089: @ 0x08575089
	.string "きあい{EOS}"
	.if (. - gText_Rom_575089) > 0x4
	.error "gText_Rom_575089 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575089) < 0x4
	.space 0x4 - (. - gText_Rom_575089)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:88 easy_chat_group_battle_line_88
	.globl gText_Rom_57508D
gText_Rom_57508D: @ 0x0857508D
	.string "きめた{EOS}"
	.if (. - gText_Rom_57508D) > 0x4
	.error "gText_Rom_57508D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57508D) < 0x4
	.space 0x4 - (. - gText_Rom_57508D)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:94 easy_chat_group_battle_line_94 (+1 aliases)
	.globl gText_Rom_575091
gText_Rom_575091: @ 0x08575091
	.string "きりふだ{EOS}"
	.if (. - gText_Rom_575091) > 0x5
	.error "gText_Rom_575091 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575091) < 0x5
	.space 0x5 - (. - gText_Rom_575091)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:100 easy_chat_group_battle_line_100
	.globl gText_Rom_575096
gText_Rom_575096: @ 0x08575096
	.string "くらえ{EOS}"
	.if (. - gText_Rom_575096) > 0x4
	.error "gText_Rom_575096 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575096) < 0x4
	.space 0x4 - (. - gText_Rom_575096)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:106 easy_chat_group_battle_line_106
	.globl gText_Rom_57509A
gText_Rom_57509A: @ 0x0857509A
	.string "こい!{EOS}"
	.if (. - gText_Rom_57509A) > 0x4
	.error "gText_Rom_57509A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57509A) < 0x4
	.space 0x4 - (. - gText_Rom_57509A)
	.endif
	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_57509E
gText_Rom_57509E: @ 0x0857509E
	.string "こうげき{EOS}"
	.if (. - gText_Rom_57509E) > 0x5
	.error "gText_Rom_57509E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57509E) < 0x5
	.space 0x5 - (. - gText_Rom_57509E)
	.endif
	@ src/data/easy_chat/easy_chat_group_battle.h:118 easy_chat_group_battle_line_118
	.globl gText_Rom_5750A3
gText_Rom_5750A3: @ 0x085750A3
	.string "こうさん{EOS}"
	.if (. - gText_Rom_5750A3) > 0x5
	.error "gText_Rom_5750A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750A3) < 0x5
	.space 0x5 - (. - gText_Rom_5750A3)
	.endif
	@ src/data/abilities.h:476 abilities_line_476 (+2 aliases)
	.globl gText_Rom_5750A8
gText_Rom_5750A8: @ 0x085750A8
	.string "こんじょう{EOS}"
	.if (. - gText_Rom_5750A8) > 0x6
	.error "gText_Rom_5750A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750A8) < 0x6
	.space 0x6 - (. - gText_Rom_5750A8)
	.endif
	@ src/data/easy_chat/easy_chat_group_battle.h:130 easy_chat_group_battle_line_130
	.globl gText_Rom_5750AE
gText_Rom_5750AE: @ 0x085750AE
	.string "さいのう{EOS}"
	.if (. - gText_Rom_5750AE) > 0x5
	.error "gText_Rom_5750AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750AE) < 0x5
	.space 0x5 - (. - gText_Rom_5750AE)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:136 easy_chat_group_battle_line_136 (+1 aliases)
	.globl gText_Rom_5750B3
gText_Rom_5750B3: @ 0x085750B3
	.string "さくせん{EOS}"
	.if (. - gText_Rom_5750B3) > 0x5
	.error "gText_Rom_5750B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750B3) < 0x5
	.space 0x5 - (. - gText_Rom_5750B3)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:142 easy_chat_group_battle_line_142
	.globl gText_Rom_5750B8
gText_Rom_5750B8: @ 0x085750B8
	.string "さばき{EOS}"
	.if (. - gText_Rom_5750B8) > 0x4
	.error "gText_Rom_5750B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750B8) < 0x4
	.space 0x4 - (. - gText_Rom_5750B8)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:148 easy_chat_group_battle_line_148
	.globl gText_Rom_5750BC
gText_Rom_5750BC: @ 0x085750BC
	.string "しょうぶ{EOS}"
	.if (. - gText_Rom_5750BC) > 0x5
	.error "gText_Rom_5750BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750BC) < 0x5
	.space 0x5 - (. - gText_Rom_5750BC)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:154 easy_chat_group_battle_line_154 (+1 aliases)
	.globl gText_Rom_5750C1
gText_Rom_5750C1: @ 0x085750C1
	.string "しょうり{EOS}"
	.if (. - gText_Rom_5750C1) > 0x5
	.error "gText_Rom_5750C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750C1) < 0x5
	.space 0x5 - (. - gText_Rom_5750C1)
	.endif
	@ Decoded text from ROM range: offset=0x5750C6, size=0x3
	.string "せめ{EOS}"

	@ src/data/easy_chat/easy_chat_group_battle.h:166 easy_chat_group_battle_line_166
	.globl gText_Rom_5750C9
gText_Rom_5750C9: @ 0x085750C9
	.string "センス{EOS}"
	.if (. - gText_Rom_5750C9) > 0x4
	.error "gText_Rom_5750C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750C9) < 0x4
	.space 0x4 - (. - gText_Rom_5750C9)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:172 easy_chat_group_battle_line_172 (+1 aliases)
	.globl gText_Rom_5750CD
gText_Rom_5750CD: @ 0x085750CD
	.string "たいせん{EOS}"
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
	.string "たたかい{EOS}"
	.if (. - gText_Rom_5750D2) != 0x5
	.error "gText_Rom_5750D2 must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:184 easy_chat_group_battle_line_184
	.globl gText_Rom_5750D7
gText_Rom_5750D7: @ 0x085750D7
	.string "ちから{EOS}"
	.if (. - gText_Rom_5750D7) > 0x4
	.error "gText_Rom_5750D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750D7) < 0x4
	.space 0x4 - (. - gText_Rom_5750D7)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:190 easy_chat_group_battle_line_190
	.globl gText_Rom_5750DB
gText_Rom_5750DB: @ 0x085750DB
	.string "チャレンジ{EOS}"
	.if (. - gText_Rom_5750DB) > 0x6
	.error "gText_Rom_5750DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750DB) < 0x6
	.space 0x6 - (. - gText_Rom_5750DB)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:196 easy_chat_group_battle_line_196
	.globl gText_Rom_5750E1
gText_Rom_5750E1: @ 0x085750E1
	.string "つよい{EOS}"
	.if (. - gText_Rom_5750E1) > 0x4
	.error "gText_Rom_5750E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750E1) < 0x4
	.space 0x4 - (. - gText_Rom_5750E1)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:202 easy_chat_group_battle_line_202
	.globl gText_Rom_5750E5
gText_Rom_5750E5: @ 0x085750E5
	.string "つよすぎ{EOS}"
	.if (. - gText_Rom_5750E5) > 0x5
	.error "gText_Rom_5750E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750E5) < 0x5
	.space 0x5 - (. - gText_Rom_5750E5)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:208 easy_chat_group_battle_line_208 (+1 aliases)
	.globl gText_Rom_5750EA
gText_Rom_5750EA: @ 0x085750EA
	.string "てかげん{EOS}"
	.if (. - gText_Rom_5750EA) > 0x5
	.error "gText_Rom_5750EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750EA) < 0x5
	.space 0x5 - (. - gText_Rom_5750EA)
	.endif
	@ Decoded text from ROM range: offset=0x5750EF, size=0x3
	.string "てき{EOS}"

	@ src/data/easy_chat/easy_chat_group_battle.h:220 easy_chat_group_battle_line_220
	.globl gText_Rom_5750F2
gText_Rom_5750F2: @ 0x085750F2
	.string "てんさい{EOS}"
	.if (. - gText_Rom_5750F2) > 0x5
	.error "gText_Rom_5750F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750F2) < 0x5
	.space 0x5 - (. - gText_Rom_5750F2)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:226 easy_chat_group_battle_line_226 (+1 aliases)
	.globl gText_Rom_5750F7
gText_Rom_5750F7: @ 0x085750F7
	.string "でんせつ{EOS}"
	.if (. - gText_Rom_5750F7) > 0x5
	.error "gText_Rom_5750F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750F7) < 0x5
	.space 0x5 - (. - gText_Rom_5750F7)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:232 easy_chat_group_battle_line_232
	.globl gText_Rom_5750FC
gText_Rom_5750FC: @ 0x085750FC
	.string "にげ{EOS}"
	.if (. - gText_Rom_5750FC) > 0x3
	.error "gText_Rom_5750FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750FC) < 0x3
	.space 0x3 - (. - gText_Rom_5750FC)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:238 easy_chat_group_battle_line_238
	.globl gText_Rom_5750FF
gText_Rom_5750FF: @ 0x085750FF
	.string "ねらう{EOS}"
	.if (. - gText_Rom_5750FF) > 0x4
	.error "gText_Rom_5750FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750FF) < 0x4
	.space 0x4 - (. - gText_Rom_5750FF)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:244 easy_chat_group_battle_line_244 (+3 aliases)
	.globl gText_Rom_575103
gText_Rom_575103: @ 0x08575103
	.string "バトル{EOS}"
	.if (. - gText_Rom_575103) > 0x4
	.error "gText_Rom_575103 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575103) < 0x4
	.space 0x4 - (. - gText_Rom_575103)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:250 easy_chat_group_battle_line_250
	.globl gText_Rom_575107
gText_Rom_575107: @ 0x08575107
	.string "ファイト{EOS}"
	.if (. - gText_Rom_575107) > 0x5
	.error "gText_Rom_575107 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575107) < 0x5
	.space 0x5 - (. - gText_Rom_575107)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:256 easy_chat_group_battle_line_256
	.globl gText_Rom_57510C
gText_Rom_57510C: @ 0x0857510C
	.string "ふっかつ{EOS}"
	.if (. - gText_Rom_57510C) > 0x5
	.error "gText_Rom_57510C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57510C) < 0x5
	.space 0x5 - (. - gText_Rom_57510C)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:262 easy_chat_group_battle_line_262
	.globl gText_Rom_575111
gText_Rom_575111: @ 0x08575111
	.string "ポイント{EOS}"
	.if (. - gText_Rom_575111) > 0x5
	.error "gText_Rom_575111 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575111) < 0x5
	.space 0x5 - (. - gText_Rom_575111)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:268 easy_chat_group_battle_line_268
	.globl gText_Rom_575116
gText_Rom_575116: @ 0x08575116
	.string "ほんき{EOS}"
	.if (. - gText_Rom_575116) > 0x4
	.error "gText_Rom_575116 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575116) < 0x4
	.space 0x4 - (. - gText_Rom_575116)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:274 easy_chat_group_battle_line_274
	.globl gText_Rom_57511A
gText_Rom_57511A: @ 0x0857511A
	.string "まいった{EOS}"
	.if (. - gText_Rom_57511A) > 0x5
	.error "gText_Rom_57511A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57511A) < 0x5
	.space 0x5 - (. - gText_Rom_57511A)
	.endif
	@ Decoded text from ROM range: offset=0x57511F, size=0x3
	.string "まけ{EOS}"

	@ src/data/easy_chat/easy_chat_group_battle.h:286 easy_chat_group_battle_line_286
	.globl gText_Rom_575122
gText_Rom_575122: @ 0x08575122
	.string "まけたら{EOS}"
	.if (. - gText_Rom_575122) > 0x5
	.error "gText_Rom_575122 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575122) < 0x5
	.space 0x5 - (. - gText_Rom_575122)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:292 easy_chat_group_battle_line_292
	.globl gText_Rom_575127
gText_Rom_575127: @ 0x08575127
	.string "まけて{EOS}"
	.if (. - gText_Rom_575127) > 0x4
	.error "gText_Rom_575127 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575127) < 0x4
	.space 0x4 - (. - gText_Rom_575127)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:298 easy_chat_group_battle_line_298
	.globl gText_Rom_57512B
gText_Rom_57512B: @ 0x0857512B
	.string "まける{EOS}"
	.if (. - gText_Rom_57512B) > 0x4
	.error "gText_Rom_57512B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57512B) < 0x4
	.space 0x4 - (. - gText_Rom_57512B)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:304 easy_chat_group_battle_line_304
	.globl gText_Rom_57512F
gText_Rom_57512F: @ 0x0857512F
	.string "まもり{EOS}"
	.if (. - gText_Rom_57512F) > 0x4
	.error "gText_Rom_57512F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57512F) < 0x4
	.space 0x4 - (. - gText_Rom_57512F)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:310 easy_chat_group_battle_line_310
	.globl gText_Rom_575133
gText_Rom_575133: @ 0x08575133
	.string "みかた{EOS}"
	.if (. - gText_Rom_575133) > 0x4
	.error "gText_Rom_575133 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575133) < 0x4
	.space 0x4 - (. - gText_Rom_575133)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:316 easy_chat_group_battle_line_316
	.globl gText_Rom_575137
gText_Rom_575137: @ 0x08575137
	.string "みとめない{EOS}"
	.if (. - gText_Rom_575137) > 0x6
	.error "gText_Rom_575137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575137) < 0x6
	.space 0x6 - (. - gText_Rom_575137)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:322 easy_chat_group_battle_line_322
	.globl gText_Rom_57513D
gText_Rom_57513D: @ 0x0857513D
	.string "みとめる{EOS}"
	.if (. - gText_Rom_57513D) > 0x5
	.error "gText_Rom_57513D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57513D) < 0x5
	.space 0x5 - (. - gText_Rom_57513D)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:328 easy_chat_group_battle_line_328
	.globl gText_Rom_575142
gText_Rom_575142: @ 0x08575142
	.string "むてき{EOS}"
	.if (. - gText_Rom_575142) > 0x4
	.error "gText_Rom_575142 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575142) < 0x4
	.space 0x4 - (. - gText_Rom_575142)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:334 easy_chat_group_battle_line_334
	.globl gText_Rom_575146
gText_Rom_575146: @ 0x08575146
	.string "もらった{EOS}"
	.if (. - gText_Rom_575146) > 0x5
	.error "gText_Rom_575146 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575146) < 0x5
	.space 0x5 - (. - gText_Rom_575146)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:340 easy_chat_group_battle_line_340
	.globl gText_Rom_57514B
gText_Rom_57514B: @ 0x0857514B
	.string "よゆう{EOS}"
	.if (. - gText_Rom_57514B) > 0x4
	.error "gText_Rom_57514B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57514B) < 0x4
	.space 0x4 - (. - gText_Rom_57514B)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:346 easy_chat_group_battle_line_346
	.globl gText_Rom_57514F
gText_Rom_57514F: @ 0x0857514F
	.string "よわい{EOS}"
	.if (. - gText_Rom_57514F) > 0x4
	.error "gText_Rom_57514F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57514F) < 0x4
	.space 0x4 - (. - gText_Rom_57514F)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:352 easy_chat_group_battle_line_352
	.globl gText_Rom_575153
gText_Rom_575153: @ 0x08575153
	.string "よわすぎ{EOS}"
	.if (. - gText_Rom_575153) > 0x5
	.error "gText_Rom_575153 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575153) < 0x5
	.space 0x5 - (. - gText_Rom_575153)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:358 easy_chat_group_battle_line_358
	.globl gText_Rom_575158
gText_Rom_575158: @ 0x08575158
	.string "らくしょう{EOS}"
	.if (. - gText_Rom_575158) > 0x6
	.error "gText_Rom_575158 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575158) < 0x6
	.space 0x6 - (. - gText_Rom_575158)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:364 easy_chat_group_battle_line_364
	.globl gText_Rom_57515E
gText_Rom_57515E: @ 0x0857515E
	.string "リーダー{EOS}"
	.if (. - gText_Rom_57515E) > 0x5
	.error "gText_Rom_57515E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57515E) < 0x5
	.space 0x5 - (. - gText_Rom_57515E)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:370 easy_chat_group_battle_line_370
	.globl gText_Rom_575163
gText_Rom_575163: @ 0x08575163
	.string "ルール{EOS}"
	.if (. - gText_Rom_575163) > 0x4
	.error "gText_Rom_575163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575163) < 0x4
	.space 0x4 - (. - gText_Rom_575163)
	.endif
	@ analyzed canonical ROM range 0x08575167-0x0857545F
	.globl gText_Rom_575167
gText_Rom_575167: @ 0x08575167
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x5 bytes
	.byte 0x2C, 0x3C, 0xFF, 0x00, 0x00
	.globl gEasyChatGroup_Battle
gEasyChatGroup_Battle: @ 0x0857516C
	easy_chat_word_info gText_Rom_575050, 0, 1 @ word 0
	easy_chat_word_info 0x08575056, 1, 1 @ word 1
	easy_chat_word_info gText_Rom_575059, 2, 1 @ word 2
	easy_chat_word_info gText_Rom_57505E, 3, 1 @ word 3
	easy_chat_word_info gText_Rom_575062, 4, 1 @ word 4
	easy_chat_word_info 0x08575067, 5, 1 @ word 5
	easy_chat_word_info 0x0857506A, 6, 1 @ word 6
	easy_chat_word_info gText_Rom_57506D, 7, 1 @ word 7
	easy_chat_word_info gText_Rom_575071, 8, 1 @ word 8
	easy_chat_word_info gText_Rom_575076, 9, 1 @ word 9
	easy_chat_word_info gText_Rom_57507A, 10, 1 @ word 10
	easy_chat_word_info gText_Rom_57507F, 11, 1 @ word 11
	easy_chat_word_info gText_Rom_575083, 12, 1 @ word 12
	easy_chat_word_info gText_Rom_575089, 13, 1 @ word 13
	easy_chat_word_info gText_Rom_57508D, 14, 1 @ word 14
	easy_chat_word_info gText_Rom_575091, 15, 1 @ word 15
	easy_chat_word_info gText_Rom_575096, 16, 1 @ word 16
	easy_chat_word_info gText_Rom_57509A, 17, 1 @ word 17
	easy_chat_word_info gText_Rom_57509E, 18, 1 @ word 18
	easy_chat_word_info gText_Rom_5750A3, 19, 1 @ word 19
	easy_chat_word_info gText_Rom_5750A8, 20, 1 @ word 20
	easy_chat_word_info gText_Rom_5750AE, 21, 1 @ word 21
	easy_chat_word_info gText_Rom_5750B3, 22, 1 @ word 22
	easy_chat_word_info gText_Rom_5750B8, 23, 1 @ word 23
	easy_chat_word_info gText_Rom_5750BC, 24, 1 @ word 24
	easy_chat_word_info gText_Rom_5750C1, 25, 1 @ word 25
	easy_chat_word_info 0x085750C6, 26, 1 @ word 26
	easy_chat_word_info gText_Rom_5750C9, 27, 1 @ word 27
	easy_chat_word_info gText_Rom_5750CD, 28, 1 @ word 28
	easy_chat_word_info gText_Rom_5750D2, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_5750D7, 30, 1 @ word 30
	easy_chat_word_info gText_Rom_5750DB, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_5750E1, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_5750E5, 33, 1 @ word 33
	easy_chat_word_info gText_Rom_5750EA, 34, 1 @ word 34
	easy_chat_word_info 0x085750EF, 35, 1 @ word 35
	easy_chat_word_info gText_Rom_5750F2, 36, 1 @ word 36
	easy_chat_word_info gText_Rom_5750F7, 37, 1 @ word 37
	easy_chat_word_info gText_Rom_5750FC, 38, 1 @ word 38
	easy_chat_word_info gText_Rom_5750FF, 39, 1 @ word 39
	easy_chat_word_info gText_Rom_575103, 40, 1 @ word 40
	easy_chat_word_info gText_Rom_575107, 41, 1 @ word 41
	easy_chat_word_info gText_Rom_57510C, 42, 1 @ word 42
	easy_chat_word_info gText_Rom_575111, 43, 1 @ word 43
	easy_chat_word_info gText_Rom_575116, 44, 1 @ word 44
	easy_chat_word_info gText_Rom_57511A, 45, 1 @ word 45
	easy_chat_word_info 0x0857511F, 46, 1 @ word 46
	easy_chat_word_info gText_Rom_575122, 47, 1 @ word 47
	easy_chat_word_info gText_Rom_575127, 48, 1 @ word 48
	easy_chat_word_info gText_Rom_57512B, 49, 1 @ word 49
	easy_chat_word_info gText_Rom_57512F, 50, 1 @ word 50
	easy_chat_word_info gText_Rom_575133, 51, 1 @ word 51
	easy_chat_word_info gText_Rom_575137, 52, 1 @ word 52
	easy_chat_word_info gText_Rom_57513D, 53, 1 @ word 53
	easy_chat_word_info gText_Rom_575142, 54, 1 @ word 54
	easy_chat_word_info gText_Rom_575146, 55, 1 @ word 55
	easy_chat_word_info gText_Rom_57514B, 56, 1 @ word 56
	easy_chat_word_info gText_Rom_57514F, 57, 1 @ word 57
	easy_chat_word_info gText_Rom_575153, 58, 1 @ word 58
	easy_chat_word_info gText_Rom_575158, 59, 1 @ word 59
	easy_chat_word_info gText_Rom_57515E, 60, 1 @ word 60
	easy_chat_word_info gText_Rom_575163, 61, 1 @ word 61
	easy_chat_word_info gText_Rom_575167, 62, 1 @ word 62
