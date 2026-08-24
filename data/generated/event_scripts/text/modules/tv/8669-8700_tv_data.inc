
	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252A17
gText_Rom_252A17: @ 0x08252A17
	.string "かいじょうが　もりあがっている　ときに\nふさわしい　アピールが　できません　でした\p{0xFD}{0x02}さんには　ながれを　よんで\nつぎこそ　かいじょうを　エキサイト　させて\lさいこうに　もりあげて　ほしいです"
	.byte EOS
	.if (. - gText_Rom_252A17) > 0x62
	.error "gText_Rom_252A17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252A17) < 0x62
	.space 0x62 - (. - gText_Rom_252A17)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252A79
gText_Rom_252A79: @ 0x08252A79
	.string "1じしんさで　いちばん　だったのに\n2じしんさの　アピールが　うまくいかず\lぎゃくてん　まけを　してしまいました\pきっと　いまごろ　{0xFD}{0x02}さんは\nアピールに　ついて\lべんきょう　していると　おもいます"
	.byte EOS
	.if (. - gText_Rom_252A79) > 0x64
	.error "gText_Rom_252A79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252A79) < 0x64
	.space 0x64 - (. - gText_Rom_252A79)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252ADD
gText_Rom_252ADD: @ 0x08252ADD
	.string "2じ　しんさの　アピールで　1ども\nかんきゃくが　もりあがり　ませんでした\pほかの　ポケモンの　ことは　きにせず\nもっと　かんきゃくに　むかって\lアピールをして　ほしいです"
	.byte EOS
	.if (. - gText_Rom_252ADD) > 0x57
	.error "gText_Rom_252ADD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252ADD) < 0x57
	.space 0x57 - (. - gText_Rom_252ADD)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252B34
gText_Rom_252B34: @ 0x08252B34
	.string "{0xFD}{0x02}さんの　{0xFD}{0x03}と\nちょっとの　さで　まけて　しまいました\pあと　すこしで　ゆうしょう　だったのに\nとっても　ざんねんです\pいまごろ　{0xFD}{0x04}さんは\nないていると　おもいます"
	.byte EOS
	.if (. - gText_Rom_252B34) > 0x56
	.error "gText_Rom_252B34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252B34) < 0x56
	.space 0x56 - (. - gText_Rom_252B34)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252B8A
gText_Rom_252B8A: @ 0x08252B8A
	.string "おなじ　アピールを　つづけて　しんさいんに\nがっかりされて　しまいました\pコンテストで　やっては　いけない\nミスを　したのが　いたかったですね\pいまごろ　{0xFD}{0x02}さんは\nじぶんを　せめていると　おもいます"
	.byte EOS
	.if (. - gText_Rom_252B8A) > 0x65
	.error "gText_Rom_252B8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252B8A) < 0x65
	.space 0x65 - (. - gText_Rom_252B8A)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252BEF
gText_Rom_252BEF: @ 0x08252BEF
	.string "{0xFD}{0x02}さん　なりに　がんばって\nいたのですが……\pけっかてきに　ビリに　なってしまいました\p{0xFD}{0x02}さんには　まけた　りゆうを\nかんがえて　つぎに　つなげて　ほしいです"
	.byte EOS
	.if (. - gText_Rom_252BEF) > 0x52
	.error "gText_Rom_252BEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252BEF) < 0x52
	.space 0x52 - (. - gText_Rom_252BEF)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252C41
gText_Rom_252C41: @ 0x08252C41
	.string "それでは　さいごに　みなさんと　ごいっしょに\n{0xFD}{0x02}さんと　{0xFD}{0x03}に\lひとこと　おくりたいと　おもいます\pしかい『みなさん　いいですかー？　せーの\pみんな『{0xFD}{0x02}さん！　{0xFD}{0x03}！\nコンテスト　ゆうしょう　おめでとうー！"
	.byte EOS
	.if (. - gText_Rom_252C41) > 0x6a
	.error "gText_Rom_252C41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252C41) < 0x6a
	.space 0x6a - (. - gText_Rom_252C41)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_252CAB
