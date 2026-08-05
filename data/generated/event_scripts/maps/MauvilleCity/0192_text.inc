	@ data/maps/MauvilleCity/scripts.inc:564 MauvilleCity_Text_ScottYouDidntHoldBack
	.globl gText_Rom_1DE235
gText_Rom_1DE235: @ 0x081DE235
	.string "エニシダ『へへ……\nいまの しょうぶ みていたよ!\pきみは あの ミツルくん とかいう\nしょうねんと ともだち なんだろう?\pそれなのに てかげん せずに たたかい\nみごとに うちまかした……\pうん! それでこそ ほんとうの\nポケモン しょうぶ と いうものだ!\pわたしは そういう トレーナーが\nだいすきだなー!\p…… …… ……\nこれからも おうえん しているよ!$"
	.if (. - gText_Rom_1DE235) > 0xb9
	.error "gText_Rom_1DE235 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE235) < 0xb9
	.space 0xb9 - (. - gText_Rom_1DE235)
	.endif
