	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:243 BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned
	.globl gText_Rom_22F005
gText_Rom_22F005: @ 0x0822F005
	.string "ジンダイ『…… ここまで たどりついたか\nわかき ぼうけんしゃよ……\pきみは ほんとうに こころから\nぼうけんを あいして いるようだな……\pそう…… まるで わかき ひの\nわたし そっくりじゃ ないか……\p…… …… …… おお……\pあつく!!\pきけんで!!\pくるしい!!\pあの いのちがけの ぼうけんの ひびが\nよみがえって きたぞ……"
	.byte EOS
	.if (. - gText_Rom_22F005) > 0xab
	.error "gText_Rom_22F005 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F005) < 0xab
	.space 0xab - (. - gText_Rom_22F005)
	.endif
