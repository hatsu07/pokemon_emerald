	@ src/strings.c:695 gText_BattleDome (+1 aliases)
	.globl gText_Rom_5CCBAF
gText_Rom_5CCBAF: @ 0x085CCBAF
	.string "バトルドーム$"
	.if (. - gText_Rom_5CCBAF) > 0x7
	.error "gText_Rom_5CCBAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBAF) < 0x7
	.space 0x7 - (. - gText_Rom_5CCBAF)
	.endif

	@ src/strings.c:696 gText_BattlePalace (+1 aliases)
	.globl gText_Rom_5CCBB6
gText_Rom_5CCBB6: @ 0x085CCBB6
	.string "バトルパレス$"
	.if (. - gText_Rom_5CCBB6) > 0x7
	.error "gText_Rom_5CCBB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBB6) < 0x7
	.space 0x7 - (. - gText_Rom_5CCBB6)
	.endif

	@ src/strings.c:698 gText_BattleArena (+1 aliases)
	.globl gText_Rom_5CCBBD
gText_Rom_5CCBBD: @ 0x085CCBBD
	.string "バトルアリーナ$"
	.if (. - gText_Rom_5CCBBD) > 0x8
	.error "gText_Rom_5CCBBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBBD) < 0x8
	.space 0x8 - (. - gText_Rom_5CCBBD)
	.endif

	@ src/strings.c:697 gText_BattleFactory (+1 aliases)
	.globl gText_Rom_5CCBC5
gText_Rom_5CCBC5: @ 0x085CCBC5
	.string "バトルファクトリー$"
	.if (. - gText_Rom_5CCBC5) > 0xa
	.error "gText_Rom_5CCBC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBC5) < 0xa
	.space 0xa - (. - gText_Rom_5CCBC5)
	.endif

	@ src/strings.c:699 gText_BattlePike (+1 aliases)
	.globl gText_Rom_5CCBCF
gText_Rom_5CCBCF: @ 0x085CCBCF
	.string "バトルチューブ$"
	.if (. - gText_Rom_5CCBCF) > 0x8
	.error "gText_Rom_5CCBCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBCF) < 0x8
	.space 0x8 - (. - gText_Rom_5CCBCF)
	.endif

	@ src/strings.c:700 gText_BattlePyramid (+1 aliases)
	.globl gText_Rom_5CCBD7
gText_Rom_5CCBD7: @ 0x085CCBD7
	.string "バトルピラミッド$"
	.if (. - gText_Rom_5CCBD7) > 0x9
	.error "gText_Rom_5CCBD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBD7) < 0x9
	.space 0x9 - (. - gText_Rom_5CCBD7)
	.endif

	@ src/strings.c:813 gText_BattleTowerDesc
	.globl gText_Rom_5CCBE0
gText_Rom_5CCBE0: @ 0x085CCBE0
	.string "かちぬき ひたすら うえを めざす。\nさいのうを ためされる。$"
	.if (. - gText_Rom_5CCBE0) > 0x20
	.error "gText_Rom_5CCBE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBE0) < 0x20
	.space 0x20 - (. - gText_Rom_5CCBE0)
	.endif

	@ src/strings.c:814 gText_BattleDomeDesc
	.globl gText_Rom_5CCC00
gText_Rom_5CCC00: @ 0x085CCC00
	.string "トーナメントを かちぬく。\nせんじゅつを ためされる。$"
	.if (. - gText_Rom_5CCC00) > 0x1c
	.error "gText_Rom_5CCC00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC00) < 0x1c
	.space 0x1c - (. - gText_Rom_5CCC00)
	.endif

	@ src/strings.c:815 gText_BattlePalaceDesc
	.globl gText_Rom_5CCC1C
gText_Rom_5CCC1C: @ 0x085CCC1C
	.string "しょうぶを みまもる。\nポケモンとの きずなを ためされる。$"
	.if (. - gText_Rom_5CCC1C) > 0x1f
	.error "gText_Rom_5CCC1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC1C) < 0x1f
	.space 0x1f - (. - gText_Rom_5CCC1C)
	.endif

	@ src/strings.c:816 gText_BattleArenaDesc
	.globl gText_Rom_5CCC3B
gText_Rom_5CCC3B: @ 0x085CCC3B
	.string "つよい ポケモンの チームで しょうりする。\nとうしを ためされる。$"
	.if (. - gText_Rom_5CCC3B) > 0x23
	.error "gText_Rom_5CCC3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC3B) < 0x23
	.space 0x23 - (. - gText_Rom_5CCC3B)
	.endif

	@ src/strings.c:817 gText_BattleFactoryDesc
	.globl gText_Rom_5CCC5E
gText_Rom_5CCC5E: @ 0x085CCC5E
	.string "レンタルポケモンで しょうりする。\nちしきを ためされる。$"
	.if (. - gText_Rom_5CCC5E) > 0x1e
	.error "gText_Rom_5CCC5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC5E) < 0x1e
	.space 0x1e - (. - gText_Rom_5CCC5E)
	.endif

	@ src/strings.c:818 gText_BattlePikeDesc
	.globl gText_Rom_5CCC7C
gText_Rom_5CCC7C: @ 0x085CCC7C
	.string "3つの みちから 1つえらび かちすすむ。\nうんを ためされる。$"
	.if (. - gText_Rom_5CCC7C) > 0x21
	.error "gText_Rom_5CCC7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC7C) < 0x21
	.space 0x21 - (. - gText_Rom_5CCC7C)
	.endif

	@ src/strings.c:819 gText_BattlePyramidDesc
	.globl gText_Rom_5CCC9D
gText_Rom_5CCC9D: @ 0x085CCC9D
	.string "ちょうじょうを めざし ぼうけんする。\nゆうきを ためされる。$"
	.if (. - gText_Rom_5CCC9D) > 0x20
	.error "gText_Rom_5CCC9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC9D) < 0x20
	.space 0x20 - (. - gText_Rom_5CCC9D)
	.endif
