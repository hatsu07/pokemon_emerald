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
