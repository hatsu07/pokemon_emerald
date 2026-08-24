	@ data/text/trainers.inc:151 Route103_Text_IsabelleIntro (+1 aliases)
	.globl Route103_Text_IsabelleIntro
Route103_Text_IsabelleIntro: @ 0x08259BE4
	.string "きゃあ ぶつかるわ!\nあぶないっ!"
	.byte EOS
	.if (. - Route103_Text_IsabelleIntro) > 0x12
	.error "Route103_Text_IsabelleIntro may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_IsabelleIntro) < 0x12
	.space 0x12 - (. - Route103_Text_IsabelleIntro)
	.endif
	@ data/text/trainers.inc:154 Route103_Text_IsabelleDefeated (+1 aliases)
	.globl Route103_Text_IsabelleDefeated
Route103_Text_IsabelleDefeated: @ 0x08259BF6
	.string "んん……"
	.byte EOS
	.if (. - Route103_Text_IsabelleDefeated) > 0x5
	.error "Route103_Text_IsabelleDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_IsabelleDefeated) < 0x5
	.space 0x5 - (. - Route103_Text_IsabelleDefeated)
	.endif
	@ data/text/trainers.inc:157 Route103_Text_IsabellePostBattle
	.globl Route103_Text_IsabellePostBattle
Route103_Text_IsabellePostBattle: @ 0x08259BFB
	.string "わたし およぎが へたで\nれんしゅう してたのよ……\lぶつかりそうに なって ゴメンね"
	.byte EOS
	.if (. - Route103_Text_IsabellePostBattle) > 0x2c
	.error "Route103_Text_IsabellePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_IsabellePostBattle) < 0x2c
	.space 0x2c - (. - Route103_Text_IsabellePostBattle)
	.endif
	@ data/text/trainers.inc:160 Route103_Text_RhettIntro (+1 aliases)
	.globl Route103_Text_RhettIntro
Route103_Text_RhettIntro: @ 0x08259C27
	.string "うぉっ!\nなぜ こんな せまいところに!?"
	.byte EOS
	.if (. - Route103_Text_RhettIntro) > 0x16
	.error "Route103_Text_RhettIntro may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_RhettIntro) < 0x16
	.space 0x16 - (. - Route103_Text_RhettIntro)
	.endif
	@ data/text/trainers.inc:163 Route103_Text_RhettDefeated (+1 aliases)
	.globl Route103_Text_RhettDefeated
Route103_Text_RhettDefeated: @ 0x08259C3D
	.string "うぉっ できる!"
	.byte EOS
	.if (. - Route103_Text_RhettDefeated) > 0x9
	.error "Route103_Text_RhettDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_RhettDefeated) < 0x9
	.space 0x9 - (. - Route103_Text_RhettDefeated)
	.endif
	@ data/text/trainers.inc:166 Route103_Text_RhettPostBattle
	.globl Route103_Text_RhettPostBattle
Route103_Text_RhettPostBattle: @ 0x08259C46
	.string "せまい ところが\nすき なのかい きみは?"
	.byte EOS
	.if (. - Route103_Text_RhettPostBattle) > 0x16
	.error "Route103_Text_RhettPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_RhettPostBattle) < 0x16
	.space 0x16 - (. - Route103_Text_RhettPostBattle)
	.endif
	@ data/text/trainers.inc:169 Route103_Text_MarcosIntro (+1 aliases)
	.globl Route103_Text_MarcosIntro
Route103_Text_MarcosIntro: @ 0x08259C5C
	.string "おれっちの ギターに さそわれて\nやって きたのかーい?"
	.byte EOS
	.if (. - Route103_Text_MarcosIntro) > 0x1d
	.error "Route103_Text_MarcosIntro may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MarcosIntro) < 0x1d
	.space 0x1d - (. - Route103_Text_MarcosIntro)
	.endif
	@ data/text/trainers.inc:172 Route103_Text_MarcosDefeated (+1 aliases)
	.globl Route103_Text_MarcosDefeated
Route103_Text_MarcosDefeated: @ 0x08259C79
	.string "おれっちの ひとりショーが だいなしだよ"
	.byte EOS
	.if (. - Route103_Text_MarcosDefeated) > 0x15
	.error "Route103_Text_MarcosDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MarcosDefeated) < 0x15
	.space 0x15 - (. - Route103_Text_MarcosDefeated)
	.endif
	@ data/text/trainers.inc:175 Route103_Text_MarcosPostBattle
	.globl Route103_Text_MarcosPostBattle
