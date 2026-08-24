	@ data/text/move_tutors.inc:1 MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce
	.globl MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce
MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce: @ 0x08275F5D
	.string "この わざを おしえて もらえるのは\nいちど だけですが いいですか?{EOS}"
	.if (. - MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce) > 0x24
	.error "MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce) < 0x24
	.space 0x24 - (. - MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce)
	.endif
	@ field-script:0x27683F FieldScriptText_275F81
	.globl FieldScriptText_275F81
FieldScriptText_275F81: @ 0x08275F81
	.string "ふふーん\nおれの　ポケモンは　すごいのさ！\lどの　ポケモンよりも　かっこいいのさ！\p……って　いばってたら\nかいちょうに　おこられちゃった\pもう　いばらない　ことに　したから\nかわりに　おまえの　ポケモンに\lいばる　わざを　おしえて　やってもいいぜ{EOS}"
	.if (. - FieldScriptText_275F81) > 0x7d
	.error "FieldScriptText_275F81 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_275F81) < 0x7d
	.space 0x7d - (. - FieldScriptText_275F81)
	.endif
	@ data/text/move_tutors.inc:14 MoveTutor_Text_SwaggerDeclined
	.globl MoveTutor_Text_SwaggerDeclined
MoveTutor_Text_SwaggerDeclined: @ 0x08275FFE
	.string "えー\nなんだよ つきあい わるいな{EOS}"
	.if (. - MoveTutor_Text_SwaggerDeclined) > 0x12
	.error "MoveTutor_Text_SwaggerDeclined may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_SwaggerDeclined) < 0x12
	.space 0x12 - (. - MoveTutor_Text_SwaggerDeclined)
	.endif
	@ data/text/move_tutors.inc:18 MoveTutor_Text_SwaggerWhichMon
	.globl MoveTutor_Text_SwaggerWhichMon
MoveTutor_Text_SwaggerWhichMon: @ 0x08276010
	.string "おう!\nどの ポケモンが いばりたいんだ?{EOS}"
	.if (. - MoveTutor_Text_SwaggerWhichMon) > 0x16
	.error "MoveTutor_Text_SwaggerWhichMon may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_SwaggerWhichMon) < 0x16
	.space 0x16 - (. - MoveTutor_Text_SwaggerWhichMon)
	.endif
	@ data/text/move_tutors.inc:22 MoveTutor_Text_SwaggerTaught
	.globl MoveTutor_Text_SwaggerTaught
MoveTutor_Text_SwaggerTaught: @ 0x08276026
	.string "こんどっから いばる かわりに\nじまん するだけに しておくよ……{EOS}"
	.if (. - MoveTutor_Text_SwaggerTaught) > 0x22
	.error "MoveTutor_Text_SwaggerTaught may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_SwaggerTaught) < 0x22
	.space 0x22 - (. - MoveTutor_Text_SwaggerTaught)
	.endif
	@ data/text/move_tutors.inc:26 MoveTutor_Text_RolloutTeach
	.globl MoveTutor_Text_RolloutTeach
MoveTutor_Text_RolloutTeach: @ 0x08276048
	.string "ねえ ここから あっちに むかって\nいちども まがらずに ずーっと\lあるいて いけるって しってた?\lぼく なら ころがって いけるかも……!\pきみの ポケモンも ころがって みる?\nころがる なら おしえて あげられるよ{EOS}"
	.if (. - MoveTutor_Text_RolloutTeach) > 0x70
	.error "MoveTutor_Text_RolloutTeach may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_RolloutTeach) < 0x70
	.space 0x70 - (. - MoveTutor_Text_RolloutTeach)
	.endif
	@ data/text/move_tutors.inc:34 MoveTutor_Text_RolloutDeclined
	.globl MoveTutor_Text_RolloutDeclined
MoveTutor_Text_RolloutDeclined: @ 0x082760B8
	.string "えんりょ いらないのに!\nごろ ごろ{EOS}"
	.if (. - MoveTutor_Text_RolloutDeclined) > 0x13
	.error "MoveTutor_Text_RolloutDeclined may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_RolloutDeclined) < 0x13
	.space 0x13 - (. - MoveTutor_Text_RolloutDeclined)
	.endif
	@ data/text/move_tutors.inc:38 MoveTutor_Text_RolloutWhichMon
	.globl MoveTutor_Text_RolloutWhichMon
