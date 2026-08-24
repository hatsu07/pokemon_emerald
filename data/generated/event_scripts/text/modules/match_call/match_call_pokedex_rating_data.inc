	@ data/text/pokedex_rating.inc:1 gBirchDexRatingText_AreYouCurious
	.globl gBirchDexRatingText_AreYouCurious
gBirchDexRatingText_AreYouCurious: @ 0x08262DF5
	.string "オダマキ『おお {PLAYER}{KUN}!\pポケモンずかんの ようすを\nみせて くれるのかい?{EOS}"
	.if (. - gBirchDexRatingText_AreYouCurious) > 0x28
	.error "gBirchDexRatingText_AreYouCurious may not grow beyond its original slot"
	.endif
	.if (. - gBirchDexRatingText_AreYouCurious) < 0x28
	.space 0x28 - (. - gBirchDexRatingText_AreYouCurious)
	.endif
	@ data/text/pokedex_rating.inc:4 gBirchDexRatingText_Cancel
	.globl gBirchDexRatingText_Cancel
gBirchDexRatingText_Cancel: @ 0x08262E1D
	.string "うん? みせるほど\nポケモンを つかまえて いないのか{EOS}"
	.if (. - gBirchDexRatingText_Cancel) > 0x1c
	.error "gBirchDexRatingText_Cancel may not grow beyond its original slot"
	.endif
	.if (. - gBirchDexRatingText_Cancel) < 0x1c
	.space 0x1c - (. - gBirchDexRatingText_Cancel)
	.endif
	@ data/text/pokedex_rating.inc:7 gBirchDexRatingText_SoYouveSeenAndCaught
	.globl gBirchDexRatingText_SoYouveSeenAndCaught
gBirchDexRatingText_SoYouveSeenAndCaught: @ 0x08262E39
	.string "ふむふむ……\pみつけた ポケモン {STR_VAR_1}\nつかまえた ポケモン {STR_VAR_2} か……{EOS}"
	.if (. - gBirchDexRatingText_SoYouveSeenAndCaught) > 0x26
	.error "gBirchDexRatingText_SoYouveSeenAndCaught may not grow beyond its original slot"
	.endif
	.if (. - gBirchDexRatingText_SoYouveSeenAndCaught) < 0x26
	.space 0x26 - (. - gBirchDexRatingText_SoYouveSeenAndCaught)
	.endif
	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262E5F
gText_Rom_262E5F: @ 0x08262E5F
	.string "もっと　くさむらに　はいって\nポケモンを　さがしてみると　いいな！{EOS}"
	.if (. - gText_Rom_262E5F) > 0x22
	.error "gText_Rom_262E5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262E5F) < 0x22
	.space 0x22 - (. - gText_Rom_262E5F)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262E81
gText_Rom_262E81: @ 0x08262E81
	.string "ちょうしが　でてきた　みたいだね\nでも　これからが　たいへん　なんだぞ！{EOS}"
	.if (. - gText_Rom_262E81) > 0x25
	.error "gText_Rom_262E81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262E81) < 0x25
	.space 0x25 - (. - gText_Rom_262E81)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262EA6
gText_Rom_262EA6: @ 0x08262EA6
	.string "きまった　ばしょでしか　みつからない\nポケモンは　しつこく　さがすしか　ないぞ！{EOS}"
	.if (. - gText_Rom_262EA6) > 0x29
	.error "gText_Rom_262EA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262EA6) < 0x29
	.space 0x29 - (. - gText_Rom_262EA6)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262ECF
gText_Rom_262ECF: @ 0x08262ECF
	.string "ボリュームは　まだまだ　だけど\nすこしは　ポケモンずかん　らしく　なったぞ{EOS}"
	.if (. - gText_Rom_262ECF) > 0x26
	.error "gText_Rom_262ECF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262ECF) < 0x26
	.space 0x26 - (. - gText_Rom_262ECF)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262EF5
gText_Rom_262EF5: @ 0x08262EF5
	.string "なかなか　いい　かんじ　だな！\nこの　ちょうしで　がんばって　くれよ{EOS}"
	.if (. - gText_Rom_262EF5) > 0x23
	.error "gText_Rom_262EF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262EF5) < 0x23
	.space 0x23 - (. - gText_Rom_262EF5)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262F18
gText_Rom_262F18: @ 0x08262F18
	.string "つりざおは　つかって　いるかな？\nうみにも　ポケモンは　たくさん　いるからな{EOS}"
	.if (. - gText_Rom_262F18) > 0x27
	.error "gText_Rom_262F18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262F18) < 0x27
	.space 0x27 - (. - gText_Rom_262F18)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262F3F
gText_Rom_262F3F: @ 0x08262F3F
	.string "ポケモンを　つかまえる　だけでなく\nしんか　させるのは　どうだい？{EOS}"
	.if (. - gText_Rom_262F3F) > 0x22
	.error "gText_Rom_262F3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262F3F) < 0x22
	.space 0x22 - (. - gText_Rom_262F3F)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262F61
