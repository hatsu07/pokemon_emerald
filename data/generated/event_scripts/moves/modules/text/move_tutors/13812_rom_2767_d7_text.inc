	@ data/text/move_tutors.inc:1 MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce
	.globl gText_Rom_275F5D
gText_Rom_275F5D: @ 0x08275F5D
	.string "この わざを おしえて もらえるのは\nいちど だけですが いいですか?{EOS}"
	.if (. - gText_Rom_275F5D) > 0x24
	.error "gText_Rom_275F5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275F5D) < 0x24
	.space 0x24 - (. - gText_Rom_275F5D)
	.endif
	@ field-script:0x27683F FieldScriptText_275F81
	.globl gText_Rom_275F81
gText_Rom_275F81: @ 0x08275F81
	.string "ふふーん\nおれの　ポケモンは　すごいのさ！\lどの　ポケモンよりも　かっこいいのさ！\p……って　いばってたら\nかいちょうに　おこられちゃった\pもう　いばらない　ことに　したから\nかわりに　おまえの　ポケモンに\lいばる　わざを　おしえて　やってもいいぜ{EOS}"
	.if (. - gText_Rom_275F81) > 0x7d
	.error "gText_Rom_275F81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275F81) < 0x7d
	.space 0x7d - (. - gText_Rom_275F81)
	.endif
	@ data/text/move_tutors.inc:14 MoveTutor_Text_SwaggerDeclined
	.globl gText_Rom_275FFE
gText_Rom_275FFE: @ 0x08275FFE
	.string "えー\nなんだよ つきあい わるいな{EOS}"
	.if (. - gText_Rom_275FFE) > 0x12
	.error "gText_Rom_275FFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275FFE) < 0x12
	.space 0x12 - (. - gText_Rom_275FFE)
	.endif
	@ data/text/move_tutors.inc:18 MoveTutor_Text_SwaggerWhichMon
	.globl gText_Rom_276010
gText_Rom_276010: @ 0x08276010
	.string "おう!\nどの ポケモンが いばりたいんだ?{EOS}"
	.if (. - gText_Rom_276010) > 0x16
	.error "gText_Rom_276010 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276010) < 0x16
	.space 0x16 - (. - gText_Rom_276010)
	.endif
	@ data/text/move_tutors.inc:22 MoveTutor_Text_SwaggerTaught
	.globl gText_Rom_276026
gText_Rom_276026: @ 0x08276026
	.string "こんどっから いばる かわりに\nじまん するだけに しておくよ……{EOS}"
	.if (. - gText_Rom_276026) > 0x22
	.error "gText_Rom_276026 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276026) < 0x22
	.space 0x22 - (. - gText_Rom_276026)
	.endif
	@ data/text/move_tutors.inc:26 MoveTutor_Text_RolloutTeach
	.globl gText_Rom_276048
gText_Rom_276048: @ 0x08276048
	.string "ねえ ここから あっちに むかって\nいちども まがらずに ずーっと\lあるいて いけるって しってた?\lぼく なら ころがって いけるかも……!\pきみの ポケモンも ころがって みる?\nころがる なら おしえて あげられるよ{EOS}"
	.if (. - gText_Rom_276048) > 0x70
	.error "gText_Rom_276048 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276048) < 0x70
	.space 0x70 - (. - gText_Rom_276048)
	.endif
	@ data/text/move_tutors.inc:34 MoveTutor_Text_RolloutDeclined
	.globl gText_Rom_2760B8
gText_Rom_2760B8: @ 0x082760B8
	.string "えんりょ いらないのに!\nごろ ごろ{EOS}"
	.if (. - gText_Rom_2760B8) > 0x13
	.error "gText_Rom_2760B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2760B8) < 0x13
	.space 0x13 - (. - gText_Rom_2760B8)
	.endif
	@ data/text/move_tutors.inc:38 MoveTutor_Text_RolloutWhichMon
	.globl gText_Rom_2760CB