MoveTutor_Text_RolloutWhichMon: @ 0x082760CB
	.string "えへへ いいよ!\nぼく そっくりの ポケモンだと いいな{EOS}"
	.if (. - MoveTutor_Text_RolloutWhichMon) > 0x1d
	.error "MoveTutor_Text_RolloutWhichMon may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_RolloutWhichMon) < 0x1d
	.space 0x1d - (. - MoveTutor_Text_RolloutWhichMon)
	.endif
	@ data/text/move_tutors.inc:42 MoveTutor_Text_RolloutTaught
	.globl MoveTutor_Text_RolloutTaught
MoveTutor_Text_RolloutTaught: @ 0x082760E8
	.string "くさに ねころがると しあわせだなー\nごろ ごろ{EOS}"
	.if (. - MoveTutor_Text_RolloutTaught) > 0x19
	.error "MoveTutor_Text_RolloutTaught may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_RolloutTaught) < 0x19
	.space 0x19 - (. - MoveTutor_Text_RolloutTaught)
	.endif
	@ data/text/move_tutors.inc:46 MoveTutor_Text_FuryCutterTeach
	.globl MoveTutor_Text_FuryCutterTeach
MoveTutor_Text_FuryCutterTeach: @ 0x08276101
	.string "おなじ わざをさ\nつづけて なんども だすと\lどんどん つよくなる わざが あるの!\lしかも むしタイプで かっこいいの!\pれんぞくぎりって いうんだけど\nおぼえて みたい?{EOS}"
	.if (. - MoveTutor_Text_FuryCutterTeach) > 0x58
	.error "MoveTutor_Text_FuryCutterTeach may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_FuryCutterTeach) < 0x58
	.space 0x58 - (. - MoveTutor_Text_FuryCutterTeach)
	.endif
	@ data/text/move_tutors.inc:54 MoveTutor_Text_FuryCutterDeclined
	.globl MoveTutor_Text_FuryCutterDeclined
MoveTutor_Text_FuryCutterDeclined: @ 0x08276159
	.string "きが あわないねぇ{EOS}"
	.if (. - MoveTutor_Text_FuryCutterDeclined) > 0xa
	.error "MoveTutor_Text_FuryCutterDeclined may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_FuryCutterDeclined) < 0xa
	.space 0xa - (. - MoveTutor_Text_FuryCutterDeclined)
	.endif
	@ data/text/move_tutors.inc:57 MoveTutor_Text_FuryCutterWhichMon
	.globl MoveTutor_Text_FuryCutterWhichMon
MoveTutor_Text_FuryCutterWhichMon: @ 0x08276163
	.string "わーい!\nじゃ おぼえさせる ポケモンを おしえてね{EOS}"
	.if (. - MoveTutor_Text_FuryCutterWhichMon) > 0x1b
	.error "MoveTutor_Text_FuryCutterWhichMon may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_FuryCutterWhichMon) < 0x1b
	.space 0x1b - (. - MoveTutor_Text_FuryCutterWhichMon)
	.endif
	@ data/text/move_tutors.inc:61 MoveTutor_Text_FuryCutterTaught
	.globl MoveTutor_Text_FuryCutterTaught
MoveTutor_Text_FuryCutterTaught: @ 0x0827617E
	.string "れんぞくして あたるか どうかの\nスリルが たのしいんだよねぇ{EOS}"
	.if (. - MoveTutor_Text_FuryCutterTaught) > 0x20
	.error "MoveTutor_Text_FuryCutterTaught may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_FuryCutterTaught) < 0x20
	.space 0x20 - (. - MoveTutor_Text_FuryCutterTaught)
	.endif
	@ data/text/move_tutors.inc:65 MoveTutor_MimicTeach
	.globl MoveTutor_MimicTeach
MoveTutor_MimicTeach: @ 0x0827619E
	.string "おお おわかいの!\nわしは こども じゃが\lこのまちの じいちゃんや ばあちゃんの\lはなしかたを ものまね しておるのじゃ!\pどうかね? おわかいの\nおぬしの ポケモンに わしが\lものまねを おしえて やろうかね?{EOS}"
	.if (. - MoveTutor_MimicTeach) > 0x6c
	.error "MoveTutor_MimicTeach may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_MimicTeach) < 0x6c
	.space 0x6c - (. - MoveTutor_MimicTeach)
	.endif
	@ data/text/move_tutors.inc:74 MoveTutor_MimicDeclined
	.globl MoveTutor_MimicDeclined
