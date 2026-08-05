	@ data/text/apprentice.inc:673 gText_ApprenticeWhichMove0
	.globl gText_Rom_271A44
gText_Rom_271A44: @ 0x08271A44
	.string "うわーん {PLAYER}さんだ!\nぐすん ひっく\lぼく なやんで いるんですよう!\lぼくの {STR_VAR_1}のね わざが\lなかなか きまらないん です……\pあのう あのう!\n{PLAYER}さん きめて もらえませんか?\p{STR_VAR_1}の わざ\n{STR_VAR_2}と {STR_VAR_3}なら\lどっちが いいんでしょう……?$"
	.if (. - gText_Rom_271A44) > 0x7e
	.error "gText_Rom_271A44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271A44) < 0x7e
	.space 0x7e - (. - gText_Rom_271A44)
	.endif
