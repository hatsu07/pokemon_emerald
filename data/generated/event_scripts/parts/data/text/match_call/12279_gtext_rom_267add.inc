	@ data/text/match_call.inc:319 MatchCall_PersonalizedText36
	.globl gText_Rom_267ADD
gText_Rom_267ADD: @ 0x08267ADD
	.string "よお! トライアスロンの まっさいちゅうの\n{STR_VAR_1}だけど\lさくっと せけんばなし でも どうだい!\pポケモンと いっしょに あせを ながすと\nすごく きもちいいぜ!\lことばに ださなくったって\lふたりの こころが つうじあうんだ\lあれは ちょっと かんどう するなあ!\pはあはあ… はしりながら はなしてたら\nたいりょくが なくなった!\lはあはあ わるいけど こんどな!$"
	.if (. - gText_Rom_267ADD) > 0xb9
	.error "gText_Rom_267ADD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267ADD) < 0xb9
	.space 0xb9 - (. - gText_Rom_267ADD)
	.endif