MoveTutor_MimicDeclined: @ 0x0827620A
	.string "ちぇっ なーんだ!\nボク ものまね おしえたいのにな!{EOS}"
	.if (. - MoveTutor_MimicDeclined) > 0x1c
	.error "MoveTutor_MimicDeclined may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_MimicDeclined) < 0x1c
	.space 0x1c - (. - MoveTutor_MimicDeclined)
	.endif
	@ data/text/move_tutors.inc:78 MoveTutor_Text_MimicWhichMon
	.globl MoveTutor_Text_MimicWhichMon
MoveTutor_Text_MimicWhichMon: @ 0x08276226
	.string "ふぉっ ふぉっ! よかろう!\nおしえさせる ポケモンを みせてみぃ{EOS}"
	.if (. - MoveTutor_Text_MimicWhichMon) > 0x22
	.error "MoveTutor_Text_MimicWhichMon may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_MimicWhichMon) < 0x22
	.space 0x22 - (. - MoveTutor_Text_MimicWhichMon)
	.endif
	@ data/text/move_tutors.inc:82 MoveTutor_Text_MimicTaught
	.globl MoveTutor_Text_MimicTaught
MoveTutor_Text_MimicTaught: @ 0x08276248
	.string "ものまねは おくの ふかい わざじゃ!\nボ… わしの ように\lうまく できるかな?{EOS}"
	.if (. - MoveTutor_Text_MimicTaught) > 0x2a
	.error "MoveTutor_Text_MimicTaught may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_MimicTaught) < 0x2a
	.space 0x2a - (. - MoveTutor_Text_MimicTaught)
	.endif
	@ data/text/move_tutors.inc:87 MoveTutor_Text_MetronomeTeach
	.globl MoveTutor_Text_MetronomeTeach
MoveTutor_Text_MetronomeTeach: @ 0x08276272
	.string "あーん ほしいものが いっぱい!\nでも おこづかいは なくなっちゃったし……\pゆびを ふれば まほうで\nおこづかい でてくれば いーのにな!\lなんてね エヘヘ……\pしかたが ないから\nあなたの ポケモンに\lゆびをふる でも おしえて あげよっか?{EOS}"
	.if (. - MoveTutor_Text_MetronomeTeach) > 0x7c
	.error "MoveTutor_Text_MetronomeTeach may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_MetronomeTeach) < 0x7c
	.space 0x7c - (. - MoveTutor_Text_MetronomeTeach)
	.endif
	@ data/text/move_tutors.inc:97 MoveTutor_Text_MetronomeDeclined
	.globl MoveTutor_Text_MetronomeDeclined
MoveTutor_Text_MetronomeDeclined: @ 0x082762EE
	.string "そっか\nきが むいたら またおいでよ!{EOS}"
	.if (. - MoveTutor_Text_MetronomeDeclined) > 0x14
	.error "MoveTutor_Text_MetronomeDeclined may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_MetronomeDeclined) < 0x14
	.space 0x14 - (. - MoveTutor_Text_MetronomeDeclined)
	.endif
	@ data/text/move_tutors.inc:101 MoveTutor_Text_MetronomeWhichMon
	.globl MoveTutor_Text_MetronomeWhichMon
MoveTutor_Text_MetronomeWhichMon: @ 0x08276302
	.string "うん! じゃ おしえるね\nどのコが いいのかな?{EOS}"
	.if (. - MoveTutor_Text_MetronomeWhichMon) > 0x19
	.error "MoveTutor_Text_MetronomeWhichMon may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_MetronomeWhichMon) < 0x19
	.space 0x19 - (. - MoveTutor_Text_MetronomeWhichMon)
	.endif
	@ data/text/move_tutors.inc:105 MoveTutor_Text_MetronomeTaught
	.globl MoveTutor_Text_MetronomeTaught
