@ Phase 2: テキスト化（日本版）
@ 文字コードは charmap.txt。.string は tools/preproc がバイト列へ変換する。
@ 各エントリの占有サイズはオリジナルROMと同じにし、後続データのアドレスを維持する。

	.incbin "baserom.gba", 0x1f1a71, 0xc

	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:: @ 0x81f1a7d (160 bytes)
	.string "え? オダマキはかせ?\pはかせ なら フィールドワークに\nでかけていて いませんよ\p……あ フィールドワークって いうのは\pじっさいに のやまへ でかけていって\nけんきゅうを すること ですね!\pはかせは つくえのうえで けんきゅうを\nするよりも じっさいに そとへ とびだして\lたいけんする タイプのひと なんです!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork
	.set gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork + 0x62

	.incbin "baserom.gba", 0x1f1b1d, 0x3e

	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:: @ 0x81f1b5b (100 bytes)
	.string "オダマキはかせは\nポケモンが どこに すんでいるのか\lぶんぷの ちょうさを なさっています\p{RIVAL}さんは すきな おとうさんの\nおてつだいを なさって いるのですよ$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:: @ 0x81f1bad (212 bytes)
	.string "オダマキ『……さて {PLAYER}{KUN}!\pきみのことは おとうさん から\nいつも きかされていたよ!\pきみは まだ じぶんの ポケモンを\nもったことが ないんだって?\pそれにしては さっきの たたかいぶり\nなかなか みごと だったよ!\pやっぱり きみには おとうさんの\nちが ながれて いるんだな!\pそうそう! たすけてくれた おれいに\nさっきの ポケモンは わたしから\lきみへの プレゼントに しよう!\p{PLAYER}は\n{STR_VAR_1}を もらった!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:: @ 0x81f1c81 (39 bytes)
	.string "オダマキ『せっかく だから {STR_VAR_1}に\nニックネームを つけてみては どうだい?$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:: @ 0x81f1ca8 (116 bytes)
	.string "オダマキ『これから さらに\nけいけんを つんで いけば\lいい トレーナーに なれそうだ!\pちょうど うちの {RIVAL}も\nわたしを てつだい ながら\lポケモンの ちょうさを しているんだ\p{PLAYER}{KUN} いちど\nあいに いったら どうだろう?$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:: @ 0x81f1d1c (54 bytes)
	.string "オダマキ『そうか!\nそれは {RIVAL}も よろこぶぞ!\pトレーナーが どんな ものか\nおしえてもらうと いいぞ!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:: @ 0x81f1d52 (32 bytes)
	.string "オダマキ『そんなこと いわずに\nあいに いったら どうだろう?$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:: @ 0x81f1d72 (106 bytes)
	.string "オダマキ『{RIVAL} だったら\nいえに かえってるんじゃ ないのか?\pそれとも また どこかの くさむらに\nもぐりこんで いるのかも……\pもしも きみの ポケモンが キズついたら\nじぶんの いえで やすむと いいぞ!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:: @ 0x81f1ddc (144 bytes)
	.string "オダマキ『おっ {PLAYER}{KUN}!\pはじめてで {RIVAL}に\nかつ だなんて すごいじゃないか!\p{RIVAL}は かなり まえから\nわたしの けんきゅうを てつだっていて\lトレーナーれきは けっこう ながいんだよ!\pうむ! {PLAYER}{KUN} にも\nけんきゅうの ために とりよせた\lこの ポケモンずかんを あげよう!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:: @ 0x81f1e6c (19 bytes)
	.string "{PLAYER}は\nポケモンずかんを もらった!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:: @ 0x81f1e7f (178 bytes)
	.string "オダマキ『その ポケモンずかんは\nきみが であった ポケモンを\pじどうてきに きろく していってくれる\nハイテクな どうぐ なんだ!\p{RIVAL}も その ずかんを もっていて\nあちこちに あそびに いくんだな\pで めずらしい ポケモンを つかまえて\nずかんに きろく できるとだね\pフィールドワークを している わたしを\nさがしだしては みせて くれるんだよ!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:: @ 0x81f1f31 (65 bytes)
	.string "オダマキ『きみの ゆくてには\nたくさんの ポケモンが まっているよ!\pあー はやく フィールドワークに\nいきたく なってきたぞ!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:: @ 0x81f1f72 (65 bytes)
	.string "ハルカ『{PLAYER}{KUN}も\nポケモンずかん もらったんだね!\pよかったね! あたしと いっしょだよ!\nじゃあ あたしは これを あげる!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:: @ 0x81f1fb3 (102 bytes)
	.string "ハルカ『ポケモンが\nたくさん いると たのしいよ!\pあたし いろんな ポケモン さがしたいから\nいろんな ところを さがすわ!\pそして かわいい ポケモンが いたら\nモンスターボールで つかまえちゃう!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:: @ 0x81f2019 (15 bytes)
	.string "あら? バッグ いっぱいだよ$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:: @ 0x81f2028 (32 bytes)
	.string "ハルカ『こんどは どこまで\nポケモンを さがしに いこうかな?$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:: @ 0x81f2048 (42 bytes)
	.string "ユウキ『ふうん {PLAYER}も\nポケモンずかん もらったのか\pじゃあ オレは これ やるよ$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:: @ 0x81f2072 (99 bytes)
	.string "ユウキ『ポケモンが\nたくさん いると たのしいからな\pオレ いろんな ポケモン さがすため\nいろんな ところに いくんだ\pそして かっこいい ポケモンが いたら\nモンスターボールで つかまえるんだ$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:: @ 0x81f20d5 (15 bytes)
	.string "おや? バッグ いっぱいだよ$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:: @ 0x81f20e4 (31 bytes)
	.string "ユウキ『こんどは どこに\nポケモン さがしに いこうかな……$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:: @ 0x81f2103 (36 bytes)
	.string "なんか すごそうな マシンだ!\nはかせが けんきゅうに つかうのかな?$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:: @ 0x81f2127 (38 bytes)
	.string "けんきゅうに つかわれている パソコンだ!\n…… さわるのは やめておこう$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:: @ 0x81f214d (28 bytes)
	.string "ポケモンに ついて かかれた\nほんが いっぱい ある!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:: @ 0x81f2169 (19 bytes)
	.string "むずかしそうな ほんが おいてある!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:: @ 0x81f217c (242 bytes)
	.string "オダマキ『……さて\p{PLAYER}{KUN}と {RIVAL}に ポケモンの\nちょうさを おねがい していた わけだが\pきみたちの どりょくの おかげで\nいろんな ことが わかってきた!\pどうやら ホウエンちほう には\nそれいがいの ちほうの ポケモンも\lせいそく している らしいんだ!\pそれだけ ホウエンちほうは\nゆたかな しぜんに めぐまれている\lという ことなんだろうな!\pというわけで きみたちの ずかんを\nぜんこくばんに バージョンアップ\lしてあげようと おもう!\pさあ ずかんを かしておくれ!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:: @ 0x81f226e (72 bytes)
	.string "ハルカ『えへへー!\pあたしの ずかんまで\nぜんこくばんに してもらえる なんて\p{PLAYER}{KUN}が たくさん ポケモンを\nしらべてくれた おかげだね!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:: @ 0x81f22b6 (72 bytes)
	.string "ユウキ『オレ はりきって ホウエンじゅうの\nポケモンのこと しらべたからな\p{PLAYER}も ずかんを ぜんこくばんに\nしてもらえて ラッキーだったな!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:: @ 0x81f22fe (14 bytes)
	.string "オダマキ『ホイ できたぞ!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:: @ 0x81f230c (34 bytes)
	.string "{PLAYER}の ポケモンずかんが\nぜんこくばんに バージョンアップ した!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:: @ 0x81f232e (90 bytes)
	.string "オダマキ『いいかい?\nチャンピオンに なったから といって\lポケモンの みちに おわりは ないんだ\pまだ あしを ふみいれていない くさむらは\nいつまでも きみを まっているよ!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:: @ 0x81f2388 (62 bytes)
	.string "ハルカ『さーて フィールドワークは\nちょっとだけ おやすみして\pしばらくは ここで\nはかせの おてつだいでも しよっかなー$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:: @ 0x81f23c6 (60 bytes)
	.string "ユウキ『オレは とりあえず\nフィールドワークは おやすみだな!\pしばらくは ここで\nはかせの てつだいでも してるよ!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:: @ 0x81f2402 (238 bytes)
	.string "オダマキ『おお {PLAYER}{KUN}!\nちょっと ずかんを みせて もらうよ\p…… …… ……\n…… …… ……\p……うむ やはり まちがいない!\nキミは ほんとうに ホウエンちほうの\lずかんを かんせい させたんだな!\pいやー たいしたもんだ!\pきみの その すばらしい はたらきに\nかんしゃの きもちを こめて\lわたしから プレゼントを おくろう!\pそれは……\pほかの ちほうでしか みつからない\nめずらしい ポケモンだよ!\p3ひきの なかから\nすきなものを 1ひきだけ あげよう!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:: @ 0x81f24f0 (66 bytes)
	.string "オダマキ『ほかの ちほうでしか\nみつからない めずらしい ポケモンだよ!\p3ひきの なかから\nすきなものを 1ひきだけ あげよう!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:: @ 0x81f2532 (60 bytes)
	.string "オダマキ『ほのおの ポケモン ヒノアラシに\nめを つけるとは やはり するどいな!\pじゃあ ヒノアラシで いいんだね?$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:: @ 0x81f256e (56 bytes)
	.string "オダマキ『みずの ポケモン ワニノコか\nうーむ いいものを えらぶじゃないか!\pよし ワニノコで いいんだね?$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:: @ 0x81f25a6 (54 bytes)
	.string "オダマキ『くさの ポケモン チコリータか\nさすがだ わかってるなあ!\pならば チコリータで けっていだね?$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:: @ 0x81f25dc (45 bytes)
	.string "オダマキ『じっくり かんがえて\nきめると いいよ\lどれも きちょうな ポケモン だからね$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:: @ 0x81f2609 (27 bytes)
	.string "オダマキ『なるほど!\nいい ポケモンを えらんだね!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:: @ 0x81f2624 (25 bytes)
	.string "{PLAYER}は オダマキはかせ から\n{STR_VAR_1}を もらった!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:: @ 0x81f263d (24 bytes)
	.string "もらった {STR_VAR_1}に\nニックネームを つけますか?$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:: @ 0x81f2655 (96 bytes)
	.string "オダマキ『{PLAYER}{KUN} いいかい?\nホウエンの ずかんが かんせい しても\lポケモンの みちに おわりは ないんだ\pまだ あしを ふみいれていない くさむらは\nいつまでも きみを まっているよ!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:: @ 0x81f26b5 (39 bytes)
	.string "やくそくの 1ひきは もう もらったから\nのこりには さわらないで おこう!$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:: @ 0x81f26dc (28 bytes)
	.string "おや? それいじょう\nポケモンを もてない みたいだな$"


	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchInLab
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchInLab:: @ 0x81f26f8
	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:: @ 0x81f26f8 (102 bytes)
	.string "ハルカ『{PLAYER}{KUN}は\nこのあと…… どうする つもり?\pポケモン しょうぶの みちを きわめる?\pそれとも ぜんこく ずかんの\nかんせいを めざすの?\pあたしは ここで\nはかせの おてつだいを つづけるわ$"
	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:: @ 0x81f275e (56 bytes)
	.string "ユウキ『オレは ポケモン あつめるより\nこれは! と おもった 1ひきを\lじっくり そだてるのが すきなのさ!$"
	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:: @ 0x81f2796 (44 bytes)
	.string "ハルカ『あっ {PLAYER}{KUN}!\nバトルフロンティア っていう ところには\lもう いってみた?$"
	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:: @ 0x81f27c2 (42 bytes)
	.string "ユウキ『やあ {PLAYER}か!\nバトルフロンティア って ところには\lもう いってみたか?$"
	.globl gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:: @ 0x81f27ec (231 bytes)
	.string "…… …… ……\n…… …… …… ピッ!\pエニシダ『やあやあ {PLAYER}{KUN}!\nわたしだよ エニシダだよ!\pいま タイドリップごうに のってるんだけど\nやっぱり うみは きもちが いいねえー\pところで……\pきみを しょうたい したい ばしょが\nあるんだけど どうだい?\pもし きょうみが あるなら\nカイナか ミナモの ふねのりばから\lふねに のっておくれ!\pくわしいことは あったときに おしえよう\nじゃあな まってるぞ!\p…… …… ……\n…… …… …… ツー$"


	.incbin "baserom.gba", 0x1f28d3, 0xfb3d
