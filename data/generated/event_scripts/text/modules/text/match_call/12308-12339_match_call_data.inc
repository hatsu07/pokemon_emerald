
	@ data/text/match_call.inc:364 MatchCall_PersonalizedText51
	.globl MatchCall_PersonalizedText51
MatchCall_PersonalizedText51: @ 0x0826813C
	.string "{STR_VAR_1}だ\nポケモン ちゃんと そだててるか?\pここは くうきも きれいだし\nポケモンを そだてるには\lぜっこうの かんきょう なんだよな\pきみも ポケモンを そだてる ことに\nせんねん する ときは\l{STR_VAR_2}に くると いいぞ\lじゃあ またな{EOS}"
	.if (. - MatchCall_PersonalizedText51) > 0x77
	.error "MatchCall_PersonalizedText51 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText51) < 0x77
	.space 0x77 - (. - MatchCall_PersonalizedText51)
	.endif

	@ data/text/match_call.inc:367 MatchCall_PersonalizedText52
	.globl MatchCall_PersonalizedText52
MatchCall_PersonalizedText52: @ 0x082681B3
	.string "{STR_VAR_1}です\nわたしの {STR_VAR_2}に\pポロック あげたんですよ\nとても よろこんでた みたい\pポケモンに よって\nポロックの すききらいが あるみたいなの\pおもしろい ですよね\nでは ごきげんよう{EOS}"
	.if (. - MatchCall_PersonalizedText52) > 0x5e
	.error "MatchCall_PersonalizedText52 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText52) < 0x5e
	.space 0x5e - (. - MatchCall_PersonalizedText52)
	.endif

	@ data/text/match_call.inc:370 MatchCall_PersonalizedText53
	.globl MatchCall_PersonalizedText53
MatchCall_PersonalizedText53: @ 0x08268211
	.string "{STR_VAR_1}だ\nポケモンと きょうりょく すれば\lしぜんの なかでも\lかいてきに くらせる ものだよ\pみんな それに きが ついて\nもっと ポケモンと\lきょうりょく できるように なれば\lいいのにな!\pきみは けっこう いいセン\nいってると おもうよ!\lじゃ またな!{EOS}"
	.if (. - MatchCall_PersonalizedText53) > 0x83
	.error "MatchCall_PersonalizedText53 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText53) < 0x83
	.space 0x83 - (. - MatchCall_PersonalizedText53)
	.endif

	@ data/text/match_call.inc:373 MatchCall_PersonalizedText54
	.globl MatchCall_PersonalizedText54
MatchCall_PersonalizedText54: @ 0x08268294
	.string "いつも ぼうけんの じゅんびを\nおこたらない {STR_VAR_1}よ!\p{PLAYER}{KUN} どうぐは たりてる?\nポケモンの たいちょうは バッチリ?\pじぶんの みの まわりを\nつねに かんぺきに しておくことが\lたびを ながく つづける ひけつ よ!\pわたしも じぶんの どうぐを\nかくにん するわ! またね!{EOS}"
	.if (. - MatchCall_PersonalizedText54) > 0x90
	.error "MatchCall_PersonalizedText54 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText54) < 0x90
	.space 0x90 - (. - MatchCall_PersonalizedText54)
	.endif

	@ data/text/match_call.inc:376 MatchCall_PersonalizedText55
	.globl MatchCall_PersonalizedText55
MatchCall_PersonalizedText55: @ 0x08268324
	.string "{STR_VAR_1}だよ {STR_VAR_1}だよー!\p{STR_VAR_2} って\nひとどおりが はげしいから\lまいにち いろんな ひとに\lしょうぶを もうしこまれるの!\pきょうはねえ 5にんに かって\n3にんに まけたわ!\lあなたのほうは どうだった?\lこんど きかせてねっ! じゃあね{EOS}"
	.if (. - MatchCall_PersonalizedText55) > 0x79
	.error "MatchCall_PersonalizedText55 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText55) < 0x79
	.space 0x79 - (. - MatchCall_PersonalizedText55)
	.endif

	@ data/text/match_call.inc:379 MatchCall_PersonalizedText56
	.globl MatchCall_PersonalizedText56