MoveTutor_Text_MetronomeTaught: @ 0x0827631B
	.string "ゆびをふると ステキな ことが\nいっぱい おきるんだよー!\pわたしたちも つかえたら いーのにね!{EOS}"
	.if (. - MoveTutor_Text_MetronomeTaught) > 0x32
	.error "MoveTutor_Text_MetronomeTaught may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_MetronomeTaught) < 0x32
	.space 0x32 - (. - MoveTutor_Text_MetronomeTaught)
	.endif
	@ data/text/move_tutors.inc:110 MoveTutor_Text_SleepTalkTeach
	.globl MoveTutor_Text_SleepTalkTeach
MoveTutor_Text_SleepTalkTeach: @ 0x0827634D
	.string "ふん…… ばあさんめ\nめざめるパワー などに\lたより おって……\pワシと いっしょに おひるね して\nねごとでも いってたほうが たのしいのに\pもう あんたの ポケモンでも ええわ\nねごとを おぼえて つかってみんか?{EOS}"
	.if (. - MoveTutor_Text_SleepTalkTeach) > 0x6e
	.error "MoveTutor_Text_SleepTalkTeach may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_SleepTalkTeach) < 0x6e
	.space 0x6e - (. - MoveTutor_Text_SleepTalkTeach)
	.endif
	@ data/text/move_tutors.inc:119 MoveTutor_Text_SleepTalkDeclined
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MoveTutor_Text_SleepTalkDeclined
MoveTutor_Text_SleepTalkDeclined: @ 0x082763BB
	.string "そうかい そうかい……\nみんな めざめるパワーが だいすきかい{EOS}"
	.if (. - MoveTutor_Text_SleepTalkDeclined) != 0x20
	.error "MoveTutor_Text_SleepTalkDeclined must retain its original byte length"
	.endif
	@ data/text/move_tutors.inc:123 MoveTutor_Text_SleepTalkWhichMon
	.globl MoveTutor_Text_SleepTalkWhichMon
MoveTutor_Text_SleepTalkWhichMon: @ 0x082763DB
	.string "むぉう! ものわかりの いい こどもよ!\nさて ポケモンは どいつが いいかな?{EOS}"
	.if (. - MoveTutor_Text_SleepTalkWhichMon) > 0x29
	.error "MoveTutor_Text_SleepTalkWhichMon may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_SleepTalkWhichMon) < 0x29
	.space 0x29 - (. - MoveTutor_Text_SleepTalkWhichMon)
	.endif
	@ data/text/move_tutors.inc:127 MoveTutor_Text_SleepTalkTaught
	.globl MoveTutor_Text_SleepTalkTaught
MoveTutor_Text_SleepTalkTaught: @ 0x08276404
	.string "ワシ ばあさんの コイン\nいちども あてたことが なくてな……\lねごとでも ええから あたらんかな{EOS}"
	.if (. - MoveTutor_Text_SleepTalkTaught) > 0x32
	.error "MoveTutor_Text_SleepTalkTaught may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_SleepTalkTaught) < 0x32
	.space 0x32 - (. - MoveTutor_Text_SleepTalkTaught)
	.endif
	@ field-script:0x276AAF FieldScriptText_276436
	.globl FieldScriptText_276436
FieldScriptText_276436: @ 0x08276436
	.string "ふう\nこうやって　おくじょうから\lひろい　せかいを　みていると……\pなんにんもの　じぶんが　いて\nいくつもの　じんせいを　たのしめたらなー\lって　おもうの！\lムリな　はなしだけどね　うふふ\pそうだわ　あなたの　ポケモンちゃん！\nみがわりの　わざ　おぼえてみない？{EOS}"
	.if (. - FieldScriptText_276436) > 0x84
	.error "FieldScriptText_276436 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_276436) < 0x84
	.space 0x84 - (. - FieldScriptText_276436)
	.endif
	@ data/text/move_tutors.inc:143 MoveTutor_Text_SubstituteDeclined
	.globl MoveTutor_Text_SubstituteDeclined
MoveTutor_Text_SubstituteDeclined: @ 0x082764BA
	.string "あら そう?\nポケモンなら じぶんの ぶんしんを\lつくる ことが できるのに{EOS}"
	.if (. - MoveTutor_Text_SubstituteDeclined) > 0x27
	.error "MoveTutor_Text_SubstituteDeclined may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_SubstituteDeclined) < 0x27
	.space 0x27 - (. - MoveTutor_Text_SubstituteDeclined)
	.endif
	@ data/text/move_tutors.inc:148 MoveTutor_Text_SubstituteWhichMon
	.globl MoveTutor_Text_SubstituteWhichMon
