	@ data/maps/RustboroCity/scripts.inc:1177 RustboroCity_Text_BrendanHiLetsRegister
	.globl gText_Rom_1DF903
gText_Rom_1DF903: @ 0x081DF903
	.string "ユウキ『おっ {PLAYER}!\pポケナビに エントリーコールを\nつけて もらったんだな!\pじゃあ オレたち\nおたがいに よびだせる ように\lなまえを とうろく しておこうよ!\p…… …… ……{EOS}"
	.if (. - gText_Rom_1DF903) > 0x5c
	.error "gText_Rom_1DF903 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF903) < 0x5c
	.space 0x5c - (. - gText_Rom_1DF903)
	.endif