gText_Rom_2760CB: @ 0x082760CB
	.string "えへへ いいよ!\nぼく そっくりの ポケモンだと いいな{EOS}"
	.if (. - gText_Rom_2760CB) > 0x1d
	.error "gText_Rom_2760CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2760CB) < 0x1d
	.space 0x1d - (. - gText_Rom_2760CB)
	.endif
	@ data/text/move_tutors.inc:42 MoveTutor_Text_RolloutTaught
	.globl gText_Rom_2760E8
gText_Rom_2760E8: @ 0x082760E8
	.string "くさに ねころがると しあわせだなー\nごろ ごろ{EOS}"
	.if (. - gText_Rom_2760E8) > 0x19
	.error "gText_Rom_2760E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2760E8) < 0x19
	.space 0x19 - (. - gText_Rom_2760E8)
	.endif
	@ data/text/move_tutors.inc:46 MoveTutor_Text_FuryCutterTeach
	.globl gText_Rom_276101
gText_Rom_276101: @ 0x08276101
	.string "おなじ わざをさ\nつづけて なんども だすと\lどんどん つよくなる わざが あるの!\lしかも むしタイプで かっこいいの!\pれんぞくぎりって いうんだけど\nおぼえて みたい?{EOS}"
	.if (. - gText_Rom_276101) > 0x58
	.error "gText_Rom_276101 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276101) < 0x58
	.space 0x58 - (. - gText_Rom_276101)
	.endif
	@ data/text/move_tutors.inc:54 MoveTutor_Text_FuryCutterDeclined
	.globl gText_Rom_276159
gText_Rom_276159: @ 0x08276159
	.string "きが あわないねぇ{EOS}"
	.if (. - gText_Rom_276159) > 0xa
	.error "gText_Rom_276159 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276159) < 0xa
	.space 0xa - (. - gText_Rom_276159)
	.endif
	@ data/text/move_tutors.inc:57 MoveTutor_Text_FuryCutterWhichMon
	.globl gText_Rom_276163
gText_Rom_276163: @ 0x08276163
	.string "わーい!\nじゃ おぼえさせる ポケモンを おしえてね{EOS}"
	.if (. - gText_Rom_276163) > 0x1b
	.error "gText_Rom_276163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276163) < 0x1b
	.space 0x1b - (. - gText_Rom_276163)
	.endif
	@ data/text/move_tutors.inc:61 MoveTutor_Text_FuryCutterTaught
	.globl gText_Rom_27617E
gText_Rom_27617E: @ 0x0827617E
	.string "れんぞくして あたるか どうかの\nスリルが たのしいんだよねぇ{EOS}"
	.if (. - gText_Rom_27617E) > 0x20
	.error "gText_Rom_27617E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27617E) < 0x20
	.space 0x20 - (. - gText_Rom_27617E)
	.endif
	@ data/text/move_tutors.inc:65 MoveTutor_MimicTeach
	.globl gText_Rom_27619E
gText_Rom_27619E: @ 0x0827619E
	.string "おお おわかいの!\nわしは こども じゃが\lこのまちの じいちゃんや ばあちゃんの\lはなしかたを ものまね しておるのじゃ!\pどうかね? おわかいの\nおぬしの ポケモンに わしが\lものまねを おしえて やろうかね?{EOS}"
	.if (. - gText_Rom_27619E) > 0x6c
	.error "gText_Rom_27619E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27619E) < 0x6c
	.space 0x6c - (. - gText_Rom_27619E)
	.endif
	@ data/text/move_tutors.inc:74 MoveTutor_MimicDeclined
	.globl gText_Rom_27620A
gText_Rom_27620A: @ 0x0827620A
	.string "ちぇっ なーんだ!\nボク ものまね おしえたいのにな!{EOS}"
	.if (. - gText_Rom_27620A) > 0x1c
	.error "gText_Rom_27620A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27620A) < 0x1c
	.space 0x1c - (. - gText_Rom_27620A)
	.endif
	@ data/text/move_tutors.inc:78 MoveTutor_Text_MimicWhichMon
	.globl gText_Rom_276226
