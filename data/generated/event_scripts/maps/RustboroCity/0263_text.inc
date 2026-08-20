	@ data/maps/RustboroCity/scripts.inc:1128 RustboroCity_Text_MayHiLetsRegister
	.globl gText_Rom_1DF70B
gText_Rom_1DF70B: @ 0x081DF70B
	.string "ハルカ『あっ {PLAYER}{KUN}!\pポケナビに エントリーコールを\nつけて もらったのね!\pじゃあ あたしたち\nおたがいに よびだせる ように\lなまえを とうろく しておこうよ!\p…… …… ……{EOS}"
	.if (. - gText_Rom_1DF70B) > 0x5e
	.error "gText_Rom_1DF70B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF70B) < 0x5e
	.space 0x5e - (. - gText_Rom_1DF70B)
	.endif
