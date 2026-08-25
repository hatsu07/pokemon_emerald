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
	.globl gMatchCallPokedexRatingText_Level00
gMatchCallPokedexRatingText_Level00: @ 0x08262E5F
	.string "もっと　くさむらに　はいって\nポケモンを　さがしてみると　いいな！{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level00) > 0x22
	.error "gMatchCallPokedexRatingText_Level00 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level00) < 0x22
	.space 0x22 - (. - gMatchCallPokedexRatingText_Level00)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level01
gMatchCallPokedexRatingText_Level01: @ 0x08262E81
	.string "ちょうしが　でてきた　みたいだね\nでも　これからが　たいへん　なんだぞ！{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level01) > 0x25
	.error "gMatchCallPokedexRatingText_Level01 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level01) < 0x25
	.space 0x25 - (. - gMatchCallPokedexRatingText_Level01)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level02
gMatchCallPokedexRatingText_Level02: @ 0x08262EA6
	.string "きまった　ばしょでしか　みつからない\nポケモンは　しつこく　さがすしか　ないぞ！{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level02) > 0x29
	.error "gMatchCallPokedexRatingText_Level02 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level02) < 0x29
	.space 0x29 - (. - gMatchCallPokedexRatingText_Level02)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level03
gMatchCallPokedexRatingText_Level03: @ 0x08262ECF
	.string "ボリュームは　まだまだ　だけど\nすこしは　ポケモンずかん　らしく　なったぞ{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level03) > 0x26
	.error "gMatchCallPokedexRatingText_Level03 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level03) < 0x26
	.space 0x26 - (. - gMatchCallPokedexRatingText_Level03)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level04
gMatchCallPokedexRatingText_Level04: @ 0x08262EF5
	.string "なかなか　いい　かんじ　だな！\nこの　ちょうしで　がんばって　くれよ{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level04) > 0x23
	.error "gMatchCallPokedexRatingText_Level04 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level04) < 0x23
	.space 0x23 - (. - gMatchCallPokedexRatingText_Level04)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level05
gMatchCallPokedexRatingText_Level05: @ 0x08262F18
	.string "つりざおは　つかって　いるかな？\nうみにも　ポケモンは　たくさん　いるからな{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level05) > 0x27
	.error "gMatchCallPokedexRatingText_Level05 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level05) < 0x27
	.space 0x27 - (. - gMatchCallPokedexRatingText_Level05)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level06
gMatchCallPokedexRatingText_Level06: @ 0x08262F3F
	.string "ポケモンを　つかまえる　だけでなく\nしんか　させるのは　どうだい？{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level06) > 0x22
	.error "gMatchCallPokedexRatingText_Level06 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level06) < 0x22
	.space 0x22 - (. - gMatchCallPokedexRatingText_Level06)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level07
gMatchCallPokedexRatingText_Level07: @ 0x08262F61
	.string "すばらしい　ポケモンずかんに　なりそうだ\nそんな　よかんが　して　たまらないね！{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level07) > 0x29
	.error "gMatchCallPokedexRatingText_Level07 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level07) < 0x29
	.space 0x29 - (. - gMatchCallPokedexRatingText_Level07)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level08
gMatchCallPokedexRatingText_Level08: @ 0x08262F8A
	.string "ここまで　あつめるとは……\nきみの　さいのうは　たいした　ものだよ！{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level08) > 0x23
	.error "gMatchCallPokedexRatingText_Level08 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level08) < 0x23
	.space 0x23 - (. - gMatchCallPokedexRatingText_Level08)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level09
gMatchCallPokedexRatingText_Level09: @ 0x08262FAD
	.string "サファリゾーンには　いったかい？\nあそこでしか　つかまえられない\lポケモンも　いるって　はなし　だぞ！{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level09) > 0x34
	.error "gMatchCallPokedexRatingText_Level09 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level09) < 0x34
	.space 0x34 - (. - gMatchCallPokedexRatingText_Level09)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level10
gMatchCallPokedexRatingText_Level10: @ 0x08262FE1
	.string "とうとう　100しゅるい　こえたのか！\nポケモンずかん　として　みごとな　もんだね！{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level10) > 0x2b
	.error "gMatchCallPokedexRatingText_Level10 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level10) < 0x2b
	.space 0x2b - (. - gMatchCallPokedexRatingText_Level10)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level11
