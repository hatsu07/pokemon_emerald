	@ data/text/trainers.inc:151 Route103_Text_IsabelleIntro (+1 aliases)
	.globl gText_Rom_259BE4
gText_Rom_259BE4: @ 0x08259BE4
	.string "きゃあ ぶつかるわ!\nあぶないっ!"
	.byte EOS
	.if (. - gText_Rom_259BE4) > 0x12
	.error "gText_Rom_259BE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259BE4) < 0x12
	.space 0x12 - (. - gText_Rom_259BE4)
	.endif
	@ data/text/trainers.inc:154 Route103_Text_IsabelleDefeated (+1 aliases)
	.globl gText_Rom_259BF6
gText_Rom_259BF6: @ 0x08259BF6
	.string "んん……"
	.byte EOS
	.if (. - gText_Rom_259BF6) > 0x5
	.error "gText_Rom_259BF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259BF6) < 0x5
	.space 0x5 - (. - gText_Rom_259BF6)
	.endif
	@ data/text/trainers.inc:157 Route103_Text_IsabellePostBattle
	.globl gText_Rom_259BFB
gText_Rom_259BFB: @ 0x08259BFB
	.string "わたし およぎが へたで\nれんしゅう してたのよ……\lぶつかりそうに なって ゴメンね"
	.byte EOS
	.if (. - gText_Rom_259BFB) > 0x2c
	.error "gText_Rom_259BFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259BFB) < 0x2c
	.space 0x2c - (. - gText_Rom_259BFB)
	.endif
	@ data/text/trainers.inc:160 Route103_Text_RhettIntro (+1 aliases)
	.globl gText_Rom_259C27
gText_Rom_259C27: @ 0x08259C27
	.string "うぉっ!\nなぜ こんな せまいところに!?"
	.byte EOS
	.if (. - gText_Rom_259C27) > 0x16
	.error "gText_Rom_259C27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259C27) < 0x16
	.space 0x16 - (. - gText_Rom_259C27)
	.endif
	@ data/text/trainers.inc:163 Route103_Text_RhettDefeated (+1 aliases)
	.globl gText_Rom_259C3D
gText_Rom_259C3D: @ 0x08259C3D
	.string "うぉっ できる!"
	.byte EOS
	.if (. - gText_Rom_259C3D) > 0x9
	.error "gText_Rom_259C3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259C3D) < 0x9
	.space 0x9 - (. - gText_Rom_259C3D)
	.endif
	@ data/text/trainers.inc:166 Route103_Text_RhettPostBattle
	.globl gText_Rom_259C46
gText_Rom_259C46: @ 0x08259C46
	.string "せまい ところが\nすき なのかい きみは?"
	.byte EOS
	.if (. - gText_Rom_259C46) > 0x16
	.error "gText_Rom_259C46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259C46) < 0x16
	.space 0x16 - (. - gText_Rom_259C46)
	.endif
	@ data/text/trainers.inc:169 Route103_Text_MarcosIntro (+1 aliases)
	.globl gText_Rom_259C5C
gText_Rom_259C5C: @ 0x08259C5C
	.string "おれっちの ギターに さそわれて\nやって きたのかーい?"
	.byte EOS
	.if (. - gText_Rom_259C5C) > 0x1d
	.error "gText_Rom_259C5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259C5C) < 0x1d
	.space 0x1d - (. - gText_Rom_259C5C)
	.endif
	@ data/text/trainers.inc:172 Route103_Text_MarcosDefeated (+1 aliases)
	.globl gText_Rom_259C79
gText_Rom_259C79: @ 0x08259C79
	.string "おれっちの ひとりショーが だいなしだよ"
	.byte EOS
	.if (. - gText_Rom_259C79) > 0x15
	.error "gText_Rom_259C79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259C79) < 0x15
	.space 0x15 - (. - gText_Rom_259C79)
	.endif
	@ data/text/trainers.inc:175 Route103_Text_MarcosPostBattle
	.globl gText_Rom_259C8E
gText_Rom_259C8E: @ 0x08259C8E
	.string "ひとの すくない ところで\nギターを ひいていたのに\lこんなにも あつまって きたぜ!\pぷ プロを めざして みるか!"
	.byte EOS
	.if (. - gText_Rom_259C8E) > 0x3c
	.error "gText_Rom_259C8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259C8E) < 0x3c
	.space 0x3c - (. - gText_Rom_259C8E)
	.endif
	@ data/text/trainers.inc:178 Route104_Text_GinaIntro (+1 aliases)
	.globl gText_Rom_259CCA
gText_Rom_259CCA: @ 0x08259CCA
	.string "ナオ『よーし!\nあたしたちの ポケモンと たたかうです!"
	.byte EOS
	.if (. - gText_Rom_259CCA) > 0x1d
	.error "gText_Rom_259CCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259CCA) < 0x1d
	.space 0x1d - (. - gText_Rom_259CCA)
	.endif
	@ data/text/trainers.inc:181 Route104_Text_GinaDefeat (+1 aliases)
	.globl gText_Rom_259CE7
