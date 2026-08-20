
	@ data/text/tv.inc:403 gTVTodaysRivalTrainerText10
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_24F703
gText_Rom_24F703: @ 0x0824F703
	.string "こんかいの トレーナーは\nげんざい れんらくせんに のっている\l{STR_VAR_1}さん です!\p{STR_VAR_1}さんは\nポケモン ずかんを {STR_VAR_2}ひき\lとうろく されていますねー!{EOS}{0xFF}"
	.if (. - gText_Rom_24F703) != 0x4e
	.error "gText_Rom_24F703 must retain its original byte length"
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F751
gText_Rom_24F751: @ 0x0824F751
	.string "バッジは　{0xFD}{0x02}こ\nかくとく　されていますよー！{EOS}"
	.if (. - gText_Rom_24F751) > 0x18
	.error "gText_Rom_24F751 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F751) < 0x18
	.space 0x18 - (. - gText_Rom_24F751)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F769
gText_Rom_24F769: @ 0x0824F769
	.string "バッジは　まだ　1こも\nかくとく　されていませんねー！{EOS}"
	.if (. - gText_Rom_24F769) > 0x1c
	.error "gText_Rom_24F769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F769) < 0x1c
	.space 0x1c - (. - gText_Rom_24F769)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F785
gText_Rom_24F785: @ 0x0824F785
	.string "バトルフロンティアの　シンボルは\n1こも　かくとく　されていませんねー！{EOS}"
	.if (. - gText_Rom_24F785) > 0x25
	.error "gText_Rom_24F785 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F785) < 0x25
	.space 0x25 - (. - gText_Rom_24F785)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F7AA
gText_Rom_24F7AA: @ 0x0824F7AA
	.string "バトルフロンティアの　シンボルは\nゴールドシンボルを　{0xFD}{0x02}こ\lシルバーシンボルを　{0xFD}{0x03}こ\lかくとく　されていますねー！{EOS}"
	.if (. - gText_Rom_24F7AA) > 0x3c
	.error "gText_Rom_24F7AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F7AA) < 0x3c
	.space 0x3c - (. - gText_Rom_24F7AA)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F7E6
gText_Rom_24F7E6: @ 0x0824F7E6
	.string "バトルフロンティアでの\nバトルポイントは　げんざい\l{0xFD}{0x02}　BP　あつめていますねー！{EOS}"
	.if (. - gText_Rom_24F7E6) > 0x2b
	.error "gText_Rom_24F7E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F7E6) < 0x2b
	.space 0x2b - (. - gText_Rom_24F7E6)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F811
gText_Rom_24F811: @ 0x0824F811
	.string "{0xFD}{0x02}さんの　ようすは\nみなさんと　くらべて　いかが　でしたか？\pまだまだ　ぼうけんは　つづきます\pトレーナーの　みなさん！\pライバルたちに　まけずに\nがんばって　くださいねー！{EOS}"
	.if (. - gText_Rom_24F811) > 0x59
	.error "gText_Rom_24F811 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F811) < 0x59
	.space 0x59 - (. - gText_Rom_24F811)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24F86A
gText_Rom_24F86A: @ 0x0824F86A
	.string "『ムロタウン\n　りゅうこう　じょうほうきょく』\pしかい『さあ　きょうも　ムロタウンの\nりゅうこうを　いちはやく　おとどけします\pゲストは　ムロタウン　いち\nものしり　という　この　おじいさんです！\pろうじん『……ふむ　よろしくじゃ\pしかい『さっそく　ですが　ムロタウンで\nいま　はやっている　ことと　いえば……\pろうじん『{0xFD}{0x02}　{0xFD}{0x03}\pしかい『{0xFD}{0x02}　{0xFD}{0x03}\n……ですか？\pろうじん『……いいや！\n{0xFD}{0x02}　{0xFD}{0x03}　は\lまったく　はやらんかった　のじゃ……\lこの　はなし　ききたいか　のう……？\pしかい『いや　いまの　りゅうこうを……{EOS}"
	.if (. - gText_Rom_24F86A) > 0x106
	.error "gText_Rom_24F86A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F86A) < 0x106
	.space 0x106 - (. - gText_Rom_24F86A)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24F970