gText_Rom_276226: @ 0x08276226
	.string "ふぉっ ふぉっ! よかろう!\nおしえさせる ポケモンを みせてみぃ{EOS}"
	.if (. - gText_Rom_276226) > 0x22
	.error "gText_Rom_276226 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276226) < 0x22
	.space 0x22 - (. - gText_Rom_276226)
	.endif
	@ data/text/move_tutors.inc:82 MoveTutor_Text_MimicTaught
	.globl gText_Rom_276248
gText_Rom_276248: @ 0x08276248
	.string "ものまねは おくの ふかい わざじゃ!\nボ… わしの ように\lうまく できるかな?{EOS}"
	.if (. - gText_Rom_276248) > 0x2a
	.error "gText_Rom_276248 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276248) < 0x2a
	.space 0x2a - (. - gText_Rom_276248)
	.endif
	@ data/text/move_tutors.inc:87 MoveTutor_Text_MetronomeTeach
	.globl gText_Rom_276272
gText_Rom_276272: @ 0x08276272
	.string "あーん ほしいものが いっぱい!\nでも おこづかいは なくなっちゃったし……\pゆびを ふれば まほうで\nおこづかい でてくれば いーのにな!\lなんてね エヘヘ……\pしかたが ないから\nあなたの ポケモンに\lゆびをふる でも おしえて あげよっか?{EOS}"
	.if (. - gText_Rom_276272) > 0x7c
	.error "gText_Rom_276272 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276272) < 0x7c
	.space 0x7c - (. - gText_Rom_276272)
	.endif
	@ data/text/move_tutors.inc:97 MoveTutor_Text_MetronomeDeclined
	.globl gText_Rom_2762EE
gText_Rom_2762EE: @ 0x082762EE
	.string "そっか\nきが むいたら またおいでよ!{EOS}"
	.if (. - gText_Rom_2762EE) > 0x14
	.error "gText_Rom_2762EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2762EE) < 0x14
	.space 0x14 - (. - gText_Rom_2762EE)
	.endif
	@ data/text/move_tutors.inc:101 MoveTutor_Text_MetronomeWhichMon
	.globl gText_Rom_276302
gText_Rom_276302: @ 0x08276302
	.string "うん! じゃ おしえるね\nどのコが いいのかな?{EOS}"
	.if (. - gText_Rom_276302) > 0x19
	.error "gText_Rom_276302 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276302) < 0x19
	.space 0x19 - (. - gText_Rom_276302)
	.endif
	@ data/text/move_tutors.inc:105 MoveTutor_Text_MetronomeTaught
	.globl gText_Rom_27631B
gText_Rom_27631B: @ 0x0827631B
	.string "ゆびをふると ステキな ことが\nいっぱい おきるんだよー!\pわたしたちも つかえたら いーのにね!{EOS}"
	.if (. - gText_Rom_27631B) > 0x32
	.error "gText_Rom_27631B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27631B) < 0x32
	.space 0x32 - (. - gText_Rom_27631B)
	.endif
	@ data/text/move_tutors.inc:110 MoveTutor_Text_SleepTalkTeach
	.globl gText_Rom_27634D
gText_Rom_27634D: @ 0x0827634D
	.string "ふん…… ばあさんめ\nめざめるパワー などに\lたより おって……\pワシと いっしょに おひるね して\nねごとでも いってたほうが たのしいのに\pもう あんたの ポケモンでも ええわ\nねごとを おぼえて つかってみんか?{EOS}"
	.if (. - gText_Rom_27634D) > 0x6e
	.error "gText_Rom_27634D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27634D) < 0x6e
	.space 0x6e - (. - gText_Rom_27634D)
	.endif
	@ data/text/move_tutors.inc:119 MoveTutor_Text_SleepTalkDeclined
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2763BB
gText_Rom_2763BB: @ 0x082763BB
	.string "そうかい そうかい……\nみんな めざめるパワーが だいすきかい{EOS}"
	.if (. - gText_Rom_2763BB) != 0x20
	.error "gText_Rom_2763BB must retain its original byte length"
	.endif
	.globl gText_Rom_2763D7
	.set gText_Rom_2763D7, gText_Rom_2763BB + 0x1c
	@ data/text/move_tutors.inc:123 MoveTutor_Text_SleepTalkWhichMon
	.globl gText_Rom_2763DB