gText_Rom_259CE7: @ 0x08259CE7
	.string "ナオ『まけて すごく くやしいです"
	.byte EOS
	.if (. - gText_Rom_259CE7) > 0x12
	.error "gText_Rom_259CE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259CE7) < 0x12
	.space 0x12 - (. - gText_Rom_259CE7)
	.endif
	@ data/text/trainers.inc:184 Route104_Text_GinaPostBattle
	.globl gText_Rom_259CF9
gText_Rom_259CF9: @ 0x08259CF9
	.string "ナオ『うわー {STR_VAR_1} つよいです!\nあたしたち もっと しゅぎょう するです"
	.byte EOS
	.if (. - gText_Rom_259CF9) > 0x26
	.error "gText_Rom_259CF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259CF9) < 0x26
	.space 0x26 - (. - gText_Rom_259CF9)
	.endif
	@ data/text/trainers.inc:187 Route104_Text_GinaNotEnoughMons (+1 aliases)
	.globl gText_Rom_259D1F
gText_Rom_259D1F: @ 0x08259D1F
	.string "ナオ『あら? ポケモン 1ひき だけですか!\nじゃあ あたしたち たたかわない です!\pだって ポケモン 1ひき だけだと\nポケモンが さびしそうで かわいそう です!"
	.byte EOS
	.if (. - gText_Rom_259D1F) > 0x55
	.error "gText_Rom_259D1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259D1F) < 0x55
	.space 0x55 - (. - gText_Rom_259D1F)
	.endif
	@ data/text/trainers.inc:190 Route104_Text_MiaIntro (+1 aliases)
	.globl gText_Rom_259D74
gText_Rom_259D74: @ 0x08259D74
	.string "ミオ『あたしたち ふたご だから\nポケモンしょうぶも いっしょに するです!"
	.byte EOS
	.if (. - gText_Rom_259D74) > 0x27
	.error "gText_Rom_259D74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259D74) < 0x27
	.space 0x27 - (. - gText_Rom_259D74)
	.endif
	@ data/text/trainers.inc:193 Route104_Text_MiaDefeat (+1 aliases)
	.globl gText_Rom_259D9B
gText_Rom_259D9B: @ 0x08259D9B
	.string "ミオ『ふたりで しょうぶ したのに\nまけちゃったです……"
	.byte EOS
	.if (. - gText_Rom_259D9B) > 0x1d
	.error "gText_Rom_259D9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259D9B) < 0x1d
	.space 0x1d - (. - gText_Rom_259D9B)
	.endif
	@ data/text/trainers.inc:196 Route104_Text_MiaPostBattle
	.globl gText_Rom_259DB8
gText_Rom_259DB8: @ 0x08259DB8
	.string "ミオ『もっと ポケモン そだてて\n{STR_VAR_1} みたいに つよく なるです!"
	.byte EOS
	.if (. - gText_Rom_259DB8) > 0x23
	.error "gText_Rom_259DB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259DB8) < 0x23
	.space 0x23 - (. - gText_Rom_259DB8)
	.endif
	@ data/text/trainers.inc:199 Route104_Text_MiaNotEnoughMons (+1 aliases)
	.globl gText_Rom_259DDB
gText_Rom_259DDB: @ 0x08259DDB
	.string "ミオ『あたしたちと たたかうですか?\pじゃあ ポケモンを\n2ひき つれてないと ダメですよ!\lだって あたしたち つよいもん!"
	.byte EOS
	.if (. - gText_Rom_259DDB) > 0x40
	.error "gText_Rom_259DDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259DDB) < 0x40
	.space 0x40 - (. - gText_Rom_259DDB)
	.endif
	@ data/text/trainers.inc:202 Route104_Text_IvanIntro (+1 aliases)
	.globl gText_Rom_259E1B
gText_Rom_259E1B: @ 0x08259E1B
	.string "みずポケモンの エキスパートとは\nなにを かくそう オレのこと!\p……え?\nしらないの?"
	.byte EOS
	.if (. - gText_Rom_259E1B) > 0x2d
	.error "gText_Rom_259E1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259E1B) < 0x2d
	.space 0x2d - (. - gText_Rom_259E1B)
	.endif
	@ data/text/trainers.inc:205 Route104_Text_IvanDefeat (+1 aliases)
	.globl gText_Rom_259E48
gText_Rom_259E48: @ 0x08259E48
	.string "けっこう つよいと おもってたんだけどな\nじぶんのこと…… がっかり……"
	.byte EOS
	.if (. - gText_Rom_259E48) > 0x25
	.error "gText_Rom_259E48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259E48) < 0x25
	.space 0x25 - (. - gText_Rom_259E48)
	.endif
	@ data/text/trainers.inc:208 Route104_Text_IvanPostBattle
	.globl gText_Rom_259E6D
