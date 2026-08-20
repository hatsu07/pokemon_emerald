	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:986 LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum
	.globl gText_Rom_207519
gText_Rom_207519: @ 0x08207519
	.string "そ そうか!\nじゃ いますぐ もっていって みるよ\lタイトルも つけて おくからね!\pこれが きにいられて\nかざって もらえて いるか どうか\lきみも こんど みに いってね!\lじゃ ありがとう!{EOS}"
	.if (. - gText_Rom_207519) > 0x63
	.error "gText_Rom_207519 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207519) < 0x63
	.space 0x63 - (. - gText_Rom_207519)
	.endif
