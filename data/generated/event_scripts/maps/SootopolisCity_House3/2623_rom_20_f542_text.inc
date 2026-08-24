	@ data/maps/SootopolisCity_House3/scripts.inc:22 SootopolisCity_House3_Text_JuanHasManyFansDoYou
	.globl SootopolisCity_House3_Text_JuanHasManyFansDoYou
SootopolisCity_House3_Text_JuanHasManyFansDoYou: @ 0x0820F4AC
	.string "あなた ポケモン トレーナーね?\pルネシティの アダンさまは\nおでしさんの ミクリさま より\lさらに たくさんの ファンが いるのよ!\pあなたに ファンは いるのかしら?{EOS}"
	.if (. - SootopolisCity_House3_Text_JuanHasManyFansDoYou) > 0x56
	.error "SootopolisCity_House3_Text_JuanHasManyFansDoYou may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House3_Text_JuanHasManyFansDoYou) < 0x56
	.space 0x56 - (. - SootopolisCity_House3_Text_JuanHasManyFansDoYou)
	.endif
	@ data/maps/SootopolisCity_House3/scripts.inc:25 SootopolisCity_House3_Text_YouMustBePrettyStrong
	.globl SootopolisCity_House3_Text_YouMustBePrettyStrong
SootopolisCity_House3_Text_YouMustBePrettyStrong: @ 0x0820F502
	.string "へえー\nじゃあ けっこう つよいのね!{EOS}"
	.if (. - SootopolisCity_House3_Text_YouMustBePrettyStrong) > 0x14
	.error "SootopolisCity_House3_Text_YouMustBePrettyStrong may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House3_Text_YouMustBePrettyStrong) < 0x14
	.space 0x14 - (. - SootopolisCity_House3_Text_YouMustBePrettyStrong)
	.endif
	@ data/maps/SootopolisCity_House3/scripts.inc:28 SootopolisCity_House3_Text_LonesomeTryWorkingHarder
	.globl SootopolisCity_House3_Text_LonesomeTryWorkingHarder
SootopolisCity_House3_Text_LonesomeTryWorkingHarder: @ 0x0820F516
	.string "あららん……\nそれは ちょっと さみしいわね\pファンが できるよう がんばりなさいよ!{EOS}"
	.if (. - SootopolisCity_House3_Text_LonesomeTryWorkingHarder) > 0x2c
	.error "SootopolisCity_House3_Text_LonesomeTryWorkingHarder may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House3_Text_LonesomeTryWorkingHarder) < 0x2c
	.space 0x2c - (. - SootopolisCity_House3_Text_LonesomeTryWorkingHarder)
	.endif
	@ data/maps/SootopolisCity_House3/scripts.inc:31 SootopolisCity_House3_Text_TrainerFanClubWasWild
	.globl SootopolisCity_House3_Text_TrainerFanClubWasWild
SootopolisCity_House3_Text_TrainerFanClubWasWild: @ 0x0820F542
	.string "ねっしんな ファンは ホウエン いがいの\nちいきからも やってくるの!\pあたしが ミナモの\nトレーナー ファンクラブに いったときも\lとっても すごかったもの!{EOS}"
	.if (. - SootopolisCity_House3_Text_TrainerFanClubWasWild) > 0x51
	.error "SootopolisCity_House3_Text_TrainerFanClubWasWild may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House3_Text_TrainerFanClubWasWild) < 0x51
	.space 0x51 - (. - SootopolisCity_House3_Text_TrainerFanClubWasWild)
	.endif
	@ analyzed canonical ROM range 0x0820F593-0x0820F5B8
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F593: @ 0x0820F593
	.byte 0x00
.globl EventScript_JP_0820F594
EventScript_JP_0820F594: @ 0x0820F594
	loadword 0x00, SootopolisCity_House4_Text_AncientTreasuresWaitingInSea
	callstd 0x02
	end
.globl EventScript_JP_0820F59D
EventScript_JP_0820F59D: @ 0x0820F59D
	loadword 0x00, SootopolisCity_House4_Text_StrollUnderwaterWithPokemon
	callstd 0x02
	end
.globl EventScript_JP_0820F5A6
EventScript_JP_0820F5A6: @ 0x0820F5A6
	lock
	faceplayer
	waitse
	playmoncry 0x00B8, 0x0000
	loadword 0x00, SootopolisCity_House4_Text_Azumarill
	callstd 0x04
	waitmoncry
	release
	end
