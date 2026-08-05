	@ data/text/apprentice.inc:733 gText_ApprenticeWhichMove10
	.globl gText_Rom_2721C3
gText_Rom_2721C3: @ 0x082721C3
	.string "{PLAYER}{KUN} たいへんだぞ!\nおいらの ポケモンが なんと\lわざを 6つ おぼえたんだ!\p……なんてね ウソだよ! ははは!\pじつは おいら ポケモンの わざ きめるの\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ ししょうが\lオススメのわざ きめて くれない かな?\p{STR_VAR_2} と {STR_VAR_3}\n{STR_VAR_1}なら どっちが あうかい?$"
	.if (. - gText_Rom_2721C3) > 0xa0
	.error "gText_Rom_2721C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2721C3) < 0xa0
	.space 0xa0 - (. - gText_Rom_2721C3)
	.endif