gText_Rom_2763DB: @ 0x082763DB
	.string "むぉう! ものわかりの いい こどもよ!\nさて ポケモンは どいつが いいかな?{EOS}"
	.if (. - gText_Rom_2763DB) > 0x29
	.error "gText_Rom_2763DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2763DB) < 0x29
	.space 0x29 - (. - gText_Rom_2763DB)
	.endif
	@ data/text/move_tutors.inc:127 MoveTutor_Text_SleepTalkTaught
	.globl gText_Rom_276404
gText_Rom_276404: @ 0x08276404
	.string "ワシ ばあさんの コイン\nいちども あてたことが なくてな……\lねごとでも ええから あたらんかな{EOS}"
	.if (. - gText_Rom_276404) > 0x32
	.error "gText_Rom_276404 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276404) < 0x32
	.space 0x32 - (. - gText_Rom_276404)
	.endif
	@ field-script:0x276AAF FieldScriptText_276436
	.globl gText_Rom_276436
gText_Rom_276436: @ 0x08276436
	.string "ふう\nこうやって　おくじょうから\lひろい　せかいを　みていると……\pなんにんもの　じぶんが　いて\nいくつもの　じんせいを　たのしめたらなー\lって　おもうの！\lムリな　はなしだけどね　うふふ\pそうだわ　あなたの　ポケモンちゃん！\nみがわりの　わざ　おぼえてみない？{EOS}"
	.if (. - gText_Rom_276436) > 0x84
	.error "gText_Rom_276436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276436) < 0x84
	.space 0x84 - (. - gText_Rom_276436)
	.endif
	@ data/text/move_tutors.inc:143 MoveTutor_Text_SubstituteDeclined
	.globl gText_Rom_2764BA
gText_Rom_2764BA: @ 0x082764BA
	.string "あら そう?\nポケモンなら じぶんの ぶんしんを\lつくる ことが できるのに{EOS}"
	.if (. - gText_Rom_2764BA) > 0x27
	.error "gText_Rom_2764BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2764BA) < 0x27
	.space 0x27 - (. - gText_Rom_2764BA)
	.endif
	@ data/text/move_tutors.inc:148 MoveTutor_Text_SubstituteWhichMon
	.globl gText_Rom_2764E1
gText_Rom_2764E1: @ 0x082764E1
	.string "うふふ\nどの ポケモンちゃんが いいかしら?{EOS}"
	.if (. - gText_Rom_2764E1) > 0x17
	.error "gText_Rom_2764E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2764E1) < 0x17
	.space 0x17 - (. - gText_Rom_2764E1)
	.endif
	@ data/text/move_tutors.inc:152 MoveTutor_Text_SubstituteTaught
	.globl gText_Rom_2764F8
gText_Rom_2764F8: @ 0x082764F8
	.string "わたしたち にんげんは\nじぶんの じんせいを\lおもいきり たのしまなきゃ ね!\lあなたも そうなるように いのってる!{EOS}"
	.if (. - gText_Rom_2764F8) > 0x3c
	.error "gText_Rom_2764F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2764F8) < 0x3c
	.space 0x3c - (. - gText_Rom_2764F8)
	.endif
	@ field-script:0x276B17 FieldScriptText_276534
	.globl gText_Rom_276534