gText_Rom_24F970: @ 0x0824F970
	.string "ろうじん『{0xFD}{0x02}　{0xFD}{0x03}　は\nミシロから　きた　{0xFD}{0x04}くんが\lおしえて　くれたの　じゃがのう……{EOS}"
	.if (. - gText_Rom_24F970) > 0x2e
	.error "gText_Rom_24F970 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F970) < 0x2e
	.space 0x2e - (. - gText_Rom_24F970)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24F99E
gText_Rom_24F99E: @ 0x0824F99E
	.string "ろうじん『{0xFD}{0x02}　{0xFD}{0x03}　は\nミシロから　きた　{0xFD}{0x04}ちゃんが\lおしえて　くれたの　じゃがのう……{EOS}"
	.if (. - gText_Rom_24F99E) > 0x2f
	.error "gText_Rom_24F99E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F99E) < 0x2f
	.space 0x2f - (. - gText_Rom_24F99E)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24F9CD
gText_Rom_24F9CD: @ 0x0824F9CD
	.string "まったく　ダメ　じゃった……\p{0xFD}{0x02}　{0xFD}{0x03}　まつり！\p{0xFD}{0x02}　{0xFD}{0x03}　たいかい！\pわしも　みんなに　いっしょうけんめい\nおしえたの　じゃがのう……\p「{0xFD}{0x02}」が　わるかったのか　のう……\pしかい『……すいませんが\nいまの　りゅうこうを……{EOS}"
	.if (. - gText_Rom_24F9CD) > 0x74
	.error "gText_Rom_24F9CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F9CD) < 0x74
	.space 0x74 - (. - gText_Rom_24F9CD)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24FA41
gText_Rom_24FA41: @ 0x0824FA41
	.string "ろうじん『{0xFD}{0x04}くん！\n{0xFD}{0x02}　{0xFD}{0x03}　より\lすごい　こと　また　おしえて　おくれー{EOS}"
	.if (. - gText_Rom_24FA41) > 0x28
	.error "gText_Rom_24FA41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FA41) < 0x28
	.space 0x28 - (. - gText_Rom_24FA41)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24FA69
gText_Rom_24FA69: @ 0x0824FA69
	.string "ろうじん『{0xFD}{0x04}ちゃん！\n{0xFD}{0x02}　{0xFD}{0x03}　より\lすごい　こと　また　おしえて　おくれー{EOS}"
	.if (. - gText_Rom_24FA69) > 0x29
	.error "gText_Rom_24FA69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FA69) < 0x29
	.space 0x29 - (. - gText_Rom_24FA69)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24FA92
gText_Rom_24FA92: @ 0x0824FA92
	.string "しかい『……えーと　……はい！　ということで\n{0xFD}{0x02}　{0xFD}{0x03}　は……\lムロタウンで　はやらなかった！\p……いじょうを　おつたえしました\pろうじん『{0xFD}{0x02}　{0xFD}{0x03}{EOS}"
	.if (. - gText_Rom_24FA92) > 0x4d
	.error "gText_Rom_24FA92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FA92) < 0x4d
	.space 0x4d - (. - gText_Rom_24FA92)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+20 aliases)
	.globl gText_Rom_24FADF
gText_Rom_24FADF: @ 0x0824FADF
	.string "『ホウエン　おたから　たんていだん！』\pみんなー！\nかくしアイテム　みつけてるー！？\pきょうも　かくちで　もくげき　された\nひみつの　じょうほうを　しょうかい　するよ！\pきょうの　おてがみは\n「{0xFD}{0x02}　はっけん！」に\lついてだよー！！{EOS}"
	.if (. - gText_Rom_24FADF) > 0x75
	.error "gText_Rom_24FADF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FADF) < 0x75
	.space 0x75 - (. - gText_Rom_24FADF)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+20 aliases)
	.globl gText_Rom_24FB54
gText_Rom_24FB54: @ 0x0824FB54
	.string "さっそく　よんでみるねー！\p……たんていだんの　みなさん　こんにちは\pこの　あいだ　{0xFD}{0x03}さんが\n「{0xFD}{0x04}」で　なんと！\l「{0xFD}{0x02}」を　みつけて　いました\lもう　とっても　うらやましかったです\p……やったね！　{0xFD}{0x03}さん！\pテレビの　まえの　みんなも　まけずに\nダウジングマシンを　つかって　さがしてね！\pきみの　とっておきの　じょうほう\nまってるよー！{EOS}"
	.if (. - gText_Rom_24FB54) > 0xae
	.error "gText_Rom_24FB54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FB54) < 0xae
	.space 0xae - (. - gText_Rom_24FB54)
	.endif
