	@ data/text/apprentice.inc:436 gText_ApprenticeWhatHeldItem13
	.globl gText_Rom_26FC83
gText_Rom_26FC83: @ 0x0826FC83
	.string "ギャッ いててっ! {PLAYER}{KUN}\nうでが おれてるから さわらないでよ!\pポケモンに なにを もたせるか\nじぶんで いろいろ ためしすぎちゃって\lうでが おれちゃったん だよね きっと!\pというわけ だからさ\nかわりに きめて くれよ!\p{PLAYER}{KUN}はさ おれの {STR_VAR_1}\nどんな どうぐ もたせたら いいとおもう?"
	.byte EOS
	.if (. - gText_Rom_26FC83) > 0x99
	.error "gText_Rom_26FC83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FC83) < 0x99
	.space 0x99 - (. - gText_Rom_26FC83)
	.endif