gText_Rom_259E6D: @ 0x08259E6D
	.string "つりに むちゅうに なってて\nポケモン そだてるのを わすれてたよ……"
	.byte EOS
	.if (. - gText_Rom_259E6D) > 0x24
	.error "gText_Rom_259E6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259E6D) < 0x24
	.space 0x24 - (. - gText_Rom_259E6D)
	.endif
	@ data/text/trainers.inc:211 Route104_Text_BillyIntro (+1 aliases)
	.globl gText_Rom_259E91
gText_Rom_259E91: @ 0x08259E91
	.string "すなはまに あしあと つけるのって\nたのしーよねー!"
	.byte EOS
	.if (. - gText_Rom_259E91) > 0x1b
	.error "gText_Rom_259E91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259E91) < 0x1b
	.space 0x1b - (. - gText_Rom_259E91)
	.endif
	@ data/text/trainers.inc:214 Route104_Text_BillyDefeat (+1 aliases)
	.globl gText_Rom_259EAC
gText_Rom_259EAC: @ 0x08259EAC
	.string "うへーっ!\nクツに すなが はいって ジャリジャリする!"
	.byte EOS
	.if (. - gText_Rom_259EAC) > 0x1d
	.error "gText_Rom_259EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259EAC) < 0x1d
	.space 0x1d - (. - gText_Rom_259EAC)
	.endif
	@ data/text/trainers.inc:218 Route104_Text_BillyPostBattle
	.globl gText_Rom_259EC9
gText_Rom_259EC9: @ 0x08259EC9
	.string "すなはまを ボクの あしあとで\nいっぱいに したいんだけど\lすぐに きえちゃうんだよなぁ"
	.byte EOS
	.if (. - gText_Rom_259EC9) > 0x2d
	.error "gText_Rom_259EC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259EC9) < 0x2d
	.space 0x2d - (. - gText_Rom_259EC9)
	.endif
	@ data/text/trainers.inc:221 Route104_Text_HaleyIntro (+1 aliases)
	.globl gText_Rom_259EF6
gText_Rom_259EF6: @ 0x08259EF6
	.string "しょうぶ しようかな……\nやめとこうかな……\pえーい! たたかっちゃえ!"
	.byte EOS
	.if (. - gText_Rom_259EF6) > 0x25
	.error "gText_Rom_259EF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259EF6) < 0x25
	.space 0x25 - (. - gText_Rom_259EF6)
	.endif
	@ data/text/trainers.inc:224 Route104_Text_HaleyDefeat (+1 aliases)
	.globl gText_Rom_259F1B
gText_Rom_259F1B: @ 0x08259F1B
	.string "たたかわなければ よかったかな……"
	.byte EOS
	.if (. - gText_Rom_259F1B) > 0x12
	.error "gText_Rom_259F1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259F1B) < 0x12
	.space 0x12 - (. - gText_Rom_259F1B)
	.endif
	@ data/text/trainers.inc:227 Route104_Text_HaleyPostBattle
	.globl gText_Rom_259F2D
gText_Rom_259F2D: @ 0x08259F2D
	.string "どっちに しようか まよってる とき\nじぶんで きめないで たにんに まかせると\lどっちに なっても こうかいするね……"
	.byte EOS
	.if (. - gText_Rom_259F2D) > 0x3d
	.error "gText_Rom_259F2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259F2D) < 0x3d
	.space 0x3d - (. - gText_Rom_259F2D)
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
	.globl gText_Rom_259FD6
gText_Rom_259FD6: @ 0x08259FD6
	.string "あたしと しょうぶ してもらうわよ!"
	.byte EOS
	.if (. - gText_Rom_259FD6) != 0x13
	.error "gText_Rom_259FD6 must retain its original byte length"
	.endif
	.globl gText_Rom_259FE5
	.set gText_Rom_259FE5, gText_Rom_259FD6 + 0xf
	@ data/text/trainers.inc:239 Route104_Text_HaleyRematchDefeat (+1 aliases)
	.globl gText_Rom_259FE9
gText_Rom_259FE9: @ 0x08259FE9
	.string "うーん……\nかてると おもったのにな"
	.byte EOS
	.if (. - gText_Rom_259FE9) > 0x13
	.error "gText_Rom_259FE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259FE9) < 0x13
	.space 0x13 - (. - gText_Rom_259FE9)
	.endif

	@ data/text/trainers.inc:242 Route104_Text_HaleyPostRematch
	.globl gText_Rom_259FFC
gText_Rom_259FFC: @ 0x08259FFC
	.string "たたかうって じぶんで きめたから\nまけても すっきり してるわ!\p……もちろん まけて くやしいけどね{EOS}"
	.if (. - gText_Rom_259FFC) > 0x35
	.error "gText_Rom_259FFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259FFC) < 0x35
	.space 0x35 - (. - gText_Rom_259FFC)
	.endif