gText_Rom_276534: @ 0x08276534
	.string "もう　できんわ！\pぜったい　ムリだわ！\pかくとうタイプの　オレは\nトクサネの　ジムでは\lぜんぜん　かてんわ！\pちきしょーっ！　ボカ　ボカ！\nボカ　ボカ！　ボカ　ボカ！\pなんだよ\nそんな　めで　みるなよ！\lじめんを　なぐってる　だけだろ！\pそれとも　おまえの　ポケモンに\nばくれつパンチを　おしえて　ほしいのかよ？{EOS}"
	.if (. - gText_Rom_276534) > 0x9d
	.error "gText_Rom_276534 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276534) < 0x9d
	.space 0x9d - (. - gText_Rom_276534)
	.endif
	@ data/text/move_tutors.inc:171 MoveTutor_Text_DynamicPunchDeclined
	.globl gText_Rom_2765D1
gText_Rom_2765D1: @ 0x082765D1
	.string "ちきしょー おまえまで\nオレを ばかに するかっ!?\lボカ ボカ!{EOS}"
	.if (. - gText_Rom_2765D1) > 0x22
	.error "gText_Rom_2765D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2765D1) < 0x22
	.space 0x22 - (. - gText_Rom_2765D1)
	.endif
	@ data/text/move_tutors.inc:176 MoveTutor_Text_DynamicPunchWhichMon
	.globl gText_Rom_2765F3
gText_Rom_2765F3: @ 0x082765F3
	.string "うぉー! ほんとか! いいやつだな!\nどのポケモンに おしえれば いい?{EOS}"
	.if (. - gText_Rom_2765F3) > 0x25
	.error "gText_Rom_2765F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2765F3) < 0x25
	.space 0x25 - (. - gText_Rom_2765F3)
	.endif
	@ data/text/move_tutors.inc:180 MoveTutor_Text_DynamicPunchTaught
	.globl gText_Rom_276618
gText_Rom_276618: @ 0x08276618
	.string "なあ ばくれつパンチ つかって\nトクサネジムで かって きてくれよ!{EOS}"
	.if (. - gText_Rom_276618) > 0x23
	.error "gText_Rom_276618 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276618) < 0x23
	.space 0x23 - (. - gText_Rom_276618)
	.endif
	@ field-script:0x276B7F FieldScriptText_27663B
	.globl gText_Rom_27663B
gText_Rom_27663B: @ 0x0827663B
	.string "あーあ\nルネシティの　ジムリーダーって\lすっごく　すてきだから\lライバルが　いっぱい　なのよねー\pこの　あたしが　すてみで　ぶつかっても\nダメだったわ！\pねえ　あなた！\nせっかく　だから　この　あたしの\lじきでんの　すてみタックル！\lあなたの　ポケモンに　おしえさせてよ！{EOS}"
	.if (. - gText_Rom_27663B) > 0x89
	.error "gText_Rom_27663B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27663B) < 0x89
	.space 0x89 - (. - gText_Rom_27663B)
	.endif
	@ data/text/move_tutors.inc:195 MoveTutor_Text_DoubleEdgeDeclined
	.globl gText_Rom_2766C4
gText_Rom_2766C4: @ 0x082766C4
	.string "うん もう!\nあなたに まで ふられちゃったわ{EOS}"
	.if (. - gText_Rom_2766C4) > 0x18
	.error "gText_Rom_2766C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2766C4) < 0x18
	.space 0x18 - (. - gText_Rom_2766C4)
	.endif
	@ data/text/move_tutors.inc:199 MoveTutor_Text_DoubleEdgeWhichMon
	.globl gText_Rom_2766DC
gText_Rom_2766DC: @ 0x082766DC
	.string "ん じゃあ\nどの ポケモンが いいか きめてよ{EOS}"
	.if (. - gText_Rom_2766DC) > 0x18
	.error "gText_Rom_2766DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2766DC) < 0x18
	.space 0x18 - (. - gText_Rom_2766DC)
	.endif
	@ data/text/move_tutors.inc:203 MoveTutor_Text_DoubleEdgeTaught
	.globl gText_Rom_2766F4