Route103_Text_MarcosPostBattle: @ 0x08259C8E
	.string "ひとの すくない ところで\nギターを ひいていたのに\lこんなにも あつまって きたぜ!\pぷ プロを めざして みるか!"
	.byte EOS
	.if (. - Route103_Text_MarcosPostBattle) > 0x3c
	.error "Route103_Text_MarcosPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MarcosPostBattle) < 0x3c
	.space 0x3c - (. - Route103_Text_MarcosPostBattle)
	.endif
	@ data/text/trainers.inc:178 Route104_Text_GinaIntro (+1 aliases)
	.globl Route104_Text_GinaIntro
Route104_Text_GinaIntro: @ 0x08259CCA
	.string "ナオ『よーし!\nあたしたちの ポケモンと たたかうです!"
	.byte EOS
	.if (. - Route104_Text_GinaIntro) > 0x1d
	.error "Route104_Text_GinaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_GinaIntro) < 0x1d
	.space 0x1d - (. - Route104_Text_GinaIntro)
	.endif
	@ data/text/trainers.inc:181 Route104_Text_GinaDefeat (+1 aliases)
	.globl Route104_Text_GinaDefeat
Route104_Text_GinaDefeat: @ 0x08259CE7
	.string "ナオ『まけて すごく くやしいです"
	.byte EOS
	.if (. - Route104_Text_GinaDefeat) > 0x12
	.error "Route104_Text_GinaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_GinaDefeat) < 0x12
	.space 0x12 - (. - Route104_Text_GinaDefeat)
	.endif
	@ data/text/trainers.inc:184 Route104_Text_GinaPostBattle
	.globl Route104_Text_GinaPostBattle
Route104_Text_GinaPostBattle: @ 0x08259CF9
	.string "ナオ『うわー {STR_VAR_1} つよいです!\nあたしたち もっと しゅぎょう するです"
	.byte EOS
	.if (. - Route104_Text_GinaPostBattle) > 0x26
	.error "Route104_Text_GinaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_GinaPostBattle) < 0x26
	.space 0x26 - (. - Route104_Text_GinaPostBattle)
	.endif
	@ data/text/trainers.inc:187 Route104_Text_GinaNotEnoughMons (+1 aliases)
	.globl Route104_Text_GinaNotEnoughMons
Route104_Text_GinaNotEnoughMons: @ 0x08259D1F
	.string "ナオ『あら? ポケモン 1ひき だけですか!\nじゃあ あたしたち たたかわない です!\pだって ポケモン 1ひき だけだと\nポケモンが さびしそうで かわいそう です!"
	.byte EOS
	.if (. - Route104_Text_GinaNotEnoughMons) > 0x55
	.error "Route104_Text_GinaNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_GinaNotEnoughMons) < 0x55
	.space 0x55 - (. - Route104_Text_GinaNotEnoughMons)
	.endif
	@ data/text/trainers.inc:190 Route104_Text_MiaIntro (+1 aliases)
	.globl Route104_Text_MiaIntro
Route104_Text_MiaIntro: @ 0x08259D74
	.string "ミオ『あたしたち ふたご だから\nポケモンしょうぶも いっしょに するです!"
	.byte EOS
	.if (. - Route104_Text_MiaIntro) > 0x27
	.error "Route104_Text_MiaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MiaIntro) < 0x27
	.space 0x27 - (. - Route104_Text_MiaIntro)
	.endif
	@ data/text/trainers.inc:193 Route104_Text_MiaDefeat (+1 aliases)
	.globl Route104_Text_MiaDefeat
Route104_Text_MiaDefeat: @ 0x08259D9B
	.string "ミオ『ふたりで しょうぶ したのに\nまけちゃったです……"
	.byte EOS
	.if (. - Route104_Text_MiaDefeat) > 0x1d
	.error "Route104_Text_MiaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MiaDefeat) < 0x1d
	.space 0x1d - (. - Route104_Text_MiaDefeat)
	.endif
	@ data/text/trainers.inc:196 Route104_Text_MiaPostBattle
	.globl Route104_Text_MiaPostBattle