MatchCall_PersonalizedText56: @ 0x0826839D
	.string "むしポケモンを いっぱい もってて\nにんきものの {STR_VAR_1} だけど!\p……きょう がっこうに\nおきにいりの むしポケモンを\lいっぱい つれて いったら\lすきな おんなのこに なかれ ちゃった……\lうう わらいたければ わらって くれよ\pぼくは むしポケモンの よさを\nあのコに わかって もらえるまで\lがんばるんだ からね!\pグッスン じゃーな!{EOS}"
	.if (. - MatchCall_PersonalizedText56) > 0xac
	.error "MatchCall_PersonalizedText56 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText56) < 0xac
	.space 0xac - (. - MatchCall_PersonalizedText56)
	.endif

	@ data/text/match_call.inc:382 MatchCall_PersonalizedText57
	.globl MatchCall_PersonalizedText57
MatchCall_PersonalizedText57: @ 0x08268449
	.string "はっ ほっ はっ ほっ\pやあ! {STR_VAR_1}です! はっ ほっ\pやま……のぼり しながらの おしゃべりも\nなかなか どうして…… はっ ほっ\lトレーニングに なるなあ\pふっ くっ……\nおっと のぼりが きつく なってきた\lま また こんど…… ゆっくり はなそう!\lはっ ほっ はっ……{EOS}"
	.if (. - MatchCall_PersonalizedText57) > 0x8c
	.error "MatchCall_PersonalizedText57 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText57) < 0x8c
	.space 0x8c - (. - MatchCall_PersonalizedText57)
	.endif

	@ data/text/match_call.inc:385 MatchCall_PersonalizedText58
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_PersonalizedText58
MatchCall_PersonalizedText58: @ 0x082684D5
	.string "や や どうも!\nいま ナツと おたから さがしててさ!\pおたから なんて もしかしたら\nほんとうは ないのかも しれないけど……\pナツと おたからを ふたりで さがす\nって ことが だいじ なんだよね\p……て あれ ナツ?\nな なんで おこってるの?\lほっといて ゴメンね\lもちろん キミが いちばん だいじだよぉ\lわかっている だろう?\pじ じゃ…… {PLAYER}さんさようなら{EOS}"
	.if (. - MatchCall_PersonalizedText58) != 0xbc
	.error "MatchCall_PersonalizedText58 must retain its original byte length"
	.endif

	@ data/text/match_call.inc:388 MatchCall_PersonalizedText59
	.globl MatchCall_PersonalizedText59
MatchCall_PersonalizedText59: @ 0x08268591
	.string "じぶんは {STR_VAR_1}だ!\nしゅぎょうの ために また\lムロの ポケモンジムに いってきた!\pジムリーダーの トウキは\nあらなみに もまれ つよくなった!\lなのに ちっとも あせくさく ないし\lもてもてで しょうじき くやしい!\pなかまの シバ という おとこも\nきっと あせくさく なくて\lビッグウェーブ だとか ボク だとか\lさわやかに いったり するのだろう!\p……やきもちは みぐるしいな!\nすまん わすれて くれ! オスっ!{EOS}"
	.if (. - MatchCall_PersonalizedText59) > 0xd6
	.error "MatchCall_PersonalizedText59 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText59) < 0xd6
	.space 0xd6 - (. - MatchCall_PersonalizedText59)
	.endif

	@ data/text/match_call.inc:391 MatchCall_PersonalizedText60
	.globl MatchCall_PersonalizedText60
MatchCall_PersonalizedText60: @ 0x08268667
	.string "わかい トレーナーさんと\nおはなし できて うれしい のう\pきみも もちろん\nなんさいに なっても ポケモンを\lがんばる つもり じゃろう?\lその ときには わしらのように\lだれか あいてが いると いいのう!\pまあ {PLAYER}{KUN}は いまだって\nポケモンに しんらい されて\lずっと がんばって おるからのう\pりっぱな きんこんしきに なれる\nそしつは バッチリじゃ!\lはっはっはっ がんばるのじゃよ!{EOS}"
	.if (. - MatchCall_PersonalizedText60) > 0xc8
	.error "MatchCall_PersonalizedText60 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText60) < 0xc8
	.space 0xc8 - (. - MatchCall_PersonalizedText60)
	.endif

	@ data/text/match_call.inc:394 MatchCall_PersonalizedText61
	.globl MatchCall_PersonalizedText61
