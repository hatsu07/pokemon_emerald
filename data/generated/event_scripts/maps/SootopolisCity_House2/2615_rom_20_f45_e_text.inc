	@ data/maps/SootopolisCity_House2/scripts.inc:21 SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs
	.globl gText_Rom_20F3FB
gText_Rom_20F3FB: @ 0x0820F3FB
	.string "おくりびやま……\pちょうじょうに ふたつのたまが\nおかれて いるのは ごぞんじ ですか……?{EOS}"
	.if (. - gText_Rom_20F3FB) > 0x2f
	.error "gText_Rom_20F3FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F3FB) < 0x2f
	.space 0x2f - (. - gText_Rom_20F3FB)
	.endif
	@ data/maps/SootopolisCity_House2/scripts.inc:24 SootopolisCity_House2_Text_YesTwoOrbsSideBySide
	.globl gText_Rom_20F42A
gText_Rom_20F42A: @ 0x0820F42A
	.string "そう…… ふたつのたまが\nとなりあわせに おかれている ようすは\lなにか こころが やすらぎますよ……{EOS}"
	.if (. - gText_Rom_20F42A) > 0x34
	.error "gText_Rom_20F42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F42A) < 0x34
	.space 0x34 - (. - gText_Rom_20F42A)
	.endif
	@ data/maps/SootopolisCity_House2/scripts.inc:27 SootopolisCity_House2_Text_OughtToVisitAndSee
	.globl gText_Rom_20F45E
gText_Rom_20F45E: @ 0x0820F45E
	.string "そうですか……\nいちど いかれては どうでしょう……{EOS}"
	.if (. - gText_Rom_20F45E) > 0x1b
	.error "gText_Rom_20F45E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F45E) < 0x1b
	.space 0x1b - (. - gText_Rom_20F45E)
	.endif
	@ analyzed canonical ROM range 0x0820F479-0x0820F4AB
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F479: @ 0x0820F479
	.byte 0x00
.globl EventScript_JP_0820F47A
EventScript_JP_0820F47A: @ 0x0820F47A
	lock
	faceplayer
	loadword 0x00, gText_Rom_20F4AC
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820F499
	loadword 0x00, gText_Rom_20F516
	callstd 0x04
	release
	end
EventScript_0820F499: @ 0x0820F499
EventScript_JP_0820F499: @ 0x0820F499
	loadword 0x00, gText_Rom_20F502
	callstd 0x04
	release
	end
.globl EventScript_JP_0820F4A3
EventScript_JP_0820F4A3: @ 0x0820F4A3
	loadword 0x00, gText_Rom_20F542
	callstd 0x02
	end