gText_Rom_2766F4: @ 0x082766F4
	.string "もう いいわっ!\nあたしも こいを すてて\lつよい オンナに なってやるっ!{EOS}"
	.if (. - gText_Rom_2766F4) > 0x27
	.error "gText_Rom_2766F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2766F4) < 0x27
	.space 0x27 - (. - gText_Rom_2766F4)
	.endif
	@ data/text/move_tutors.inc:208 MoveTutor_Text_ExplosionTeach
	.globl gText_Rom_27671B
gText_Rom_27671B: @ 0x0827671B
	.string "ぼかぁ こんな イナカで\nいつまでも くすぶっとる つもりは\lまったく ないんじゃあー!\pみとれよ いつか トカイに でて\nドッカーンと はでに やって やるわい!\pおいっ! おまえ きいとったん なら\nけいきよく だいばくはつを おしえさせろ!{EOS}"
	.if (. - gText_Rom_27671B) > 0x7c
	.error "gText_Rom_27671B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27671B) < 0x7c
	.space 0x7c - (. - gText_Rom_27671B)
	.endif
	@ data/text/move_tutors.inc:217 MoveTutor_Text_ExplosionDeclined
	.globl gText_Rom_276797
gText_Rom_276797: @ 0x08276797
	.string "がーっ!\nイナカもん だからって ことわるなあ!{EOS}"
	.if (. - gText_Rom_276797) > 0x19
	.error "gText_Rom_276797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276797) < 0x19
	.space 0x19 - (. - gText_Rom_276797)
	.endif
	@ data/text/move_tutors.inc:221 MoveTutor_Text_ExplosionWhichMon
	.globl gText_Rom_2767B0
gText_Rom_2767B0: @ 0x082767B0
	.string "ぃよーし ドッカーンと おぼえさせるか!\nどの ポケモンが ぶちかますんか?{EOS}"
	.if (. - gText_Rom_2767B0) > 0x27
	.error "gText_Rom_2767B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2767B0) < 0x27
	.space 0x27 - (. - gText_Rom_2767B0)
	.endif
	@ data/text/move_tutors.inc:225 MoveTutor_Text_ExplosionTaught
	.globl gText_Rom_2767D7
gText_Rom_2767D7: @ 0x082767D7
	.string "いつも ポケモンに ばっか\nだいばくはつを おしえとって\lかんじんの ぼくは いつまでも\lばくはつ できん……\pでも ほんとは\nこのまちに いつまでも いたいから\lかも しれん……{EOS}"
	.if (. - gText_Rom_2767D7) > 0x5b
	.error "gText_Rom_2767D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2767D7) < 0x5b
	.space 0x5b - (. - gText_Rom_2767D7)
	.endif
	@ analyzed canonical ROM range 0x08276832-0x08276CAE
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08276832: @ 0x08276832
.Lbatch81_text_start_EventScript_JP_08276832: @ 0x08276832
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B1
	goto_if 0x01, EventScript_JP_08276890
	loadword 0x00, gText_Rom_275F81
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276886
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276886
	loadword 0x00, gText_Rom_276010
	callstd 0x04
	setvar 0x8005, 0x0017
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276886
	setflag 0x01B1
	goto EventScript_JP_08276890
	.byte 0x02
EventScript_08276886: @ 0x08276886
EventScript_JP_08276886: @ 0x08276886
	loadword 0x00, gText_Rom_275FFE
	callstd 0x04
	release
	end
EventScript_08276890: @ 0x08276890
EventScript_JP_08276890: @ 0x08276890
	loadword 0x00, gText_Rom_276026
	callstd 0x04
	release
	end
.globl EventScript_JP_0827689A
EventScript_JP_0827689A: @ 0x0827689A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B2
	goto_if 0x01, EventScript_JP_082768F8
	loadword 0x00, gText_Rom_276048
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082768EE
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082768EE
	loadword 0x00, gText_Rom_2760CB
	callstd 0x04
	setvar 0x8005, 0x0010
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082768EE
	setflag 0x01B2
	goto EventScript_JP_082768F8
	.byte 0x02
