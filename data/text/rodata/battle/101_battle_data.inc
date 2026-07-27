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

	@ src/data/easy_chat/easy_chat_groups.h:134 easy_chat_groups_line_134
	.globl gText_Rom_579EB0
gText_Rom_579EB0: @ 0x08579EB0
	.string "あれこれ$"
	.if (. - gText_Rom_579EB0) > 0x5
	.error "gText_Rom_579EB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EB0) < 0x5
	.space 0x5 - (. - gText_Rom_579EB0)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:141 easy_chat_groups_line_141
	.globl gText_Rom_579EB5
gText_Rom_579EB5: @ 0x08579EB5
	.string "くりかえし$"
	.if (. - gText_Rom_579EB5) > 0x6
	.error "gText_Rom_579EB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EB5) < 0x6
	.space 0x6 - (. - gText_Rom_579EB5)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:2 gEasyChatWord_Events (+3 aliases)
	.globl gText_Rom_579EBB
gText_Rom_579EBB: @ 0x08579EBB
	.string "イベント$"
	.if (. - gText_Rom_579EBB) > 0x5
	.error "gText_Rom_579EBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EBB) < 0x5
	.space 0x5 - (. - gText_Rom_579EBB)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:155 easy_chat_groups_line_155
	.globl gText_Rom_579EC0
gText_Rom_579EC0: @ 0x08579EC0
	.string "わざ1$"
	.if (. - gText_Rom_579EC0) > 0x4
	.error "gText_Rom_579EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EC0) < 0x4
	.space 0x4 - (. - gText_Rom_579EC0)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:162 easy_chat_groups_line_162
	.globl gText_Rom_579EC4
gText_Rom_579EC4: @ 0x08579EC4
	.string "わざ2$"
	.if (. - gText_Rom_579EC4) > 0x4
	.error "gText_Rom_579EC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EC4) < 0x4
	.space 0x4 - (. - gText_Rom_579EC4)
	.endif
	.incbin "baserom.gba", 0x579ec8, 0x3

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:64 easy_chat_group_lifestyle_line_64
	.globl gText_Rom_579ECB
gText_Rom_579ECB: @ 0x08579ECB
	.string "ことば$"
	.if (. - gText_Rom_579ECB) > 0x4
	.error "gText_Rom_579ECB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579ECB) < 0x4
	.space 0x4 - (. - gText_Rom_579ECB)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:176 easy_chat_groups_line_176
	.globl gText_Rom_579ECF
gText_Rom_579ECF: @ 0x08579ECF
	.string "ポケモン2$"
	.if (. - gText_Rom_579ECF) > 0x6
	.error "gText_Rom_579ECF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579ECF) < 0x6
	.space 0x6 - (. - gText_Rom_579ECF)
	.endif
	.incbin "baserom.gba", 0x579ed5, 0x3
	.globl gUnknown_8579ED8
gUnknown_8579ED8: @ 0x08579ED8
	.incbin "baserom.gba", 0x579ed8, 0x58
	.globl gUnknown_8579F30
gUnknown_8579F30: @ 0x08579F30
	.incbin "baserom.gba", 0x579f30, 0x4
	.globl gUnknown_8579F34
gUnknown_8579F34: @ 0x08579F34
	.incbin "baserom.gba", 0x579f34, 0x4
	.globl gUnknown_8579F38
gUnknown_8579F38: @ 0x08579F38
	.incbin "baserom.gba", 0x579f38, 0x20
	.globl gUnknown_8579F58
gUnknown_8579F58: @ 0x08579F58
	.incbin "baserom.gba", 0x579f58, 0x320
	.globl gUnknown_857A278
gUnknown_857A278: @ 0x0857A278
	.incbin "baserom.gba", 0x57a278, 0x20
	.globl gUnknown_857A298
gUnknown_857A298: @ 0x0857A298
	.incbin "baserom.gba", 0x57a298, 0x800

	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_57AA98
gText_Rom_57AA98: @ 0x0857AA98
	.string "けってい$"
	.if (. - gText_Rom_57AA98) > 0x5
	.error "gText_Rom_57AA98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57AA98) < 0x5
	.space 0x5 - (. - gText_Rom_57AA98)
	.endif
	.incbin "baserom.gba", 0x57aa9d, 0x3
	.globl gUnknown_857AAA0
gUnknown_857AAA0: @ 0x0857AAA0
	.incbin "baserom.gba", 0x57aaa0, 0x8
	.globl gUnknown_857AAA8
gUnknown_857AAA8: @ 0x0857AAA8
	.incbin "baserom.gba", 0x57aaa8, 0x58
	.globl gUnknown_857AB00
gUnknown_857AB00: @ 0x0857AB00
	.incbin "baserom.gba", 0x57ab00, 0x38
	.globl gUnknown_857AB38
gUnknown_857AB38: @ 0x0857AB38
	.incbin "baserom.gba", 0x57ab38, 0x8
	.globl gUnknown_857AB40
gUnknown_857AB40: @ 0x0857AB40
	.incbin "baserom.gba", 0x57ab40, 0x88
	.globl gUnknown_857ABC8