gText_Rom_262F61: @ 0x08262F61
	.string "すばらしい　ポケモンずかんに　なりそうだ\nそんな　よかんが　して　たまらないね！{EOS}"
	.if (. - gText_Rom_262F61) > 0x29
	.error "gText_Rom_262F61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262F61) < 0x29
	.space 0x29 - (. - gText_Rom_262F61)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262F8A
gText_Rom_262F8A: @ 0x08262F8A
	.string "ここまで　あつめるとは……\nきみの　さいのうは　たいした　ものだよ！{EOS}"
	.if (. - gText_Rom_262F8A) > 0x23
	.error "gText_Rom_262F8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262F8A) < 0x23
	.space 0x23 - (. - gText_Rom_262F8A)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262FAD
gText_Rom_262FAD: @ 0x08262FAD
	.string "サファリゾーンには　いったかい？\nあそこでしか　つかまえられない\lポケモンも　いるって　はなし　だぞ！{EOS}"
	.if (. - gText_Rom_262FAD) > 0x34
	.error "gText_Rom_262FAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262FAD) < 0x34
	.space 0x34 - (. - gText_Rom_262FAD)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262FE1
gText_Rom_262FE1: @ 0x08262FE1
	.string "とうとう　100しゅるい　こえたのか！\nポケモンずかん　として　みごとな　もんだね！{EOS}"
	.if (. - gText_Rom_262FE1) > 0x2b
	.error "gText_Rom_262FE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262FE1) < 0x2b
	.space 0x2b - (. - gText_Rom_262FE1)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_26300C
gText_Rom_26300C: @ 0x0826300C
	.string "……そういえば　いわくだきを　つかうことで\nみつかる　ポケモンも　いたっけ{EOS}"
	.if (. - gText_Rom_26300C) > 0x26
	.error "gText_Rom_26300C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26300C) < 0x26
	.space 0x26 - (. - gText_Rom_26300C)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_263032
gText_Rom_263032: @ 0x08263032
	.string "ポケモンこうかん　すれば\nもっと　あつまるかも　しれないな{EOS}"
	.if (. - gText_Rom_263032) > 0x1e
	.error "gText_Rom_263032 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263032) < 0x1e
	.space 0x1e - (. - gText_Rom_263032)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_263050
gText_Rom_263050: @ 0x08263050
	.string "なんでも　なついていると\nしんか　する　ポケモンも　いるそうだよ！{EOS}"
	.if (. - gText_Rom_263050) > 0x22
	.error "gText_Rom_263050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263050) < 0x22
	.space 0x22 - (. - gText_Rom_263050)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_263072
gText_Rom_263072: @ 0x08263072
	.string "ホウエンちほう　には　こんなにも\nおおくの　ポケモンが　いたのか……{EOS}"
	.if (. - gText_Rom_263072) > 0x23
	.error "gText_Rom_263072 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263072) < 0x23
	.space 0x23 - (. - gText_Rom_263072)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_263095
gText_Rom_263095: @ 0x08263095
	.string "ときどき　たいりょうはっせい　する\nポケモンが　いるらしい\lその　チャンスを　のがさないようにな！{EOS}"
	.if (. - gText_Rom_263095) > 0x32
	.error "gText_Rom_263095 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263095) < 0x32
	.space 0x32 - (. - gText_Rom_263095)
	.endif
	.globl gText_Rom_2630C7
	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_2630C7
gText_Rom_2630C7: @ 0x082630C7
	.string "きみの　ずかんを　みれば\nホウエンちほうの　ポケモンの\lすべてが　わかるようだ！{EOS}"
	.if (. - gText_Rom_2630C7) > 0x29
	.error "gText_Rom_2630C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2630C7) < 0x29
	.space 0x29 - (. - gText_Rom_2630C7)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_2630F0
gText_Rom_2630F0: @ 0x082630F0
	.string "きみは　ポケモンはかせ　としても\nゆうしゅう　なんだな{EOS}"
	.if (. - gText_Rom_2630F0) > 0x1c
	.error "gText_Rom_2630F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2630F0) < 0x1c
	.space 0x1c - (. - gText_Rom_2630F0)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_26310C
gText_Rom_26310C: @ 0x0826310C
	.string "ここまで　ずかんが　できたら\nもはや　プロフェッショナル　だぞ！{EOS}"
	.if (. - gText_Rom_26310C) > 0x21
	.error "gText_Rom_26310C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26310C) < 0x21
	.space 0x21 - (. - gText_Rom_26310C)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_26312D
gText_Rom_26312D: @ 0x0826312D
	.string "いよいよ　かんせいに　ちかづいた！\nそんな　よかんが　してきたよ！{EOS}"
	.if (. - gText_Rom_26312D) > 0x22
	.error "gText_Rom_26312D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26312D) < 0x22
	.space 0x22 - (. - gText_Rom_26312D)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_26314F
gText_Rom_26314F: @ 0x0826314F
	.string "おめでとう！！\nポケモンずかんの　かんせい　だよ！！{EOS}"
	.if (. - gText_Rom_26314F) > 0x1b
	.error "gText_Rom_26314F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26314F) < 0x1b
	.space 0x1b - (. - gText_Rom_26314F)
	.endif
