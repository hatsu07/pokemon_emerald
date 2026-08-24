	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:165 SootopolisCity_MysteryEventsHouse_1F_Text_OnlyAmusementWatchingBattles
	.globl gText_Rom_20FF53
gText_Rom_20FF53: @ 0x0820FF53
	.string "わしも わかいころは\nポケモン トレーナーとして\lせかいじゅうを たび していたのじゃ\pジジイとなった いまでは\nわかい トレーナーの しょうぶを みるのが\lゆいいつの たのしみ じゃ{EOS}"
	.if (. - gText_Rom_20FF53) > 0x5d
	.error "gText_Rom_20FF53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FF53) < 0x5d
	.space 0x5d - (. - gText_Rom_20FF53)
	.endif
	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:168 SootopolisCity_MysteryEventsHouse_1F_Text_DoorAppearsToBeLocked
	.globl gText_Rom_20FFB0
gText_Rom_20FFB0: @ 0x0820FFB0
	.string "とびらには かぎが かかって いるようだ!{EOS}"
	.if (. - gText_Rom_20FFB0) > 0x16
	.error "gText_Rom_20FFB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FFB0) < 0x16
	.space 0x16 - (. - gText_Rom_20FFB0)
	.endif
	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:171 SootopolisCity_MysteryEventsHouse_1F_Text_ChallengeVisitingTrainer
	.globl gText_Rom_20FFC6
gText_Rom_20FFC6: @ 0x0820FFC6
	.string "いまは {STR_VAR_1} という トレーナーが\nわしの いえに きておる!\p{STR_VAR_1}と しょうぶ してみたいのじゃな?{EOS}"
	.if (. - gText_Rom_20FFC6) > 0x34
	.error "gText_Rom_20FFC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FFC6) < 0x34
	.space 0x34 - (. - gText_Rom_20FFC6)
	.endif
	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:174 SootopolisCity_MysteryEventsHouse_1F_Text_YouWontBattle
	.globl gText_Rom_20FFFA
gText_Rom_20FFFA: @ 0x0820FFFA
	.string "しょうぶ せんのか……\nしょうぶを みられなくて ガッカリ……{EOS}"
	.if (. - gText_Rom_20FFFA) > 0x20
	.error "gText_Rom_20FFFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FFFA) < 0x20
	.space 0x20 - (. - gText_Rom_20FFFA)
	.endif
	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:177 SootopolisCity_MysteryEventsHouse_1F_Text_KeepItTo3On3
	.globl gText_Rom_21001A
gText_Rom_21001A: @ 0x0821001A
	.string "おお そうか そうか!\pじゃが この いえは\nあんまり がんじょう じゃないから\pせめて 3たい3の\nしょうぶに して くれんかのう?{EOS}"
	.if (. - gText_Rom_21001A) > 0x44
	.error "gText_Rom_21001A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21001A) < 0x44
	.space 0x44 - (. - gText_Rom_21001A)
	.endif
	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:180 SootopolisCity_MysteryEventsHouse_1F_Text_SaveProgressBeforeBattle
	.globl gText_Rom_21005E
gText_Rom_21005E: @ 0x0821005E
	.string "じゃあ しょうぶの まえに\nレポートを かいて おいたほうが よいぞ{EOS}"
	.if (. - gText_Rom_21005E) > 0x23
	.error "gText_Rom_21005E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21005E) < 0x23
	.space 0x23 - (. - gText_Rom_21005E)
	.endif
	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:183 SootopolisCity_MysteryEventsHouse_1F_Text_HopeToSeeGoodMatch
	.globl gText_Rom_210081
gText_Rom_210081: @ 0x08210081
	.string "よい しょうぶを きたい しておるぞ!{EOS}"
	.if (. - gText_Rom_210081) > 0x14
	.error "gText_Rom_210081 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210081) < 0x14
	.space 0x14 - (. - gText_Rom_210081)
	.endif
	@ analyzed canonical ROM range 0x08210095-0x08210097
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08210095: @ 0x08210095
	.string "{STR_VAR_1}{EOS}"
