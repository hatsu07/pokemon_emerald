
	@ data/text/tv.inc:403 gTVTodaysRivalTrainerText10
	@ Preserve exact byte length: internal terminator.
	.globl gTVTodaysRivalTrainerText10
gTVTodaysRivalTrainerText10: @ 0x0824F703
	.string "こんかいの トレーナーは\nげんざい れんらくせんに のっている\l{STR_VAR_1}さん です!\p{STR_VAR_1}さんは\nポケモン ずかんを {STR_VAR_2}ひき\lとうろく されていますねー!{EOS}{0xFF}"
	.if (. - gTVTodaysRivalTrainerText10) != 0x4e
	.error "gTVTodaysRivalTrainerText10 must retain its original byte length"
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gTVTextPointerTable_Entry158
gTVTextPointerTable_Entry158: @ 0x0824F751
	.string "バッジは　{0xFD}{0x02}こ\nかくとく　されていますよー！{EOS}"
	.if (. - gTVTextPointerTable_Entry158) > 0x18
	.error "gTVTextPointerTable_Entry158 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry158) < 0x18
	.space 0x18 - (. - gTVTextPointerTable_Entry158)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gTVTextPointerTable_Entry159
gTVTextPointerTable_Entry159: @ 0x0824F769
	.string "バッジは　まだ　1こも\nかくとく　されていませんねー！{EOS}"
	.if (. - gTVTextPointerTable_Entry159) > 0x1c
	.error "gTVTextPointerTable_Entry159 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry159) < 0x1c
	.space 0x1c - (. - gTVTextPointerTable_Entry159)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gTVTextPointerTable_Entry160
gTVTextPointerTable_Entry160: @ 0x0824F785
	.string "バトルフロンティアの　シンボルは\n1こも　かくとく　されていませんねー！{EOS}"
	.if (. - gTVTextPointerTable_Entry160) > 0x25
	.error "gTVTextPointerTable_Entry160 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry160) < 0x25
	.space 0x25 - (. - gTVTextPointerTable_Entry160)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gTVTextPointerTable_Entry161
gTVTextPointerTable_Entry161: @ 0x0824F7AA
	.string "バトルフロンティアの　シンボルは\nゴールドシンボルを　{0xFD}{0x02}こ\lシルバーシンボルを　{0xFD}{0x03}こ\lかくとく　されていますねー！{EOS}"
	.if (. - gTVTextPointerTable_Entry161) > 0x3c
	.error "gTVTextPointerTable_Entry161 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry161) < 0x3c
	.space 0x3c - (. - gTVTextPointerTable_Entry161)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gTVTextPointerTable_Entry162
gTVTextPointerTable_Entry162: @ 0x0824F7E6
	.string "バトルフロンティアでの\nバトルポイントは　げんざい\l{0xFD}{0x02}　BP　あつめていますねー！{EOS}"
	.if (. - gTVTextPointerTable_Entry162) > 0x2b
	.error "gTVTextPointerTable_Entry162 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry162) < 0x2b
	.space 0x2b - (. - gTVTextPointerTable_Entry162)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gTVTextPointerTable_Entry163
gTVTextPointerTable_Entry163: @ 0x0824F811
	.string "{0xFD}{0x02}さんの　ようすは\nみなさんと　くらべて　いかが　でしたか？\pまだまだ　ぼうけんは　つづきます\pトレーナーの　みなさん！\pライバルたちに　まけずに\nがんばって　くださいねー！{EOS}"
	.if (. - gTVTextPointerTable_Entry163) > 0x59
	.error "gTVTextPointerTable_Entry163 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry163) < 0x59
	.space 0x59 - (. - gTVTextPointerTable_Entry163)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gTVTextPointerTable_Entry168
gTVTextPointerTable_Entry168: @ 0x0824F86A
	.string "『ムロタウン\n　りゅうこう　じょうほうきょく』\pしかい『さあ　きょうも　ムロタウンの\nりゅうこうを　いちはやく　おとどけします\pゲストは　ムロタウン　いち\nものしり　という　この　おじいさんです！\pろうじん『……ふむ　よろしくじゃ\pしかい『さっそく　ですが　ムロタウンで\nいま　はやっている　ことと　いえば……\pろうじん『{0xFD}{0x02}　{0xFD}{0x03}\pしかい『{0xFD}{0x02}　{0xFD}{0x03}\n……ですか？\pろうじん『……いいや！\n{0xFD}{0x02}　{0xFD}{0x03}　は\lまったく　はやらんかった　のじゃ……\lこの　はなし　ききたいか　のう……？\pしかい『いや　いまの　りゅうこうを……{EOS}"
	.if (. - gTVTextPointerTable_Entry168) > 0x106
	.error "gTVTextPointerTable_Entry168 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry168) < 0x106
	.space 0x106 - (. - gTVTextPointerTable_Entry168)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gTVTextPointerTable_Entry169
