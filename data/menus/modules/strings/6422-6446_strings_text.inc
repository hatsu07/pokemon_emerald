
	@ src/strings.c:805 gText_ThereIsNoBattleRecord
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_5CCB94: @ 0x085CCB94
	.string "げんざい たいせんきろくは ありません{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCB94) != 0x14
	.error ".Lbatch81_text_start_gText_Rom_5CCB94 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCBA4
	.set gText_Rom_5CCBA4, gPriorityAFrontierPassTextThereIsNoBattleRecord + 0x10
	@ src/data/easy_chat/easy_chat_group_events.h:13 gEasyChatWord_BattleTower (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_5CCBA8: @ 0x085CCBA8
	.string "バトルタワー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBA8) != 0x7
	.error ".Lbatch81_text_start_gText_Rom_5CCBA8 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCBAB
	.set gText_Rom_5CCBAB, gPriorityAFrontierPassTextBattleTowerName + 0x3
	@ src/strings.c:695 gText_BattleDome (+1 aliases)
.Lbatch81_text_start_gText_Rom_5CCBAF: @ 0x085CCBAF
	.string "バトルドーム{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBAF) > 0x7
	.error ".Lbatch81_text_start_gText_Rom_5CCBAF may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBAF) < 0x7
	.space 0x7 - (. - .Lbatch81_text_start_gText_Rom_5CCBAF)
	.endif

	@ src/strings.c:696 gText_BattlePalace (+1 aliases)
.Lbatch81_text_start_gText_Rom_5CCBB6: @ 0x085CCBB6
	.string "バトルパレス{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBB6) > 0x7
	.error ".Lbatch81_text_start_gText_Rom_5CCBB6 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBB6) < 0x7
	.space 0x7 - (. - .Lbatch81_text_start_gText_Rom_5CCBB6)
	.endif

	@ src/strings.c:698 gText_BattleArena (+1 aliases)
.Lbatch81_text_start_gText_Rom_5CCBBD: @ 0x085CCBBD
	.string "バトルアリーナ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBBD) > 0x8
	.error ".Lbatch81_text_start_gText_Rom_5CCBBD may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBBD) < 0x8
	.space 0x8 - (. - .Lbatch81_text_start_gText_Rom_5CCBBD)
	.endif

	@ src/strings.c:697 gText_BattleFactory (+1 aliases)
.Lbatch81_text_start_gText_Rom_5CCBC5: @ 0x085CCBC5
	.string "バトルファクトリー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBC5) > 0xa
	.error ".Lbatch81_text_start_gText_Rom_5CCBC5 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBC5) < 0xa
	.space 0xa - (. - .Lbatch81_text_start_gText_Rom_5CCBC5)
	.endif

	@ src/strings.c:699 gText_BattlePike (+1 aliases)
.Lbatch81_text_start_gText_Rom_5CCBCF: @ 0x085CCBCF
	.string "バトルチューブ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBCF) > 0x8
	.error ".Lbatch81_text_start_gText_Rom_5CCBCF may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBCF) < 0x8
	.space 0x8 - (. - .Lbatch81_text_start_gText_Rom_5CCBCF)
	.endif

	@ src/strings.c:700 gText_BattlePyramid (+1 aliases)
.Lbatch81_text_start_gText_Rom_5CCBD7: @ 0x085CCBD7
	.string "バトルピラミッド{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBD7) > 0x9
	.error ".Lbatch81_text_start_gText_Rom_5CCBD7 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBD7) < 0x9
	.space 0x9 - (. - .Lbatch81_text_start_gText_Rom_5CCBD7)
	.endif

	@ src/strings.c:813 gText_BattleTowerDesc
.Lbatch81_text_start_gText_Rom_5CCBE0: @ 0x085CCBE0
	.string "かちぬき ひたすら うえを めざす。\nさいのうを ためされる。{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBE0) > 0x20
	.error ".Lbatch81_text_start_gText_Rom_5CCBE0 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCBE0) < 0x20
	.space 0x20 - (. - .Lbatch81_text_start_gText_Rom_5CCBE0)
	.endif

	@ src/strings.c:814 gText_BattleDomeDesc
.Lbatch81_text_start_gText_Rom_5CCC00: @ 0x085CCC00
	.string "トーナメントを かちぬく。\nせんじゅつを ためされる。{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCC00) > 0x1c
	.error ".Lbatch81_text_start_gText_Rom_5CCC00 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCC00) < 0x1c
	.space 0x1c - (. - .Lbatch81_text_start_gText_Rom_5CCC00)
	.endif

	@ src/strings.c:815 gText_BattlePalaceDesc
.Lbatch81_text_start_gText_Rom_5CCC1C: @ 0x085CCC1C
	.string "しょうぶを みまもる。\nポケモンとの きずなを ためされる。{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCC1C) > 0x1f
	.error ".Lbatch81_text_start_gText_Rom_5CCC1C may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCC1C) < 0x1f
	.space 0x1f - (. - .Lbatch81_text_start_gText_Rom_5CCC1C)
	.endif

	@ src/strings.c:816 gText_BattleArenaDesc
.Lbatch81_text_start_gText_Rom_5CCC3B: @ 0x085CCC3B
	.string "つよい ポケモンの チームで しょうりする。\nとうしを ためされる。{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCC3B) > 0x23
	.error ".Lbatch81_text_start_gText_Rom_5CCC3B may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCC3B) < 0x23
	.space 0x23 - (. - .Lbatch81_text_start_gText_Rom_5CCC3B)
	.endif

	@ src/strings.c:817 gText_BattleFactoryDesc
.Lbatch81_text_start_gText_Rom_5CCC5E: @ 0x085CCC5E
	.string "レンタルポケモンで しょうりする。\nちしきを ためされる。{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCC5E) > 0x1e
	.error ".Lbatch81_text_start_gText_Rom_5CCC5E may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCC5E) < 0x1e
	.space 0x1e - (. - .Lbatch81_text_start_gText_Rom_5CCC5E)
	.endif

	@ src/strings.c:818 gText_BattlePikeDesc
.Lbatch81_text_start_gText_Rom_5CCC7C: @ 0x085CCC7C
	.string "3つの みちから 1つえらび かちすすむ。\nうんを ためされる。{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCC7C) > 0x21
	.error ".Lbatch81_text_start_gText_Rom_5CCC7C may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCC7C) < 0x21
	.space 0x21 - (. - .Lbatch81_text_start_gText_Rom_5CCC7C)
	.endif

	@ src/strings.c:819 gText_BattlePyramidDesc
.Lbatch81_text_start_gText_Rom_5CCC9D: @ 0x085CCC9D
	.string "ちょうじょうを めざし ぼうけんする。\nゆうきを ためされる。{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCC9D) > 0x20
	.error ".Lbatch81_text_start_gText_Rom_5CCC9D may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCC9D) < 0x20
	.space 0x20 - (. - .Lbatch81_text_start_gText_Rom_5CCC9D)
	.endif
