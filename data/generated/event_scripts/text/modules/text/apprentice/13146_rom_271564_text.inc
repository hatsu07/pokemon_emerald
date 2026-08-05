	@ data/text/apprentice.inc:637 gText_ApprenticeWhichMon10
	.globl gText_Rom_271564
gText_Rom_271564: @ 0x08271564
	.string "{PLAYER}{KUN} たいへんだ たいへんだ!\nまぼろしの ポケモン つかまえちゃった!\l……なんて うそさ! わっはっは\pじつは おいら ポケモン つかまえるの\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ おいらの ポケモン\lどいつを つかまえたら いいか\lししょうが きめて くれない かな?\pどっちが いいかな?\n{STR_VAR_1}と {STR_VAR_2}だと……$"
	.if (. - gText_Rom_271564) > 0xa9
	.error "gText_Rom_271564 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271564) < 0xa9
	.space 0xa9 - (. - gText_Rom_271564)
	.endif