MoveTutor_Text_SubstituteWhichMon: @ 0x082764E1
	.string "うふふ\nどの ポケモンちゃんが いいかしら?{EOS}"
	.if (. - MoveTutor_Text_SubstituteWhichMon) > 0x17
	.error "MoveTutor_Text_SubstituteWhichMon may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_SubstituteWhichMon) < 0x17
	.space 0x17 - (. - MoveTutor_Text_SubstituteWhichMon)
	.endif
	@ data/text/move_tutors.inc:152 MoveTutor_Text_SubstituteTaught
	.globl MoveTutor_Text_SubstituteTaught
MoveTutor_Text_SubstituteTaught: @ 0x082764F8
	.string "わたしたち にんげんは\nじぶんの じんせいを\lおもいきり たのしまなきゃ ね!\lあなたも そうなるように いのってる!{EOS}"
	.if (. - MoveTutor_Text_SubstituteTaught) > 0x3c
	.error "MoveTutor_Text_SubstituteTaught may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_SubstituteTaught) < 0x3c
	.space 0x3c - (. - MoveTutor_Text_SubstituteTaught)
	.endif
	@ field-script:0x276B17 FieldScriptText_276534
	.globl FieldScriptText_276534
FieldScriptText_276534: @ 0x08276534
	.string "もう　できんわ！\pぜったい　ムリだわ！\pかくとうタイプの　オレは\nトクサネの　ジムでは\lぜんぜん　かてんわ！\pちきしょーっ！　ボカ　ボカ！\nボカ　ボカ！　ボカ　ボカ！\pなんだよ\nそんな　めで　みるなよ！\lじめんを　なぐってる　だけだろ！\pそれとも　おまえの　ポケモンに\nばくれつパンチを　おしえて　ほしいのかよ？{EOS}"
	.if (. - FieldScriptText_276534) > 0x9d
	.error "FieldScriptText_276534 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_276534) < 0x9d
	.space 0x9d - (. - FieldScriptText_276534)
	.endif
	@ data/text/move_tutors.inc:171 MoveTutor_Text_DynamicPunchDeclined
	.globl MoveTutor_Text_DynamicPunchDeclined
MoveTutor_Text_DynamicPunchDeclined: @ 0x082765D1
	.string "ちきしょー おまえまで\nオレを ばかに するかっ!?\lボカ ボカ!{EOS}"
	.if (. - MoveTutor_Text_DynamicPunchDeclined) > 0x22
	.error "MoveTutor_Text_DynamicPunchDeclined may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_DynamicPunchDeclined) < 0x22
	.space 0x22 - (. - MoveTutor_Text_DynamicPunchDeclined)
	.endif
	@ data/text/move_tutors.inc:176 MoveTutor_Text_DynamicPunchWhichMon
	.globl MoveTutor_Text_DynamicPunchWhichMon
MoveTutor_Text_DynamicPunchWhichMon: @ 0x082765F3
	.string "うぉー! ほんとか! いいやつだな!\nどのポケモンに おしえれば いい?{EOS}"
	.if (. - MoveTutor_Text_DynamicPunchWhichMon) > 0x25
	.error "MoveTutor_Text_DynamicPunchWhichMon may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_DynamicPunchWhichMon) < 0x25
	.space 0x25 - (. - MoveTutor_Text_DynamicPunchWhichMon)
	.endif
	@ data/text/move_tutors.inc:180 MoveTutor_Text_DynamicPunchTaught
	.globl MoveTutor_Text_DynamicPunchTaught
MoveTutor_Text_DynamicPunchTaught: @ 0x08276618
	.string "なあ ばくれつパンチ つかって\nトクサネジムで かって きてくれよ!{EOS}"
	.if (. - MoveTutor_Text_DynamicPunchTaught) > 0x23
	.error "MoveTutor_Text_DynamicPunchTaught may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_DynamicPunchTaught) < 0x23
	.space 0x23 - (. - MoveTutor_Text_DynamicPunchTaught)
	.endif
	@ field-script:0x276B7F FieldScriptText_27663B
	.globl FieldScriptText_27663B
