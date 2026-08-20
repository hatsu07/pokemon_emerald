	@ src/strings.c:389 gText_PkmnInfo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA3E4
gText_Rom_5CA3E4: @ 0x085CA3E4
	.string "ポケモンじょうほう{EOS}"
	.if (. - gText_Rom_5CA3E4) != 0xa
	.error "gText_Rom_5CA3E4 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA3E8
	.set gText_Rom_5CA3E8, gText_Rom_5CA3E4 + 0x4

	@ src/strings.c:390 gText_PkmnSkills
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA3EE
gText_Rom_5CA3EE: @ 0x085CA3EE
	.string "ポケモンのうりょく{EOS}"
	.if (. - gText_Rom_5CA3EE) != 0xa
	.error "gText_Rom_5CA3EE must retain its original byte length"
	.endif
	.globl gText_Rom_5CA3F2
	.set gText_Rom_5CA3F2, gText_Rom_5CA3EE + 0x4

	@ src/strings.c:391 gText_BattleMoves
	.globl gText_Rom_5CA3F8
gText_Rom_5CA3F8: @ 0x085CA3F8
	.string "たたかうわざ{EOS}"
	.if (. - gText_Rom_5CA3F8) > 0x7
	.error "gText_Rom_5CA3F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3F8) < 0x7
	.space 0x7 - (. - gText_Rom_5CA3F8)
	.endif

	@ src/strings.c:392 gText_ContestMoves (+1 aliases)
	.globl gText_Rom_5CA3FF
gText_Rom_5CA3FF: @ 0x085CA3FF
	.string "コンテストわざ{EOS}"
	.if (. - gText_Rom_5CA3FF) > 0x8
	.error "gText_Rom_5CA3FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3FF) < 0x8
	.space 0x8 - (. - gText_Rom_5CA3FF)
	.endif

	@ src/strings.c:393 gText_Info
	.globl gText_Rom_5CA407
gText_Rom_5CA407: @ 0x085CA407
	.string "きりかえ{EOS}"
	.if (. - gText_Rom_5CA407) > 0x5
	.error "gText_Rom_5CA407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA407) < 0x5
	.space 0x5 - (. - gText_Rom_5CA407)
	.endif

	@ src/strings.c:394 gText_EggWillTakeALongTime
	.globl gText_Rom_5CA40C
gText_Rom_5CA40C: @ 0x085CA40C
	.string "この タマゴは\nうまれるまで かなり かかりそう{EOS}"
	.if (. - gText_Rom_5CA40C) > 0x19
	.error "gText_Rom_5CA40C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA40C) < 0x19
	.space 0x19 - (. - gText_Rom_5CA40C)
	.endif

	@ src/strings.c:395 gText_EggWillTakeSomeTime
	.globl gText_Rom_5CA425
gText_Rom_5CA425: @ 0x085CA425
	.string "なにが うまれて くるのかな?\nうまれる まで まだまだ かかりそう{EOS}"
	.if (. - gText_Rom_5CA425) > 0x23
	.error "gText_Rom_5CA425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA425) < 0x23
	.space 0x23 - (. - gText_Rom_5CA425)
	.endif

	@ src/strings.c:396 gText_EggWillHatchSoon
	.globl gText_Rom_5CA448
gText_Rom_5CA448: @ 0x085CA448
	.string "ときどき うごいて いるようだ\nうまれる まで もうちょっと かな?{EOS}"
	.if (. - gText_Rom_5CA448) > 0x23
	.error "gText_Rom_5CA448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA448) < 0x23
	.space 0x23 - (. - gText_Rom_5CA448)
	.endif

	@ src/strings.c:397 gText_EggAboutToHatch
	.globl gText_Rom_5CA46B
gText_Rom_5CA46B: @ 0x085CA46B
	.string "なかから おとが きこえてくる\nもうすぐ うまれそう!{EOS}"
	.if (. - gText_Rom_5CA46B) > 0x1c
	.error "gText_Rom_5CA46B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA46B) < 0x1c
	.space 0x1c - (. - gText_Rom_5CA46B)
	.endif

	@ src/strings.c:398 gText_HMMovesCantBeForgotten2
	.globl gText_Rom_5CA487
gText_Rom_5CA487: @ 0x085CA487
	.string "それは たいせつなわざです\nわすれさせることは できません!{EOS}"
	.if (. - gText_Rom_5CA487) > 0x1f
	.error "gText_Rom_5CA487 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA487) < 0x1f
	.space 0x1f - (. - gText_Rom_5CA487)
	.endif

	@ src/strings.c:399 gText_XNatureMetAtYZ
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA4A6
gText_Rom_5CA4A6: @ 0x085CA4A6
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}で であった{EOS}"
	.if (. - gText_Rom_5CA4A6) != 0x26
	.error "gText_Rom_5CA4A6 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA4C8
	.set gText_Rom_5CA4C8, gText_Rom_5CA4A6 + 0x22

	@ src/strings.c:400 gText_XNatureHatchedAtYZ
	.globl gText_Rom_5CA4CC
gText_Rom_5CA4CC: @ 0x085CA4CC
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}で かえった{EOS}"
	.if (. - gText_Rom_5CA4CC) > 0x26
	.error "gText_Rom_5CA4CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA4CC) < 0x26
	.space 0x26 - (. - gText_Rom_5CA4CC)
	.endif