gTVTextPointerTable_Entry169: @ 0x0824F970
	.string "ろうじん『{0xFD}{0x02}　{0xFD}{0x03}　は\nミシロから　きた　{0xFD}{0x04}くんが\lおしえて　くれたの　じゃがのう……{EOS}"
	.if (. - gTVTextPointerTable_Entry169) > 0x2e
	.error "gTVTextPointerTable_Entry169 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry169) < 0x2e
	.space 0x2e - (. - gTVTextPointerTable_Entry169)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gTVTextPointerTable_Entry170
gTVTextPointerTable_Entry170: @ 0x0824F99E
	.string "ろうじん『{0xFD}{0x02}　{0xFD}{0x03}　は\nミシロから　きた　{0xFD}{0x04}ちゃんが\lおしえて　くれたの　じゃがのう……{EOS}"
	.if (. - gTVTextPointerTable_Entry170) > 0x2f
	.error "gTVTextPointerTable_Entry170 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry170) < 0x2f
	.space 0x2f - (. - gTVTextPointerTable_Entry170)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gTVTextPointerTable_Entry171
gTVTextPointerTable_Entry171: @ 0x0824F9CD
	.string "まったく　ダメ　じゃった……\p{0xFD}{0x02}　{0xFD}{0x03}　まつり！\p{0xFD}{0x02}　{0xFD}{0x03}　たいかい！\pわしも　みんなに　いっしょうけんめい\nおしえたの　じゃがのう……\p「{0xFD}{0x02}」が　わるかったのか　のう……\pしかい『……すいませんが\nいまの　りゅうこうを……{EOS}"
	.if (. - gTVTextPointerTable_Entry171) > 0x74
	.error "gTVTextPointerTable_Entry171 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry171) < 0x74
	.space 0x74 - (. - gTVTextPointerTable_Entry171)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gTVTextPointerTable_Entry172
gTVTextPointerTable_Entry172: @ 0x0824FA41
	.string "ろうじん『{0xFD}{0x04}くん！\n{0xFD}{0x02}　{0xFD}{0x03}　より\lすごい　こと　また　おしえて　おくれー{EOS}"
	.if (. - gTVTextPointerTable_Entry172) > 0x28
	.error "gTVTextPointerTable_Entry172 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry172) < 0x28
	.space 0x28 - (. - gTVTextPointerTable_Entry172)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gTVTextPointerTable_Entry173
gTVTextPointerTable_Entry173: @ 0x0824FA69
	.string "ろうじん『{0xFD}{0x04}ちゃん！\n{0xFD}{0x02}　{0xFD}{0x03}　より\lすごい　こと　また　おしえて　おくれー{EOS}"
	.if (. - gTVTextPointerTable_Entry173) > 0x29
	.error "gTVTextPointerTable_Entry173 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry173) < 0x29
	.space 0x29 - (. - gTVTextPointerTable_Entry173)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gTVTextPointerTable_Entry174
gTVTextPointerTable_Entry174: @ 0x0824FA92
	.string "しかい『……えーと　……はい！　ということで\n{0xFD}{0x02}　{0xFD}{0x03}　は……\lムロタウンで　はやらなかった！\p……いじょうを　おつたえしました\pろうじん『{0xFD}{0x02}　{0xFD}{0x03}{EOS}"
	.if (. - gTVTextPointerTable_Entry174) > 0x4d
	.error "gTVTextPointerTable_Entry174 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry174) < 0x4d
	.space 0x4d - (. - gTVTextPointerTable_Entry174)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+20 aliases)
	.globl gTVTextPointerTable_Entry175
gTVTextPointerTable_Entry175: @ 0x0824FADF
	.string "『ホウエン　おたから　たんていだん！』\pみんなー！\nかくしアイテム　みつけてるー！？\pきょうも　かくちで　もくげき　された\nひみつの　じょうほうを　しょうかい　するよ！\pきょうの　おてがみは\n「{0xFD}{0x02}　はっけん！」に\lついてだよー！！{EOS}"
	.if (. - gTVTextPointerTable_Entry175) > 0x75
	.error "gTVTextPointerTable_Entry175 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry175) < 0x75
	.space 0x75 - (. - gTVTextPointerTable_Entry175)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+20 aliases)
	.globl gTVTextPointerTable_Entry176
gTVTextPointerTable_Entry176: @ 0x0824FB54
	.string "さっそく　よんでみるねー！\p……たんていだんの　みなさん　こんにちは\pこの　あいだ　{0xFD}{0x03}さんが\n「{0xFD}{0x04}」で　なんと！\l「{0xFD}{0x02}」を　みつけて　いました\lもう　とっても　うらやましかったです\p……やったね！　{0xFD}{0x03}さん！\pテレビの　まえの　みんなも　まけずに\nダウジングマシンを　つかって　さがしてね！\pきみの　とっておきの　じょうほう\nまってるよー！{EOS}"
	.if (. - gTVTextPointerTable_Entry176) > 0xae
	.error "gTVTextPointerTable_Entry176 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry176) < 0xae
	.space 0xae - (. - gTVTextPointerTable_Entry176)
	.endif