FieldScriptText_27663B: @ 0x0827663B
	.string "あーあ\nルネシティの　ジムリーダーって\lすっごく　すてきだから\lライバルが　いっぱい　なのよねー\pこの　あたしが　すてみで　ぶつかっても\nダメだったわ！\pねえ　あなた！\nせっかく　だから　この　あたしの\lじきでんの　すてみタックル！\lあなたの　ポケモンに　おしえさせてよ！{EOS}"
	.if (. - FieldScriptText_27663B) > 0x89
	.error "FieldScriptText_27663B may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_27663B) < 0x89
	.space 0x89 - (. - FieldScriptText_27663B)
	.endif
	@ data/text/move_tutors.inc:195 MoveTutor_Text_DoubleEdgeDeclined
	.globl MoveTutor_Text_DoubleEdgeDeclined
MoveTutor_Text_DoubleEdgeDeclined: @ 0x082766C4
	.string "うん もう!\nあなたに まで ふられちゃったわ{EOS}"
	.if (. - MoveTutor_Text_DoubleEdgeDeclined) > 0x18
	.error "MoveTutor_Text_DoubleEdgeDeclined may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_DoubleEdgeDeclined) < 0x18
	.space 0x18 - (. - MoveTutor_Text_DoubleEdgeDeclined)
	.endif
	@ data/text/move_tutors.inc:199 MoveTutor_Text_DoubleEdgeWhichMon
	.globl MoveTutor_Text_DoubleEdgeWhichMon
MoveTutor_Text_DoubleEdgeWhichMon: @ 0x082766DC
	.string "ん じゃあ\nどの ポケモンが いいか きめてよ{EOS}"
	.if (. - MoveTutor_Text_DoubleEdgeWhichMon) > 0x18
	.error "MoveTutor_Text_DoubleEdgeWhichMon may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_DoubleEdgeWhichMon) < 0x18
	.space 0x18 - (. - MoveTutor_Text_DoubleEdgeWhichMon)
	.endif
	@ data/text/move_tutors.inc:203 MoveTutor_Text_DoubleEdgeTaught
	.globl MoveTutor_Text_DoubleEdgeTaught
MoveTutor_Text_DoubleEdgeTaught: @ 0x082766F4
	.string "もう いいわっ!\nあたしも こいを すてて\lつよい オンナに なってやるっ!{EOS}"
	.if (. - MoveTutor_Text_DoubleEdgeTaught) > 0x27
	.error "MoveTutor_Text_DoubleEdgeTaught may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_DoubleEdgeTaught) < 0x27
	.space 0x27 - (. - MoveTutor_Text_DoubleEdgeTaught)
	.endif
	@ data/text/move_tutors.inc:208 MoveTutor_Text_ExplosionTeach
	.globl MoveTutor_Text_ExplosionTeach
MoveTutor_Text_ExplosionTeach: @ 0x0827671B
	.string "ぼかぁ こんな イナカで\nいつまでも くすぶっとる つもりは\lまったく ないんじゃあー!\pみとれよ いつか トカイに でて\nドッカーンと はでに やって やるわい!\pおいっ! おまえ きいとったん なら\nけいきよく だいばくはつを おしえさせろ!{EOS}"
	.if (. - MoveTutor_Text_ExplosionTeach) > 0x7c
	.error "MoveTutor_Text_ExplosionTeach may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_ExplosionTeach) < 0x7c
	.space 0x7c - (. - MoveTutor_Text_ExplosionTeach)
	.endif
	@ data/text/move_tutors.inc:217 MoveTutor_Text_ExplosionDeclined
	.globl MoveTutor_Text_ExplosionDeclined
MoveTutor_Text_ExplosionDeclined: @ 0x08276797
	.string "がーっ!\nイナカもん だからって ことわるなあ!{EOS}"
	.if (. - MoveTutor_Text_ExplosionDeclined) > 0x19
	.error "MoveTutor_Text_ExplosionDeclined may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_ExplosionDeclined) < 0x19
	.space 0x19 - (. - MoveTutor_Text_ExplosionDeclined)
	.endif
	@ data/text/move_tutors.inc:221 MoveTutor_Text_ExplosionWhichMon
	.globl MoveTutor_Text_ExplosionWhichMon
