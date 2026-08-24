	@ src/strings.c:389 gText_PkmnInfo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PkmnInfo
gText_PkmnInfo: @ 0x085CA3E4
	.string "ポケモンじょうほう{EOS}"
	.if (. - gText_PkmnInfo) != 0xa
	.error "gText_PkmnInfo must retain its original byte length"
	.endif

	@ src/strings.c:390 gText_PkmnSkills
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PkmnSkills
gText_PkmnSkills: @ 0x085CA3EE
	.string "ポケモンのうりょく{EOS}"
	.if (. - gText_PkmnSkills) != 0xa
	.error "gText_PkmnSkills must retain its original byte length"
	.endif

	@ src/strings.c:391 gText_BattleMoves
	.globl gText_BattleMoves
gText_BattleMoves: @ 0x085CA3F8
	.string "たたかうわざ{EOS}"
	.if (. - gText_BattleMoves) > 0x7
	.error "gText_BattleMoves may not grow beyond its original slot"
	.endif
	.if (. - gText_BattleMoves) < 0x7
	.space 0x7 - (. - gText_BattleMoves)
	.endif

	@ src/strings.c:392 gText_ContestMoves (+1 aliases)
	.globl gText_ContestMoves
gText_ContestMoves: @ 0x085CA3FF
	.string "コンテストわざ{EOS}"
	.if (. - gText_ContestMoves) > 0x8
	.error "gText_ContestMoves may not grow beyond its original slot"
	.endif
	.if (. - gText_ContestMoves) < 0x8
	.space 0x8 - (. - gText_ContestMoves)
	.endif

	@ src/strings.c:393 gText_Info
	.globl gText_Info
gText_Info: @ 0x085CA407
	.string "きりかえ{EOS}"
	.if (. - gText_Info) > 0x5
	.error "gText_Info may not grow beyond its original slot"
	.endif
	.if (. - gText_Info) < 0x5
	.space 0x5 - (. - gText_Info)
	.endif

	@ src/strings.c:394 gText_EggWillTakeALongTime
	.globl gText_EggWillTakeALongTime
gText_EggWillTakeALongTime: @ 0x085CA40C
	.string "この タマゴは\nうまれるまで かなり かかりそう{EOS}"
	.if (. - gText_EggWillTakeALongTime) > 0x19
	.error "gText_EggWillTakeALongTime may not grow beyond its original slot"
	.endif
	.if (. - gText_EggWillTakeALongTime) < 0x19
	.space 0x19 - (. - gText_EggWillTakeALongTime)
	.endif

	@ src/strings.c:395 gText_EggWillTakeSomeTime
	.globl gText_EggWillTakeSomeTime
gText_EggWillTakeSomeTime: @ 0x085CA425
	.string "なにが うまれて くるのかな?\nうまれる まで まだまだ かかりそう{EOS}"
	.if (. - gText_EggWillTakeSomeTime) > 0x23
	.error "gText_EggWillTakeSomeTime may not grow beyond its original slot"
	.endif
	.if (. - gText_EggWillTakeSomeTime) < 0x23
	.space 0x23 - (. - gText_EggWillTakeSomeTime)
	.endif

	@ src/strings.c:396 gText_EggWillHatchSoon
	.globl gText_EggWillHatchSoon
gText_EggWillHatchSoon: @ 0x085CA448
	.string "ときどき うごいて いるようだ\nうまれる まで もうちょっと かな?{EOS}"
	.if (. - gText_EggWillHatchSoon) > 0x23
	.error "gText_EggWillHatchSoon may not grow beyond its original slot"
	.endif
	.if (. - gText_EggWillHatchSoon) < 0x23
	.space 0x23 - (. - gText_EggWillHatchSoon)
	.endif

	@ src/strings.c:397 gText_EggAboutToHatch
	.globl gText_EggAboutToHatch
gText_EggAboutToHatch: @ 0x085CA46B
	.string "なかから おとが きこえてくる\nもうすぐ うまれそう!{EOS}"
	.if (. - gText_EggAboutToHatch) > 0x1c
	.error "gText_EggAboutToHatch may not grow beyond its original slot"
	.endif
	.if (. - gText_EggAboutToHatch) < 0x1c
	.space 0x1c - (. - gText_EggAboutToHatch)
	.endif

	@ src/strings.c:398 gText_HMMovesCantBeForgotten2
	.globl gText_HMMovesCantBeForgotten2
gText_HMMovesCantBeForgotten2: @ 0x085CA487
	.string "それは たいせつなわざです\nわすれさせることは できません!{EOS}"
	.if (. - gText_HMMovesCantBeForgotten2) > 0x1f
	.error "gText_HMMovesCantBeForgotten2 may not grow beyond its original slot"
	.endif
	.if (. - gText_HMMovesCantBeForgotten2) < 0x1f
	.space 0x1f - (. - gText_HMMovesCantBeForgotten2)
	.endif

	@ src/strings.c:399 gText_XNatureMetAtYZ
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_XNatureMetAtYZ
gText_XNatureMetAtYZ: @ 0x085CA4A6
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}で であった{EOS}"
	.if (. - gText_XNatureMetAtYZ) != 0x26
	.error "gText_XNatureMetAtYZ must retain its original byte length"
	.endif

	@ src/strings.c:400 gText_XNatureHatchedAtYZ
	.globl gText_XNatureHatchedAtYZ
gText_XNatureHatchedAtYZ: @ 0x085CA4CC
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}で かえった{EOS}"
	.if (. - gText_XNatureHatchedAtYZ) > 0x26
	.error "gText_XNatureHatchedAtYZ may not grow beyond its original slot"
	.endif
	.if (. - gText_XNatureHatchedAtYZ) < 0x26
	.space 0x26 - (. - gText_XNatureHatchedAtYZ)
	.endif
