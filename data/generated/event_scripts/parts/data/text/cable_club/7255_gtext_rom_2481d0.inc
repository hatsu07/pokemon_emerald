	@ data/text/cable_club.inc:194 MossdeepCity_GameCorner_1F_Text_PokemonJumpInfo
	.globl gText_Rom_2481D0
gText_Rom_2481D0: @ 0x082481D0
	.string "「ミニポケモンでジャンプ」は\nツルの なわを Aボタンで\lタイミングよく とぶ ゲームです\pさんか できる ポケモンは\nたかさ 70センチくらい までの\lちいさい ポケモンに なります\pもぐっていたり とんでいたり する\nポケモンは ジャンプが\lじょうずに できないので\lざんねんながら さんか できません\pみんなの ジャンプの タイミングが\nピッタリ あえば\lよいことが ありますよ!$"
	.if (. - gText_Rom_2481D0) > 0xc2
	.error "gText_Rom_2481D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2481D0) < 0xc2
	.space 0xc2 - (. - gText_Rom_2481D0)
	.endif
