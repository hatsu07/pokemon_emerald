	@ data/maps/BattleFrontier_Lounge3/scripts.inc:293 BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints
	.globl gText_Rom_2383E2
gText_Rom_2383E2: @ 0x082383E2
	.string "あぁ あんた…… ごくろう さん……\pわりーけど バトルポイントは\nかえせねぇよ……\p…… まぁ おたがい つぎの きかいに\nがんばり ましょうや……"
	.byte EOS
	.if (. - gText_Rom_2383E2) > 0x4c
	.error "gText_Rom_2383E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2383E2) < 0x4c
	.space 0x4c - (. - gText_Rom_2383E2)
	.endif
