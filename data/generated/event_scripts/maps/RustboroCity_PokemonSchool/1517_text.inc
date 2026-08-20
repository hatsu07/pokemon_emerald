	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:247 RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut
	.globl gText_Rom_203274
gText_Rom_203274: @ 0x08203274
	.string "おや? きみとは たしか\nトウカシティで あった きがするね\pわたしの なまえは エニシダ\pポケモンしょうぶの さいのうを もった\nゆうしゅうな じんざいを もとめて\lかくちを たびして いるのさ\pスクールを のぞきにきた ということは\nきみも トレーナー?\pならば まずは いあいぎりを\nポケモンに おぼえさせると いいね!\pいあいぎりは たしか このまちの\nだれかが もっていた はずだよ{EOS}"
	.if (. - gText_Rom_203274) > 0xc5
	.error "gText_Rom_203274 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203274) < 0xc5
	.space 0xc5 - (. - gText_Rom_203274)
	.endif
