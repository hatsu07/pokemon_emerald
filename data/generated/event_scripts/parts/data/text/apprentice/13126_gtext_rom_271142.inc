	@ data/text/apprentice.inc:607 gText_ApprenticeWhichMon5
	.globl gText_Rom_271142
gText_Rom_271142: @ 0x08271142
	.string "あっれー\n{PLAYER}{KUN} じゃない げんき?\lオレは あいかわらず いそがしくてさ!\pポケモンも がんばりたいんだ けど\nどいつを つかうかも きまんなくてねー\pあのさ!\n{STR_VAR_1}って つよそう じゃん?\lでも {STR_VAR_2}も すてがたいよねー\p{PLAYER}{KUN} アドバイス してよ!\nどっちの ポケモンが イイかな?$"
	.if (. - gText_Rom_271142) > 0x93
	.error "gText_Rom_271142 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271142) < 0x93
	.space 0x93 - (. - gText_Rom_271142)
	.endif