gMatchCallPokedexRatingText_Level11: @ 0x0826300C
	.string "……そういえば　いわくだきを　つかうことで\nみつかる　ポケモンも　いたっけ{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level11) > 0x26
	.error "gMatchCallPokedexRatingText_Level11 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level11) < 0x26
	.space 0x26 - (. - gMatchCallPokedexRatingText_Level11)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level12
gMatchCallPokedexRatingText_Level12: @ 0x08263032
	.string "ポケモンこうかん　すれば\nもっと　あつまるかも　しれないな{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level12) > 0x1e
	.error "gMatchCallPokedexRatingText_Level12 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level12) < 0x1e
	.space 0x1e - (. - gMatchCallPokedexRatingText_Level12)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level13
gMatchCallPokedexRatingText_Level13: @ 0x08263050
	.string "なんでも　なついていると\nしんか　する　ポケモンも　いるそうだよ！{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level13) > 0x22
	.error "gMatchCallPokedexRatingText_Level13 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level13) < 0x22
	.space 0x22 - (. - gMatchCallPokedexRatingText_Level13)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level14
gMatchCallPokedexRatingText_Level14: @ 0x08263072
	.string "ホウエンちほう　には　こんなにも\nおおくの　ポケモンが　いたのか……{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level14) > 0x23
	.error "gMatchCallPokedexRatingText_Level14 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level14) < 0x23
	.space 0x23 - (. - gMatchCallPokedexRatingText_Level14)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level15
gMatchCallPokedexRatingText_Level15: @ 0x08263095
	.string "ときどき　たいりょうはっせい　する\nポケモンが　いるらしい\lその　チャンスを　のがさないようにな！{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level15) > 0x32
	.error "gMatchCallPokedexRatingText_Level15 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level15) < 0x32
	.space 0x32 - (. - gMatchCallPokedexRatingText_Level15)
	.endif
	.globl gMatchCallPokedexRatingText_Level16
	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level16
gMatchCallPokedexRatingText_Level16: @ 0x082630C7
	.string "きみの　ずかんを　みれば\nホウエンちほうの　ポケモンの\lすべてが　わかるようだ！{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level16) > 0x29
	.error "gMatchCallPokedexRatingText_Level16 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level16) < 0x29
	.space 0x29 - (. - gMatchCallPokedexRatingText_Level16)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level17
gMatchCallPokedexRatingText_Level17: @ 0x082630F0
	.string "きみは　ポケモンはかせ　としても\nゆうしゅう　なんだな{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level17) > 0x1c
	.error "gMatchCallPokedexRatingText_Level17 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level17) < 0x1c
	.space 0x1c - (. - gMatchCallPokedexRatingText_Level17)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level18
gMatchCallPokedexRatingText_Level18: @ 0x0826310C
	.string "ここまで　ずかんが　できたら\nもはや　プロフェッショナル　だぞ！{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level18) > 0x21
	.error "gMatchCallPokedexRatingText_Level18 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level18) < 0x21
	.space 0x21 - (. - gMatchCallPokedexRatingText_Level18)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level19
gMatchCallPokedexRatingText_Level19: @ 0x0826312D
	.string "いよいよ　かんせいに　ちかづいた！\nそんな　よかんが　してきたよ！{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level19) > 0x22
	.error "gMatchCallPokedexRatingText_Level19 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level19) < 0x22
	.space 0x22 - (. - gMatchCallPokedexRatingText_Level19)
	.endif

	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gMatchCallPokedexRatingText_Level20
gMatchCallPokedexRatingText_Level20: @ 0x0826314F
	.string "おめでとう！！\nポケモンずかんの　かんせい　だよ！！{EOS}"
	.if (. - gMatchCallPokedexRatingText_Level20) > 0x1b
	.error "gMatchCallPokedexRatingText_Level20 may not grow beyond its original slot"
	.endif
	.if (. - gMatchCallPokedexRatingText_Level20) < 0x1b
	.space 0x1b - (. - gMatchCallPokedexRatingText_Level20)
	.endif