gUnknown_857ABC8: @ 0x0857ABC8
	.incbin "baserom.gba", 0x57abc8, 0x40
	.globl gUnknown_857AC08
gUnknown_857AC08: @ 0x0857AC08
	.incbin "baserom.gba", 0x57ac08, 0xc
	.globl gUnknown_857AC14
gUnknown_857AC14: @ 0x0857AC14
	.incbin "baserom.gba", 0x57ac14, 0x20
	.globl gUnknown_857AC34
gUnknown_857AC34: @ 0x0857AC34
	.incbin "baserom.gba", 0x57ac34, 0x20
	.globl gUnknown_857AC54
gUnknown_857AC54: @ 0x0857AC54
	.incbin "baserom.gba", 0x57ac54, 0x18
	.globl gUnknown_857AC6C
gUnknown_857AC6C: @ 0x0857AC6C
	.incbin "baserom.gba", 0x57ac6c, 0x230
	.globl gUnknown_857AE9C
gUnknown_857AE9C: @ 0x0857AE9C
	.incbin "baserom.gba", 0x57ae9c, 0x10
	.globl gUnknown_857AEAC
gUnknown_857AEAC: @ 0x0857AEAC
	.incbin "baserom.gba", 0x57aeac, 0x8
	.globl gUnknown_857AEB4
gUnknown_857AEB4: @ 0x0857AEB4
	.incbin "baserom.gba", 0x57aeb4, 0xc
	.globl gUnknown_857AEC0
gUnknown_857AEC0: @ 0x0857AEC0
	.incbin "baserom.gba", 0x57aec0, 0x18
	.globl gUnknown_857AED8
gUnknown_857AED8: @ 0x0857AED8
	.incbin "baserom.gba", 0x57aed8, 0x4
	.globl gUnknown_857AEDC
gUnknown_857AEDC: @ 0x0857AEDC
	.incbin "baserom.gba", 0x57aedc, 0x8
	.globl gUnknown_857AEE4
gUnknown_857AEE4: @ 0x0857AEE4
	.incbin "baserom.gba", 0x57aee4, 0xfc
	.globl gUnknown_857AFE0
gUnknown_857AFE0: @ 0x0857AFE0
	.incbin "baserom.gba", 0x57afe0, 0x74
	.globl gUnknown_857B054
gUnknown_857B054: @ 0x0857B054
	.incbin "baserom.gba", 0x57b054, 0x60
	.globl gUnknown_857B0B4
gUnknown_857B0B4: @ 0x0857B0B4
	.incbin "baserom.gba", 0x57b0b4, 0x30
	.globl gUnknown_857B0E4
gUnknown_857B0E4: @ 0x0857B0E4
	.incbin "baserom.gba", 0x57b0e4, 0x8
	.globl gUnknown_857B0EC
gUnknown_857B0EC: @ 0x0857B0EC
	.incbin "baserom.gba", 0x57b0ec, 0x8
	.globl gUnknown_857B0F4
gUnknown_857B0F4: @ 0x0857B0F4
	.incbin "baserom.gba", 0x57b0f4, 0x10
	.globl gUnknown_857B104
gUnknown_857B104: @ 0x0857B104
	.incbin "baserom.gba", 0x57b104, 0x8
	.globl gUnknown_857B10C
gUnknown_857B10C: @ 0x0857B10C
	.incbin "baserom.gba", 0x57b10c, 0xd0
	.globl gUnknown_857B1DC
gUnknown_857B1DC: @ 0x0857B1DC
	.incbin "baserom.gba", 0x57b1dc, 0x44
	.globl gUnknown_857B220
gUnknown_857B220: @ 0x0857B220
	.incbin "baserom.gba", 0x57b220, 0xec
	.globl gUnknown_857B30C
gUnknown_857B30C: @ 0x0857B30C
	.incbin "baserom.gba", 0x57b30c, 0x40
	.globl gUnknown_857B34C
gUnknown_857B34C: @ 0x0857B34C
	.incbin "baserom.gba", 0x57b34c, 0xd64
	.globl gUnknown_857C0B0
gUnknown_857C0B0: @ 0x0857C0B0
	.incbin "baserom.gba", 0x57c0b0, 0x34c
	.globl gUnknown_857C3FC
gUnknown_857C3FC: @ 0x0857C3FC
	.incbin "baserom.gba", 0x57c3fc, 0x20
	.globl gUnknown_857C41C
gUnknown_857C41C: @ 0x0857C41C
	.incbin "baserom.gba", 0x57c41c, 0x80
	.globl gUnknown_857C49C
gUnknown_857C49C: @ 0x0857C49C
	.incbin "baserom.gba", 0x57c49c, 0x20
	.globl gUnknown_857C4BC
gUnknown_857C4BC: @ 0x0857C4BC
	.incbin "baserom.gba", 0x57c4bc, 0x80
	.globl gUnknown_857C53C
gUnknown_857C53C: @ 0x0857C53C
	.incbin "baserom.gba", 0x57c53c, 0x1a4