Route104_Text_MiaPostBattle: @ 0x08259DB8
	.string "ミオ『もっと ポケモン そだてて\n{STR_VAR_1} みたいに つよく なるです!"
	.byte EOS
	.if (. - Route104_Text_MiaPostBattle) > 0x23
	.error "Route104_Text_MiaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MiaPostBattle) < 0x23
	.space 0x23 - (. - Route104_Text_MiaPostBattle)
	.endif
	@ data/text/trainers.inc:199 Route104_Text_MiaNotEnoughMons (+1 aliases)
	.globl Route104_Text_MiaNotEnoughMons
Route104_Text_MiaNotEnoughMons: @ 0x08259DDB
	.string "ミオ『あたしたちと たたかうですか?\pじゃあ ポケモンを\n2ひき つれてないと ダメですよ!\lだって あたしたち つよいもん!"
	.byte EOS
	.if (. - Route104_Text_MiaNotEnoughMons) > 0x40
	.error "Route104_Text_MiaNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MiaNotEnoughMons) < 0x40
	.space 0x40 - (. - Route104_Text_MiaNotEnoughMons)
	.endif
	@ data/text/trainers.inc:202 Route104_Text_IvanIntro (+1 aliases)
	.globl Route104_Text_IvanIntro
Route104_Text_IvanIntro: @ 0x08259E1B
	.string "みずポケモンの エキスパートとは\nなにを かくそう オレのこと!\p……え?\nしらないの?"
	.byte EOS
	.if (. - Route104_Text_IvanIntro) > 0x2d
	.error "Route104_Text_IvanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_IvanIntro) < 0x2d
	.space 0x2d - (. - Route104_Text_IvanIntro)
	.endif
	@ data/text/trainers.inc:205 Route104_Text_IvanDefeat (+1 aliases)
	.globl Route104_Text_IvanDefeat
Route104_Text_IvanDefeat: @ 0x08259E48
	.string "けっこう つよいと おもってたんだけどな\nじぶんのこと…… がっかり……"
	.byte EOS
	.if (. - Route104_Text_IvanDefeat) > 0x25
	.error "Route104_Text_IvanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_IvanDefeat) < 0x25
	.space 0x25 - (. - Route104_Text_IvanDefeat)
	.endif
	@ data/text/trainers.inc:208 Route104_Text_IvanPostBattle
	.globl Route104_Text_IvanPostBattle
Route104_Text_IvanPostBattle: @ 0x08259E6D
	.string "つりに むちゅうに なってて\nポケモン そだてるのを わすれてたよ……"
	.byte EOS
	.if (. - Route104_Text_IvanPostBattle) > 0x24
	.error "Route104_Text_IvanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_IvanPostBattle) < 0x24
	.space 0x24 - (. - Route104_Text_IvanPostBattle)
	.endif
	@ data/text/trainers.inc:211 Route104_Text_BillyIntro (+1 aliases)
	.globl Route104_Text_BillyIntro
Route104_Text_BillyIntro: @ 0x08259E91
	.string "すなはまに あしあと つけるのって\nたのしーよねー!"
	.byte EOS
	.if (. - Route104_Text_BillyIntro) > 0x1b
	.error "Route104_Text_BillyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BillyIntro) < 0x1b
	.space 0x1b - (. - Route104_Text_BillyIntro)
	.endif
	@ data/text/trainers.inc:214 Route104_Text_BillyDefeat (+1 aliases)
	.globl Route104_Text_BillyDefeat
Route104_Text_BillyDefeat: @ 0x08259EAC
	.string "うへーっ!\nクツに すなが はいって ジャリジャリする!"
	.byte EOS
	.if (. - Route104_Text_BillyDefeat) > 0x1d
	.error "Route104_Text_BillyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BillyDefeat) < 0x1d
	.space 0x1d - (. - Route104_Text_BillyDefeat)
	.endif
	@ data/text/trainers.inc:218 Route104_Text_BillyPostBattle
	.globl Route104_Text_BillyPostBattle
Route104_Text_BillyPostBattle: @ 0x08259EC9
	.string "すなはまを ボクの あしあとで\nいっぱいに したいんだけど\lすぐに きえちゃうんだよなぁ"
	.byte EOS
	.if (. - Route104_Text_BillyPostBattle) > 0x2d
	.error "Route104_Text_BillyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BillyPostBattle) < 0x2d
	.space 0x2d - (. - Route104_Text_BillyPostBattle)
	.endif
	@ data/text/trainers.inc:221 Route104_Text_HaleyIntro (+1 aliases)
	.globl Route104_Text_HaleyIntro
