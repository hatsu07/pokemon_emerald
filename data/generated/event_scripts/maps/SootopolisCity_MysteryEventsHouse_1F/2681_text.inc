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