EventScript_JP_082768EE: @ 0x082768EE
	loadword 0x00, gText_Rom_2760B8
	callstd 0x04
	release
	end
EventScript_JP_082768F8: @ 0x082768F8
	loadword 0x00, gText_Rom_2760E8
	callstd 0x04
	release
	end
.globl EventScript_JP_08276902
EventScript_JP_08276902: @ 0x08276902
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B3
	goto_if 0x01, EventScript_JP_08276960
	loadword 0x00, gText_Rom_276101
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276956
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276956
	loadword 0x00, gText_Rom_276163
	callstd 0x04
	setvar 0x8005, 0x001D
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276956
	setflag 0x01B3
	goto EventScript_JP_08276960
	.byte 0x02
EventScript_JP_08276956: @ 0x08276956
	loadword 0x00, gText_Rom_276159
	callstd 0x04
	release
	end
EventScript_JP_08276960: @ 0x08276960
	loadword 0x00, gText_Rom_27617E
	callstd 0x04
	release
	end
.globl EventScript_JP_0827696A
EventScript_JP_0827696A: @ 0x0827696A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B4
	goto_if 0x01, EventScript_JP_082769C8
	loadword 0x00, gText_Rom_27619E
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082769BE
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082769BE
	loadword 0x00, gText_Rom_276226
	callstd 0x04
	setvar 0x8005, 0x0007
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082769BE
	setflag 0x01B4
	goto EventScript_JP_082769C8
	.byte 0x02
EventScript_JP_082769BE: @ 0x082769BE
	loadword 0x00, gText_Rom_27620A
	callstd 0x04
	release
	end
EventScript_JP_082769C8: @ 0x082769C8
	loadword 0x00, gText_Rom_276248
	callstd 0x04
	release
	end
.globl EventScript_JP_082769D2
EventScript_JP_082769D2: @ 0x082769D2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B5
	goto_if 0x01, EventScript_JP_08276A30
	loadword 0x00, gText_Rom_276272
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A26
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A26
	loadword 0x00, gText_Rom_276302
	callstd 0x04
	setvar 0x8005, 0x0008
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A26
	setflag 0x01B5
	goto EventScript_JP_08276A30
	.byte 0x02
EventScript_JP_08276A26: @ 0x08276A26
	loadword 0x00, gText_Rom_2762EE
	callstd 0x04
	release
	end
EventScript_JP_08276A30: @ 0x08276A30
	loadword 0x00, gText_Rom_27631B
	callstd 0x04
	release
	end
.globl EventScript_JP_08276A3A
EventScript_JP_08276A3A: @ 0x08276A3A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B6
	goto_if 0x01, EventScript_JP_08276A98
	loadword 0x00, gText_Rom_27634D
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A8E
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A8E
	loadword 0x00, gText_Rom_2763DB
	callstd 0x04
	setvar 0x8005, 0x0018
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A8E
	setflag 0x01B6
	goto EventScript_JP_08276A98
	.byte 0x02
EventScript_JP_08276A8E: @ 0x08276A8E
	loadword 0x00, gText_Rom_2763BB
	callstd 0x04
	release
	end
EventScript_JP_08276A98: @ 0x08276A98
	loadword 0x00, gText_Rom_276404
	callstd 0x04
	release
	end
.globl EventScript_JP_08276AA2
EventScript_JP_08276AA2: @ 0x08276AA2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B7
	goto_if 0x01, EventScript_JP_08276B00
	loadword 0x00, gText_Rom_276436
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276AF6
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276AF6
	loadword 0x00, gText_Rom_2764E1
	callstd 0x04
	setvar 0x8005, 0x000E
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276AF6
	setflag 0x01B7
	goto EventScript_JP_08276B00
	.byte 0x02
EventScript_JP_08276AF6: @ 0x08276AF6
	loadword 0x00, gText_Rom_2764BA
	callstd 0x04
	release
	end
