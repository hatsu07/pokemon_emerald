	@ src/data/easy_chat/easy_chat_group_events.h:1 gEasyChatWord_Appeal (+3 aliases)
	.globl gEasyChatWord_Appeal
gEasyChatWord_Appeal: @ 0x08578420
	.string "アピール{EOS}"
	.if (. - gEasyChatWord_Appeal) > 0x5
	.error "gEasyChatWord_Appeal may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Appeal) < 0x5
	.space 0x5 - (. - gEasyChatWord_Appeal)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:2 gEasyChatWord_Events (+3 aliases)
	.globl gEasyChatWord_Events
gEasyChatWord_Events: @ 0x08578425
	.string "イベント{EOS}"
	.if (. - gEasyChatWord_Events) > 0x5
	.error "gEasyChatWord_Events may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Events) < 0x5
	.space 0x5 - (. - gEasyChatWord_Events)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:3 gEasyChatWord_StayAtHome (+1 aliases)
	.globl gEasyChatWord_StayAtHome
gEasyChatWord_StayAtHome: @ 0x0857842A
	.string "おるすばん{EOS}"
	.if (. - gEasyChatWord_StayAtHome) > 0x6
	.error "gEasyChatWord_StayAtHome may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_StayAtHome) < 0x6
	.space 0x6 - (. - gEasyChatWord_StayAtHome)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:4 gEasyChatWord_Berry (+4 aliases)
	.globl gEasyChatWord_Berry
gEasyChatWord_Berry: @ 0x08578430
	.string "きのみ{EOS}"
	.if (. - gEasyChatWord_Berry) > 0x4
	.error "gEasyChatWord_Berry may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Berry) < 0x4
	.space 0x4 - (. - gEasyChatWord_Berry)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:5 gEasyChatWord_Contest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Contest
gEasyChatWord_Contest: @ 0x08578434
	.string "コンテスト{EOS}"
	.if (. - gEasyChatWord_Contest) != 0x6
	.error "gEasyChatWord_Contest must retain its original byte length"
	.endif
	.globl gText_Rom_578436
	.set gText_Rom_578436, gEasyChatWord_Contest + 0x2

	@ src/data/easy_chat/easy_chat_group_events.h:6 gEasyChatWord_Mc (+1 aliases)
	.globl gEasyChatWord_Mc
gEasyChatWord_Mc: @ 0x0857843A
	.string "しかいしゃ{EOS}"
	.if (. - gEasyChatWord_Mc) > 0x6
	.error "gEasyChatWord_Mc may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Mc) < 0x6
	.space 0x6 - (. - gEasyChatWord_Mc)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:7 gEasyChatWord_Judge (+1 aliases)
	.globl gEasyChatWord_Judge
gEasyChatWord_Judge: @ 0x08578440
	.string "しんさいん{EOS}"
	.if (. - gEasyChatWord_Judge) > 0x6
	.error "gEasyChatWord_Judge may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Judge) < 0x6
	.space 0x6 - (. - gEasyChatWord_Judge)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:8 gEasyChatWord_Super (+3 aliases)
	.globl gEasyChatWord_Super
gEasyChatWord_Super: @ 0x08578446
	.string "スーパー{EOS}"
	.if (. - gEasyChatWord_Super) > 0x5
	.error "gEasyChatWord_Super may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Super) < 0x5
	.space 0x5 - (. - gEasyChatWord_Super)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:9 gEasyChatWord_Stage (+1 aliases)
	.globl gEasyChatWord_Stage
gEasyChatWord_Stage: @ 0x0857844B
	.string "ステージ{EOS}"
	.if (. - gEasyChatWord_Stage) > 0x5
	.error "gEasyChatWord_Stage may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Stage) < 0x5
	.space 0x5 - (. - gEasyChatWord_Stage)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:10 gEasyChatWord_HallOfFame (+2 aliases)
	.globl gEasyChatWord_HallOfFame
gEasyChatWord_HallOfFame: @ 0x08578450
	.string "でんどういり{EOS}"
	.if (. - gEasyChatWord_HallOfFame) > 0x7
	.error "gEasyChatWord_HallOfFame may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_HallOfFame) < 0x7
	.space 0x7 - (. - gEasyChatWord_HallOfFame)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gEasyChatWord_Evolution
gEasyChatWord_Evolution: @ 0x08578457
	.string "ノーマル{EOS}"
	.if (. - gEasyChatWord_Evolution) > 0x5
	.error "gEasyChatWord_Evolution may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Evolution) < 0x5
	.space 0x5 - (. - gEasyChatWord_Evolution)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:12 gEasyChatWord_Hyper (+3 aliases)
	.globl gEasyChatWord_Hyper
gEasyChatWord_Hyper: @ 0x0857845C
	.string "ハイパー{EOS}"
	.if (. - gEasyChatWord_Hyper) > 0x5
	.error "gEasyChatWord_Hyper may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Hyper) < 0x5
	.space 0x5 - (. - gEasyChatWord_Hyper)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:13 gEasyChatWord_BattleTower (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_BattleTower
gEasyChatWord_BattleTower: @ 0x08578461
	.string "バトルタワー{EOS}"
	.if (. - gEasyChatWord_BattleTower) != 0x7
	.error "gEasyChatWord_BattleTower must retain its original byte length"
	.endif
	.globl gText_Rom_578464
	.set gText_Rom_578464, gEasyChatWord_BattleTower + 0x3

	@ src/data/easy_chat/easy_chat_group_events.h:14 gEasyChatWord_Leaders (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Leaders
gEasyChatWord_Leaders: @ 0x08578468
	.string "バトルリーダー{EOS}"
	.if (. - gEasyChatWord_Leaders) != 0x8
	.error "gEasyChatWord_Leaders must retain its original byte length"
	.endif
	.globl gText_Rom_57846B
	.set gText_Rom_57846B, gEasyChatWord_Leaders + 0x3

	@ src/data/easy_chat/easy_chat_group_events.h:15 gEasyChatWord_BattleRoom (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_BattleRoom
gEasyChatWord_BattleRoom: @ 0x08578470
	.string "バトルルーム{EOS}"
	.if (. - gEasyChatWord_BattleRoom) != 0x7
	.error "gEasyChatWord_BattleRoom must retain its original byte length"
	.endif