MoveTutor_Text_ExplosionWhichMon: @ 0x082767B0
	.string "ぃよーし ドッカーンと おぼえさせるか!\nどの ポケモンが ぶちかますんか?{EOS}"
	.if (. - MoveTutor_Text_ExplosionWhichMon) > 0x27
	.error "MoveTutor_Text_ExplosionWhichMon may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_ExplosionWhichMon) < 0x27
	.space 0x27 - (. - MoveTutor_Text_ExplosionWhichMon)
	.endif
	@ data/text/move_tutors.inc:225 MoveTutor_Text_ExplosionTaught
	.globl MoveTutor_Text_ExplosionTaught
MoveTutor_Text_ExplosionTaught: @ 0x082767D7
	.string "いつも ポケモンに ばっか\nだいばくはつを おしえとって\lかんじんの ぼくは いつまでも\lばくはつ できん……\pでも ほんとは\nこのまちに いつまでも いたいから\lかも しれん……{EOS}"
	.if (. - MoveTutor_Text_ExplosionTaught) > 0x5b
	.error "MoveTutor_Text_ExplosionTaught may not grow beyond its original slot"
	.endif
	.if (. - MoveTutor_Text_ExplosionTaught) < 0x5b
	.space 0x5b - (. - MoveTutor_Text_ExplosionTaught)
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
	loadword 0x00, FieldScriptText_275F81
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276886
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276886
	loadword 0x00, MoveTutor_Text_SwaggerWhichMon
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
	loadword 0x00, MoveTutor_Text_SwaggerDeclined
	callstd 0x04
	release
	end
EventScript_08276890: @ 0x08276890
EventScript_JP_08276890: @ 0x08276890
	loadword 0x00, MoveTutor_Text_SwaggerTaught
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
	loadword 0x00, MoveTutor_Text_RolloutTeach
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082768EE
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082768EE
	loadword 0x00, MoveTutor_Text_RolloutWhichMon
	callstd 0x04
	setvar 0x8005, 0x0010
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082768EE
	setflag 0x01B2
	goto EventScript_JP_082768F8
	.byte 0x02
EventScript_JP_082768EE: @ 0x082768EE
	loadword 0x00, MoveTutor_Text_RolloutDeclined
	callstd 0x04
	release
	end
EventScript_JP_082768F8: @ 0x082768F8
	loadword 0x00, MoveTutor_Text_RolloutTaught
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
	loadword 0x00, MoveTutor_Text_FuryCutterTeach
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276956
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276956
	loadword 0x00, MoveTutor_Text_FuryCutterWhichMon
	callstd 0x04
	setvar 0x8005, 0x001D
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276956
	setflag 0x01B3
	goto EventScript_JP_08276960
	.byte 0x02
EventScript_JP_08276956: @ 0x08276956
	loadword 0x00, MoveTutor_Text_FuryCutterDeclined
	callstd 0x04
	release
	end
EventScript_JP_08276960: @ 0x08276960
	loadword 0x00, MoveTutor_Text_FuryCutterTaught
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
	loadword 0x00, MoveTutor_MimicTeach
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082769BE
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082769BE
	loadword 0x00, MoveTutor_Text_MimicWhichMon
	callstd 0x04
	setvar 0x8005, 0x0007
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082769BE
	setflag 0x01B4
	goto EventScript_JP_082769C8
	.byte 0x02
EventScript_JP_082769BE: @ 0x082769BE
	loadword 0x00, MoveTutor_MimicDeclined
	callstd 0x04
	release
	end
EventScript_JP_082769C8: @ 0x082769C8
	loadword 0x00, MoveTutor_Text_MimicTaught
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
	loadword 0x00, MoveTutor_Text_MetronomeTeach
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A26
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A26
	loadword 0x00, MoveTutor_Text_MetronomeWhichMon
	callstd 0x04
	setvar 0x8005, 0x0008
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A26
	setflag 0x01B5
	goto EventScript_JP_08276A30
	.byte 0x02
EventScript_JP_08276A26: @ 0x08276A26
	loadword 0x00, MoveTutor_Text_MetronomeDeclined
	callstd 0x04
	release
	end
EventScript_JP_08276A30: @ 0x08276A30
	loadword 0x00, MoveTutor_Text_MetronomeTaught
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
	loadword 0x00, MoveTutor_Text_SleepTalkTeach
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A8E
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A8E
	loadword 0x00, MoveTutor_Text_SleepTalkWhichMon
	callstd 0x04
	setvar 0x8005, 0x0018
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276A8E
	setflag 0x01B6
	goto EventScript_JP_08276A98
	.byte 0x02