gText_Rom_252CAB: @ 0x08252CAB
	.string "『ポケモン　たいせん　そくほう！』\pさきほど　おこなわれた　ポケモンバトルの\nけっかを　おつたえします"
	.byte EOS
	.if (. - gText_Rom_252CAB) != 0x34
	.error "gText_Rom_252CAB must retain its original byte length"
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	.globl gText_Rom_252CDF
gText_Rom_252CDF: @ 0x08252CDF
	.string "{0xFD}{0x02}さん　たい\n{0xFD}{0x03}さんの　{0xFD}{0x04}バトルは……\p{0xFD}{0x02}さんが\nしょうり　しました！"
	.byte EOS
	.if (. - gText_Rom_252CDF) > 0x28
	.error "gText_Rom_252CDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252CDF) < 0x28
	.space 0x28 - (. - gText_Rom_252CDF)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	.globl gText_Rom_252D07
gText_Rom_252D07: @ 0x08252D07
	.string "バトルは　{0xFD}{0x02}さんの\n{0xFD}{0x03}が　{0xFD}{0x04}を　つかって\lだいかつやく　しました！"
	.byte EOS
	.if (. - gText_Rom_252D07) > 0x25
	.error "gText_Rom_252D07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252D07) < 0x25
	.space 0x25 - (. - gText_Rom_252D07)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	.globl gText_Rom_252D2C
gText_Rom_252D2C: @ 0x08252D2C
	.string "{0xFD}{0x02}さんに　とっては\n{0xFD}{0x03}が　ブレーキ　だったのが\lいたかった　ようです"
	.byte EOS
	.if (. - gText_Rom_252D2C) > 0x25
	.error "gText_Rom_252D2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252D2C) < 0x25
	.space 0x25 - (. - gText_Rom_252D2C)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_252D51
gText_Rom_252D51: @ 0x08252D51
	.string "しょうりを　おさめた\n{0xFD}{0x02}さん！\lおめでとう　ございました！\pやぶれて　しまった\n{0xFD}{0x03}さん！\lつぎは　がんばって　ください！\pいじょう\n『ポケモン　たいせん　そくほう！』　でした"
	.byte EOS
	.if (. - gText_Rom_252D51) != 0x5a
	.error "gText_Rom_252D51 must retain its original byte length"
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	.globl gText_Rom_252DAB
gText_Rom_252DAB: @ 0x08252DAB
	.string "{0xFD}{0x02}さん　チーム　たい\n{0xFD}{0x03}さん　チームの\lマルチバトルの　けっかは……\p{0xFD}{0x02}さん　チームが\nしょうり　しました"
	.byte EOS
	.if (. - gText_Rom_252DAB) > 0x39
	.error "gText_Rom_252DAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252DAB) < 0x39
	.space 0x39 - (. - gText_Rom_252DAB)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	.globl gText_Rom_252DE4
gText_Rom_252DE4: @ 0x08252DE4
	.string "バトルは　{0xFD}{0x02}さん　チームの\n{0xFD}{0x03}が　{0xFD}{0x04}を　つかって\lだいかつやく　しました！"
	.byte EOS
	.if (. - gText_Rom_252DE4) > 0x29
	.error "gText_Rom_252DE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252DE4) < 0x29
	.space 0x29 - (. - gText_Rom_252DE4)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+11 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_252E0D
gText_Rom_252E0D: @ 0x08252E0D
	.string "{0xFD}{0x03}さん　チームに　とっては\n{0xFD}{0x04}が　ブレーキ　だったのが\lいたかった　ようです\pしょうりを　おさめた\n{0xFD}{0x02}さん　チーム！\lおめでとう　ございました！\pやぶれて　しまった\n{0xFD}{0x03}さん　チーム！\lつぎこそ　がんばって　ください！\pいじょう\n『ポケモン　たいせん　そくほう！』　でした"
	.byte EOS
	.if (. - gText_Rom_252E0D) != 0x8c
	.error "gText_Rom_252E0D must retain its original byte length"
	.endif
