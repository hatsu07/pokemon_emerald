	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:234 EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver
	.globl gText_Rom_210DC2
gText_Rom_210DC2: @ 0x08210DC2
	.string "ハルカ『あれ? あれれ?\p{PLAYER}{KUN}……\nひょっとして……\lもう おわっちゃった……?{EOS}"
	.if (. - gText_Rom_210DC2) > 0x2b
	.error "gText_Rom_210DC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210DC2) < 0x2b
	.space 0x2b - (. - gText_Rom_210DC2)
	.endif