MatchCall_PersonalizedText61: @ 0x0826872F
	.string "{STR_VAR_1}です!\nさっき ボクたち めずらしく\lかいパンの おにいさんに かったんだ!\lでも かっこいい ひとだった から……\pせっかく かよわい ところを\nみせようと したのに!\pって ねえちゃんに おこられた……\pどーせ かっても まけても\nおこられるんだ ボクは!\l{PLAYER}{KUN}も こんど\lなんとか いって やって!\pじゃ またねー!{EOS}"
	.if (. - MatchCall_PersonalizedText61) > 0xa6
	.error "MatchCall_PersonalizedText61 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText61) < 0xa6
	.space 0xa6 - (. - MatchCall_PersonalizedText61)
	.endif

	@ data/text/match_call.inc:397 MatchCall_PersonalizedText62
	.globl MatchCall_PersonalizedText62
MatchCall_PersonalizedText62: @ 0x082687D5
	.string "{STR_VAR_1}だよ うん……\nきのうは いせきを もとめて\lちがう うみに でようと したら\lみちに まよってしまったよ\pうみを めぐり めぐって\nきがついたら また もとの ばしょさ\pあいかわらず しょうぶも よわいし\nもう わらって くれよ……\pまあ わしは あきらめんぞ\nいつのひか いせきを みつけたら\lわしの じだいが くるだろう からな!\pそういった わけで\nきょうは これで さらばだ!{EOS}"
	.if (. - MatchCall_PersonalizedText62) > 0xc4
	.error "MatchCall_PersonalizedText62 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText62) < 0xc4
	.space 0xc4 - (. - MatchCall_PersonalizedText62)
	.endif

	@ data/text/match_call.inc:400 MatchCall_PersonalizedText63
	.globl MatchCall_PersonalizedText63
MatchCall_PersonalizedText63: @ 0x08268899
	.string "やあー きみーっ!\n{STR_VAR_1}だー!\lわたしは いまー\l108ばんすいどうに きているーっ!\pつまり いつもと おなじ ところだー!\pきょうは めの まえを\nビキニのおねえさんが とおったからーっ\lおおごえで おどかして みたーっ!\pそしたら いやな かおを されたー!\pいじょう 108ばんすいどう から\n{STR_VAR_1}が おつたえ したー!{EOS}"
	.if (. - MatchCall_PersonalizedText63) > 0xa5
	.error "MatchCall_PersonalizedText63 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText63) < 0xa5
	.space 0xa5 - (. - MatchCall_PersonalizedText63)
	.endif

	@ data/text/match_call.inc:403 MatchCall_PersonalizedText64
	.globl MatchCall_PersonalizedText64
MatchCall_PersonalizedText64: @ 0x0826893E
	.string "{STR_VAR_1}よ!\nいま いそがしいんだけど\lきょうは もう\l5にんの トレーナーを たおしたから\lあなたにも いちおう ほうこく するわ!\pこの ちょうし だと\nつぎは たぶん あなたに かてるわね!\lわたしたち いい ライバルとして\lやって いけそうね……\lじゃあね バイ!{EOS}"
	.if (. - MatchCall_PersonalizedText64) > 0x87
	.error "MatchCall_PersonalizedText64 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText64) < 0x87
	.space 0x87 - (. - MatchCall_PersonalizedText64)
	.endif

	@ data/text/match_call.inc:406 MatchCall_BattleFrontierStreakText1 (+1 aliases)
	.globl gText_Rom_2689C5
gText_Rom_2689C5: @ 0x082689C5
	.string "こんにちは {STR_VAR_1} です!\nきいたよ!\p{STR_VAR_2} で\nすごい かつやく したんだって?\p{STR_VAR_3}れんしょう って すごいなあ\nじゃあ またね!{EOS}"
	.if (. - gText_Rom_2689C5) > 0x43
	.error "gText_Rom_2689C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2689C5) < 0x43
	.space 0x43 - (. - gText_Rom_2689C5)
	.endif

