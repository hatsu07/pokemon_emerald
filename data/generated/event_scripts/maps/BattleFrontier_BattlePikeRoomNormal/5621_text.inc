	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:775 BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_234FB2
gText_Rom_234FB2: @ 0x08234FB2
	.string "…… ほら…… さっさと きえな………"
	.byte EOS
	.if (. - gText_Rom_234FB2) != 0x14
	.error "gText_Rom_234FB2 must retain its original byte length"
	.endif
	.globl gText_Rom_234FC2
	.set gText_Rom_234FC2, gText_Rom_234FB2 + 0x10
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:779 BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain
	.globl gText_Rom_234FC6
gText_Rom_234FC6: @ 0x08234FC6
	.string "アザミ『…… また あんたか……\p…… …… …… ……\p…… …… はなも あらしも ふみこえて\nいきてきた この あたし…… ……\pそうそう おなじ あいてに\nまけて やる ひつようも ないね……\l…… …… …… …… いいわ……\lやって やるよ…… …… …… ……"
	.byte EOS
	.if (. - gText_Rom_234FC6) > 0x8a
	.error "gText_Rom_234FC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234FC6) < 0x8a
	.space 0x8a - (. - gText_Rom_234FC6)
	.endif
