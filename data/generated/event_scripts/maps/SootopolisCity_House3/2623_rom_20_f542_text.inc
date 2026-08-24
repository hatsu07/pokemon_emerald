	@ data/maps/SootopolisCity_House3/scripts.inc:22 SootopolisCity_House3_Text_JuanHasManyFansDoYou
	.globl gText_Rom_20F4AC
gText_Rom_20F4AC: @ 0x0820F4AC
	.string "あなた ポケモン トレーナーね?\pルネシティの アダンさまは\nおでしさんの ミクリさま より\lさらに たくさんの ファンが いるのよ!\pあなたに ファンは いるのかしら?{EOS}"
	.if (. - gText_Rom_20F4AC) > 0x56
	.error "gText_Rom_20F4AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F4AC) < 0x56
	.space 0x56 - (. - gText_Rom_20F4AC)
	.endif
	@ data/maps/SootopolisCity_House3/scripts.inc:25 SootopolisCity_House3_Text_YouMustBePrettyStrong
	.globl gText_Rom_20F502
gText_Rom_20F502: @ 0x0820F502
	.string "へえー\nじゃあ けっこう つよいのね!{EOS}"
	.if (. - gText_Rom_20F502) > 0x14
	.error "gText_Rom_20F502 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F502) < 0x14
	.space 0x14 - (. - gText_Rom_20F502)
	.endif
	@ data/maps/SootopolisCity_House3/scripts.inc:28 SootopolisCity_House3_Text_LonesomeTryWorkingHarder
	.globl gText_Rom_20F516
gText_Rom_20F516: @ 0x0820F516
	.string "あららん……\nそれは ちょっと さみしいわね\pファンが できるよう がんばりなさいよ!{EOS}"
	.if (. - gText_Rom_20F516) > 0x2c
	.error "gText_Rom_20F516 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F516) < 0x2c
	.space 0x2c - (. - gText_Rom_20F516)
	.endif
	@ data/maps/SootopolisCity_House3/scripts.inc:31 SootopolisCity_House3_Text_TrainerFanClubWasWild
	.globl gText_Rom_20F542
gText_Rom_20F542: @ 0x0820F542
	.string "ねっしんな ファンは ホウエン いがいの\nちいきからも やってくるの!\pあたしが ミナモの\nトレーナー ファンクラブに いったときも\lとっても すごかったもの!{EOS}"
	.if (. - gText_Rom_20F542) > 0x51
	.error "gText_Rom_20F542 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F542) < 0x51
	.space 0x51 - (. - gText_Rom_20F542)
	.endif
	@ analyzed canonical ROM range 0x0820F593-0x0820F5B8
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F593: @ 0x0820F593
	.byte 0x00
.globl EventScript_JP_0820F594
EventScript_JP_0820F594: @ 0x0820F594
	loadword 0x00, gText_Rom_20F5B9
	callstd 0x02
	end
.globl EventScript_JP_0820F59D
EventScript_JP_0820F59D: @ 0x0820F59D
	loadword 0x00, gText_Rom_20F60F
	callstd 0x02
	end
.globl EventScript_JP_0820F5A6
EventScript_JP_0820F5A6: @ 0x0820F5A6
	lock
	faceplayer
	waitse
	playmoncry 0x00B8, 0x0000
	loadword 0x00, gText_Rom_20F64D
	callstd 0x04
	waitmoncry
	release
	end
