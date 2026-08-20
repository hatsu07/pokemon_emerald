	@ data/maps/FallarborTown/scripts.inc:66 FallarborTown_Text_HaveYouChallengedFlannery
	.globl gText_Rom_1E5F85
gText_Rom_1E5F85: @ 0x081E5F85
	.string "フエンタウンの ジムリーダー\nアスナとは たたかったかね?\pあのこの おじいさんは すごかったよ\nなんでも ポケモンリーグの\lしてんのう だった らしいからね\pきっと アスナも これから\nすばらしい トレーナーに なるだろうね{EOS}"
	.if (. - gText_Rom_1E5F85) > 0x72
	.error "gText_Rom_1E5F85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5F85) < 0x72
	.space 0x72 - (. - gText_Rom_1E5F85)
	.endif