Route104_Text_HaleyIntro: @ 0x08259EF6
	.string "しょうぶ しようかな……\nやめとこうかな……\pえーい! たたかっちゃえ!"
	.byte EOS
	.if (. - Route104_Text_HaleyIntro) > 0x25
	.error "Route104_Text_HaleyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_HaleyIntro) < 0x25
	.space 0x25 - (. - Route104_Text_HaleyIntro)
	.endif
	@ data/text/trainers.inc:224 Route104_Text_HaleyDefeat (+1 aliases)
	.globl Route104_Text_HaleyDefeat
Route104_Text_HaleyDefeat: @ 0x08259F1B
	.string "たたかわなければ よかったかな……"
	.byte EOS
	.if (. - Route104_Text_HaleyDefeat) > 0x12
	.error "Route104_Text_HaleyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_HaleyDefeat) < 0x12
	.space 0x12 - (. - Route104_Text_HaleyDefeat)
	.endif
	@ data/text/trainers.inc:227 Route104_Text_HaleyPostBattle
	.globl Route104_Text_HaleyPostBattle
Route104_Text_HaleyPostBattle: @ 0x08259F2D
	.string "どっちに しようか まよってる とき\nじぶんで きめないで たにんに まかせると\lどっちに なっても こうかいするね……"
	.byte EOS
	.if (. - Route104_Text_HaleyPostBattle) > 0x3d
	.error "Route104_Text_HaleyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_HaleyPostBattle) < 0x3d
	.space 0x3d - (. - Route104_Text_HaleyPostBattle)
	.endif
	@ data/text/trainers.inc:230 Route104_Text_HaleyRegister1 (+1 aliases)
	.globl gText_Rom_259F6A
gText_Rom_259F6A: @ 0x08259F6A
	.string "あなた つよいけど\nポケナビに とうろく しようかな……\lやめとこうかな……\pえーい! とうろくしちゃえ!"
	.byte EOS
	.if (. - gText_Rom_259F6A) > 0x36
	.error "gText_Rom_259F6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259F6A) < 0x36
	.space 0x36 - (. - gText_Rom_259F6A)
	.endif
	@ data/text/trainers.inc:230 Route104_Text_HaleyRegister1 (+1 aliases)
	.globl gText_Rom_259FA0
gText_Rom_259FA0: @ 0x08259FA0
	.string "あなた つよいけど\nポケナビに とうろく しようかな……\lやめとこうかな……\pえーい! とうろくしちゃえ!"
	.byte EOS
	.if (. - gText_Rom_259FA0) > 0x36
	.error "gText_Rom_259FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259FA0) < 0x36
	.space 0x36 - (. - gText_Rom_259FA0)
	.endif
	@ data/text/trainers.inc:236 Route104_Text_HaleyRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route104_Text_HaleyRematchIntro
Route104_Text_HaleyRematchIntro: @ 0x08259FD6
	.string "あたしと しょうぶ してもらうわよ!"
	.byte EOS
	.if (. - Route104_Text_HaleyRematchIntro) != 0x13
	.error "Route104_Text_HaleyRematchIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:239 Route104_Text_HaleyRematchDefeat (+1 aliases)
	.globl Route104_Text_HaleyRematchDefeat
Route104_Text_HaleyRematchDefeat: @ 0x08259FE9
	.string "うーん……\nかてると おもったのにな"
	.byte EOS
	.if (. - Route104_Text_HaleyRematchDefeat) > 0x13
	.error "Route104_Text_HaleyRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_HaleyRematchDefeat) < 0x13
	.space 0x13 - (. - Route104_Text_HaleyRematchDefeat)
	.endif

	@ data/text/trainers.inc:242 Route104_Text_HaleyPostRematch
	.globl Route104_Text_HaleyPostRematch
Route104_Text_HaleyPostRematch: @ 0x08259FFC
	.string "たたかうって じぶんで きめたから\nまけても すっきり してるわ!\p……もちろん まけて くやしいけどね{EOS}"
	.if (. - Route104_Text_HaleyPostRematch) > 0x35
	.error "Route104_Text_HaleyPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_HaleyPostRematch) < 0x35
	.space 0x35 - (. - Route104_Text_HaleyPostRematch)
	.endif
