	@ data/text/apprentice.inc:751 gText_ApprenticeWhichMove13
	.globl gText_Rom_272442
gText_Rom_272442: @ 0x08272442
	.string "ガハゴホ あ {PLAYER}{KUN}\nカゼ ひいちゃったよ おれ……\pポケモンに おしえる わざを\nきめたいんだけど ムリっぽいん だよね\lというわけ だからさ かわりに たのむよ!\p{PLAYER}{KUN}はさ おれの {STR_VAR_1}\n{STR_VAR_2}と {STR_VAR_3}なら\lどっちが あってると おもうかい?$"
	.if (. - gText_Rom_272442) > 0x7e
	.error "gText_Rom_272442 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272442) < 0x7e
	.space 0x7e - (. - gText_Rom_272442)
	.endif
