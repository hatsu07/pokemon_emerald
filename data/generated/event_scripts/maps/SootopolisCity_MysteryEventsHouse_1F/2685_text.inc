	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:171 SootopolisCity_MysteryEventsHouse_1F_Text_ChallengeVisitingTrainer
	.globl gText_Rom_20FFC6
gText_Rom_20FFC6: @ 0x0820FFC6
	.string "いまは {STR_VAR_1} という トレーナーが\nわしの いえに きておる!\p{STR_VAR_1}と しょうぶ してみたいのじゃな?$"
	.if (. - gText_Rom_20FFC6) > 0x34
	.error "gText_Rom_20FFC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FFC6) < 0x34
	.space 0x34 - (. - gText_Rom_20FFC6)
	.endif
