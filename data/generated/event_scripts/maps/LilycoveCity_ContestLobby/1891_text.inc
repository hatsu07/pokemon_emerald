	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1001 LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum
	.globl gText_Rom_2075D1
gText_Rom_2075D1: @ 0x082075D1
	.string "うーん…… じゃあ これは\nぼくが もってかえると するか……\pでも やっぱり もっていきたいな……\nいいだろ?{EOS}"
	.if (. - gText_Rom_2075D1) > 0x39
	.error "gText_Rom_2075D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2075D1) < 0x39
	.space 0x39 - (. - gText_Rom_2075D1)
	.endif