EventScript_JP_08276B00: @ 0x08276B00
	loadword 0x00, gText_Rom_2764F8
	callstd 0x04
	release
	end
.globl EventScript_JP_08276B0A
EventScript_JP_08276B0A: @ 0x08276B0A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B8
	goto_if 0x01, EventScript_JP_08276B68
	loadword 0x00, gText_Rom_276534
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276B5E
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276B5E
	loadword 0x00, gText_Rom_2765F3
	callstd 0x04
	setvar 0x8005, 0x000F
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276B5E
	setflag 0x01B8
	goto EventScript_JP_08276B68
	.byte 0x02
EventScript_JP_08276B5E: @ 0x08276B5E
	loadword 0x00, gText_Rom_2765D1
	callstd 0x04
	release
	end
EventScript_JP_08276B68: @ 0x08276B68
	loadword 0x00, gText_Rom_276618
	callstd 0x04
	release
	end
.globl EventScript_JP_08276B72
EventScript_JP_08276B72: @ 0x08276B72
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01B9
	goto_if 0x01, EventScript_JP_08276BD0
	loadword 0x00, gText_Rom_27663B
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276BC6
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276BC6
	loadword 0x00, gText_Rom_2766DC
	callstd 0x04
	setvar 0x8005, 0x0004
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276BC6
	setflag 0x01B9
	goto EventScript_JP_08276BD0
	.byte 0x02
EventScript_JP_08276BC6: @ 0x08276BC6
	loadword 0x00, gText_Rom_2766C4
	callstd 0x04
	release
	end
EventScript_JP_08276BD0: @ 0x08276BD0
	loadword 0x00, gText_Rom_2766F4
	callstd 0x04
	release
	end
.globl EventScript_JP_08276BDA
EventScript_JP_08276BDA: @ 0x08276BDA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x01BA
	goto_if 0x01, EventScript_JP_08276C38
	loadword 0x00, gText_Rom_27671B
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276C2E
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276C2E
	loadword 0x00, gText_Rom_2767B0
	callstd 0x04
	setvar 0x8005, 0x000C
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276C2E
	setflag 0x01BA
	goto EventScript_JP_08276C38
	.byte 0x02
EventScript_JP_08276C2E: @ 0x08276C2E
	loadword 0x00, gText_Rom_276797
	callstd 0x04
	release
	end
EventScript_JP_08276C38: @ 0x08276C38
	loadword 0x00, gText_Rom_2767D7
	callstd 0x04
	release
	end
EventScript_JP_08276C42: @ 0x08276C42
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return
EventScript_08276C49: @ 0x08276C49
EventScript_JP_08276C49: @ 0x08276C49
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_275F5D
	callstd 0x05
	return
	.byte 0x16, 0x02, 0x40, 0x00, 0x00, 0x16, 0x04, 0x80, 0x04, 0x00, 0x25, 0xF8, 0x01, 0x16, 0x04, 0x80
	.byte 0x01, 0x00, 0x16, 0x05, 0x80, 0x05, 0x00, 0x25, 0xE7, 0x00, 0x21, 0x0D, 0x80, 0x02, 0x00, 0x06
	.byte 0x01, 0xE5, 0x6C, 0x27, 0x08, 0x21, 0x0D, 0x80, 0x03, 0x00, 0x06, 0x01, 0xE5, 0x6C, 0x27, 0x08
	.byte 0x21, 0x0D, 0x80, 0x09, 0x00, 0x06, 0x01, 0xE5, 0x6C, 0x27, 0x08, 0x02, 0x03, 0x40, 0x00, 0x00
	.byte 0x98, 0x6C, 0x27, 0x08, 0x00, 0x00, 0x16, 0x03, 0x40, 0x01, 0x00, 0x02, 0x40, 0x00, 0x00, 0xC2
	.byte 0x6C, 0x27, 0x08, 0x01, 0x40, 0x01, 0x00, 0xFB, 0x6C, 0x27, 0x08, 0x00, 0x00