EventScript_JP_08276A8E: @ 0x08276A8E
	loadword 0x00, MoveTutor_Text_SleepTalkDeclined
	callstd 0x04
	release
	end
EventScript_JP_08276A98: @ 0x08276A98
	loadword 0x00, MoveTutor_Text_SleepTalkTaught
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
	loadword 0x00, FieldScriptText_276436
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276AF6
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276AF6
	loadword 0x00, MoveTutor_Text_SubstituteWhichMon
	callstd 0x04
	setvar 0x8005, 0x000E
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276AF6
	setflag 0x01B7
	goto EventScript_JP_08276B00
	.byte 0x02
EventScript_JP_08276AF6: @ 0x08276AF6
	loadword 0x00, MoveTutor_Text_SubstituteDeclined
	callstd 0x04
	release
	end
EventScript_JP_08276B00: @ 0x08276B00
	loadword 0x00, MoveTutor_Text_SubstituteTaught
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
	loadword 0x00, FieldScriptText_276534
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276B5E
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276B5E
	loadword 0x00, MoveTutor_Text_DynamicPunchWhichMon
	callstd 0x04
	setvar 0x8005, 0x000F
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276B5E
	setflag 0x01B8
	goto EventScript_JP_08276B68
	.byte 0x02
EventScript_JP_08276B5E: @ 0x08276B5E
	loadword 0x00, MoveTutor_Text_DynamicPunchDeclined
	callstd 0x04
	release
	end
EventScript_JP_08276B68: @ 0x08276B68
	loadword 0x00, MoveTutor_Text_DynamicPunchTaught
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
	loadword 0x00, FieldScriptText_27663B
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276BC6
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276BC6
	loadword 0x00, MoveTutor_Text_DoubleEdgeWhichMon
	callstd 0x04
	setvar 0x8005, 0x0004
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276BC6
	setflag 0x01B9
	goto EventScript_JP_08276BD0
	.byte 0x02
EventScript_JP_08276BC6: @ 0x08276BC6
	loadword 0x00, MoveTutor_Text_DoubleEdgeDeclined
	callstd 0x04
	release
	end
EventScript_JP_08276BD0: @ 0x08276BD0
	loadword 0x00, MoveTutor_Text_DoubleEdgeTaught
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
	loadword 0x00, MoveTutor_Text_ExplosionTeach
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276C2E
	call EventScript_JP_08276C49
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276C2E
	loadword 0x00, MoveTutor_Text_ExplosionWhichMon
	callstd 0x04
	setvar 0x8005, 0x000C
	call EventScript_JP_08276C42
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08276C2E
	setflag 0x01BA
	goto EventScript_JP_08276C38
	.byte 0x02
EventScript_JP_08276C2E: @ 0x08276C2E
	loadword 0x00, MoveTutor_Text_ExplosionDeclined
	callstd 0x04
	release
	end
EventScript_JP_08276C38: @ 0x08276C38
	loadword 0x00, MoveTutor_Text_ExplosionTaught
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
	loadword 0x00, MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce
	callstd 0x05
	return
	.byte 0x16, 0x02, 0x40, 0x00, 0x00, 0x16, 0x04, 0x80, 0x04, 0x00, 0x25, 0xF8, 0x01, 0x16, 0x04, 0x80
	.byte 0x01, 0x00, 0x16, 0x05, 0x80, 0x05, 0x00, 0x25, 0xE7, 0x00, 0x21, 0x0D, 0x80, 0x02, 0x00, 0x06
	.byte 0x01, 0xE5, 0x6C, 0x27, 0x08, 0x21, 0x0D, 0x80, 0x03, 0x00, 0x06, 0x01, 0xE5, 0x6C, 0x27, 0x08
	.byte 0x21, 0x0D, 0x80, 0x09, 0x00, 0x06, 0x01, 0xE5, 0x6C, 0x27, 0x08, 0x02, 0x03, 0x40, 0x00, 0x00
	.byte 0x98, 0x6C, 0x27, 0x08, 0x00, 0x00, 0x16, 0x03, 0x40, 0x01, 0x00, 0x02, 0x40, 0x00, 0x00, 0xC2
	.byte 0x6C, 0x27, 0x08, 0x01, 0x40, 0x01, 0x00, 0xFB, 0x6C, 0x27, 0x08, 0x00, 0x00
