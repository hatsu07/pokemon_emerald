	@ data/maps/SootopolisCity_House2/scripts.inc:21 SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs
	.globl SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs
SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs: @ 0x0820F3FB
	.string "おくりびやま……\pちょうじょうに ふたつのたまが\nおかれて いるのは ごぞんじ ですか……?{EOS}"
	.if (. - SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs) > 0x2f
	.error "SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs) < 0x2f
	.space 0x2f - (. - SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs)
	.endif
	@ data/maps/SootopolisCity_House2/scripts.inc:24 SootopolisCity_House2_Text_YesTwoOrbsSideBySide
	.globl SootopolisCity_House2_Text_YesTwoOrbsSideBySide
SootopolisCity_House2_Text_YesTwoOrbsSideBySide: @ 0x0820F42A
	.string "そう…… ふたつのたまが\nとなりあわせに おかれている ようすは\lなにか こころが やすらぎますよ……{EOS}"
	.if (. - SootopolisCity_House2_Text_YesTwoOrbsSideBySide) > 0x34
	.error "SootopolisCity_House2_Text_YesTwoOrbsSideBySide may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House2_Text_YesTwoOrbsSideBySide) < 0x34
	.space 0x34 - (. - SootopolisCity_House2_Text_YesTwoOrbsSideBySide)
	.endif
	@ data/maps/SootopolisCity_House2/scripts.inc:27 SootopolisCity_House2_Text_OughtToVisitAndSee
	.globl SootopolisCity_House2_Text_OughtToVisitAndSee
SootopolisCity_House2_Text_OughtToVisitAndSee: @ 0x0820F45E
	.string "そうですか……\nいちど いかれては どうでしょう……{EOS}"
	.if (. - SootopolisCity_House2_Text_OughtToVisitAndSee) > 0x1b
	.error "SootopolisCity_House2_Text_OughtToVisitAndSee may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House2_Text_OughtToVisitAndSee) < 0x1b
	.space 0x1b - (. - SootopolisCity_House2_Text_OughtToVisitAndSee)
	.endif
	@ analyzed canonical ROM range 0x0820F479-0x0820F4AB
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F479: @ 0x0820F479
	.byte 0x00
.globl EventScript_JP_0820F47A
EventScript_JP_0820F47A: @ 0x0820F47A
	lock
	faceplayer
	loadword 0x00, SootopolisCity_House3_Text_JuanHasManyFansDoYou
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820F499
	loadword 0x00, SootopolisCity_House3_Text_LonesomeTryWorkingHarder
	callstd 0x04
	release
	end
EventScript_0820F499: @ 0x0820F499
EventScript_JP_0820F499: @ 0x0820F499
	loadword 0x00, SootopolisCity_House3_Text_YouMustBePrettyStrong
	callstd 0x04
	release
	end
.globl EventScript_JP_0820F4A3
EventScript_JP_0820F4A3: @ 0x0820F4A3
	loadword 0x00, SootopolisCity_House3_Text_TrainerFanClubWasWild
	callstd 0x02
	end
