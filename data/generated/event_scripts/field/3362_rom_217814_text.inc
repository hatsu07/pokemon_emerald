	@ data/maps/MtPyre_Summit/scripts.inc:424 MtPyre_Summit_Text_Grunt1Intro (+1 aliases)
	.globl MtPyre_Summit_Text_Grunt1Intro
MtPyre_Summit_Text_Grunt1Intro: @ 0x08216FD6
	.string "くっそー! マグマだんの れんちゅうに\nさきを こされて しまったが\pオレたちだって まけちゃ いないぜ!{EOS}"
	.if (. - MtPyre_Summit_Text_Grunt1Intro) > 0x36
	.error "MtPyre_Summit_Text_Grunt1Intro may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_Grunt1Intro) < 0x36
	.space 0x36 - (. - MtPyre_Summit_Text_Grunt1Intro)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:429 MtPyre_Summit_Text_Grunt1Defeat (+1 aliases)
	.globl MtPyre_Summit_Text_Grunt1Defeat
MtPyre_Summit_Text_Grunt1Defeat: @ 0x0821700C
	.string "おまえ…… にげていった マグマだんが\nもどって きたのかと おもったんだよ{EOS}"
	.if (. - MtPyre_Summit_Text_Grunt1Defeat) > 0x27
	.error "MtPyre_Summit_Text_Grunt1Defeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_Grunt1Defeat) < 0x27
	.space 0x27 - (. - MtPyre_Summit_Text_Grunt1Defeat)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:433 MtPyre_Summit_Text_Grunt1PostBattle
	.globl MtPyre_Summit_Text_Grunt1PostBattle
MtPyre_Summit_Text_Grunt1PostBattle: @ 0x08217033
	.string "たしかに おまえは つよいな……\nだけど おれたちは たくさん いるんだぞ!{EOS}"
	.if (. - MtPyre_Summit_Text_Grunt1PostBattle) > 0x27
	.error "MtPyre_Summit_Text_Grunt1PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_Grunt1PostBattle) < 0x27
	.space 0x27 - (. - MtPyre_Summit_Text_Grunt1PostBattle)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:437 MtPyre_Summit_Text_Grunt2Intro (+1 aliases)
	.globl MtPyre_Summit_Text_Grunt2Intro
MtPyre_Summit_Text_Grunt2Intro: @ 0x0821705A
	.string "おっ ざんねん だったな!\pもうすこし はやく ここにくれば\nあの よわっちょろい マグマだんとの\lしょうぶで すんだ はずなのに\pいまごろ きた おかげで\nつよい オレたちが あいてだぜ!{EOS}"
	.if (. - MtPyre_Summit_Text_Grunt2Intro) > 0x60
	.error "MtPyre_Summit_Text_Grunt2Intro may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_Grunt2Intro) < 0x60
	.space 0x60 - (. - MtPyre_Summit_Text_Grunt2Intro)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:445 MtPyre_Summit_Text_Grunt2Defeat (+1 aliases)
	.globl MtPyre_Summit_Text_Grunt2Defeat
MtPyre_Summit_Text_Grunt2Defeat: @ 0x082170BA
	.string "うーむ…… マグマだんに\nあいてを させれば よかった……{EOS}"
	.if (. - MtPyre_Summit_Text_Grunt2Defeat) > 0x1e
	.error "MtPyre_Summit_Text_Grunt2Defeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_Grunt2Defeat) < 0x1e
	.space 0x1e - (. - MtPyre_Summit_Text_Grunt2Defeat)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:449 MtPyre_Summit_Text_Grunt2PostBattle
	.globl gText_Rom_2170D8
gText_Rom_2170D8: @ 0x082170D8
	.string "なにも しらないくせに\nオレたちの じゃまを するんじゃないぜ!{EOS}"
	.if (. - gText_Rom_2170D8) > 0x21
	.error "gText_Rom_2170D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2170D8) < 0x21
	.space 0x21 - (. - gText_Rom_2170D8)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:453 MtPyre_Summit_Text_Grunt3Intro (+1 aliases)
	.globl MtPyre_Summit_Text_Grunt3Intro
MtPyre_Summit_Text_Grunt3Intro: @ 0x082170F9
	.string "おまえ…… えんとつやまで あったな!\pどっちの だんいん でもないのに\nなぜ こんな ところに いるんだ!?{EOS}"
	.if (. - MtPyre_Summit_Text_Grunt3Intro) > 0x38
	.error "MtPyre_Summit_Text_Grunt3Intro may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_Grunt3Intro) < 0x38
	.space 0x38 - (. - MtPyre_Summit_Text_Grunt3Intro)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:459 MtPyre_Summit_Text_Grunt3Defeat (+1 aliases)
	.globl MtPyre_Summit_Text_Grunt3Defeat
MtPyre_Summit_Text_Grunt3Defeat: @ 0x08217131
	.string "ぐぐぐ……\nじゃまを するなら マグマだんに しろ……{EOS}"
	.if (. - MtPyre_Summit_Text_Grunt3Defeat) > 0x1c
	.error "MtPyre_Summit_Text_Grunt3Defeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_Grunt3Defeat) < 0x1c
	.space 0x1c - (. - MtPyre_Summit_Text_Grunt3Defeat)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:463 MtPyre_Summit_Text_Grunt3PostBattle
	.globl MtPyre_Summit_Text_Grunt3PostBattle
MtPyre_Summit_Text_Grunt3PostBattle: @ 0x0821714D
	.string "まあいいさ じかんは かせげた!\pリーダーの もくてきの もの\nうばえた はずだぜ!{EOS}"
	.if (. - MtPyre_Summit_Text_Grunt3PostBattle) > 0x2b
	.error "MtPyre_Summit_Text_Grunt3PostBattle may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_Grunt3PostBattle) < 0x2b
	.space 0x2b - (. - MtPyre_Summit_Text_Grunt3PostBattle)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:469 MtPyre_Summit_Text_Grunt4Intro (+1 aliases)
	.globl MtPyre_Summit_Text_Grunt4Intro
MtPyre_Summit_Text_Grunt4Intro: @ 0x08217178
	.string "あっ わかった!\nあんた マグマだんに はいろうと したけど\lいれて もらえなかったんでしょ!\pはん! うちら アクアだんに だって\nいれてやんないよ!{EOS}"
	.if (. - MtPyre_Summit_Text_Grunt4Intro) > 0x4d
	.error "MtPyre_Summit_Text_Grunt4Intro may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_Grunt4Intro) < 0x4d
	.space 0x4d - (. - MtPyre_Summit_Text_Grunt4Intro)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:476 MtPyre_Summit_Text_Grunt4Defeat (+1 aliases)
	.globl MtPyre_Summit_Text_Grunt4Defeat
MtPyre_Summit_Text_Grunt4Defeat: @ 0x082171C5
	.string "そうしたら アクアだんに いれて\nやらない ことも ないよ……{EOS}"
	.if (. - MtPyre_Summit_Text_Grunt4Defeat) > 0x20
	.error "MtPyre_Summit_Text_Grunt4Defeat may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_Grunt4Defeat) < 0x20
	.space 0x20 - (. - MtPyre_Summit_Text_Grunt4Defeat)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:480 MtPyre_Summit_Text_Grunt4PostBattle
	.globl gText_Rom_2171E5
gText_Rom_2171E5: @ 0x082171E5
	.string "リーダーと あたしたち だんいんとの\nみごとな コンビネーション ってわけさ!{EOS}"
	.if (. - gText_Rom_2171E5) > 0x28
	.error "gText_Rom_2171E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2171E5) < 0x28
	.space 0x28 - (. - gText_Rom_2171E5)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:484 MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo
	.globl gText_Rom_21720D
gText_Rom_21720D: @ 0x0821720D
	.string "アオギリ『マグマだんの マツブサに\nさきを こされて しまったが\lわれわれも ようじは すませたぜ!\pおくりびやまに まつられて いた\nべにいろのたま……\lたしかに アオギリが いただいた!\pふふふ……\nこれで われわれの もくてきも\lはたせると いうものだ……\pさあ!\nここは ひきあげるぞ!{EOS}"
	.if (. - gText_Rom_21720D) > 0x94
	.error "gText_Rom_21720D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21720D) < 0x94
	.space 0x94 - (. - gText_Rom_21720D)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:494 MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis
	.globl gText_Rom_2172A1
gText_Rom_2172A1: @ 0x082172A1
	.string "ああ なんという ことだ……!\pあいいろのたま だけではなく\nべにいろのたま までもが\lうばわれて しまうとは……\pあいいろのたまと べにいろのたまが\nはなればなれに なって しまうなど\lけっして あっては ならないこと……\pあの おとこたちは ふたつのたまで\nいったい なにを するきなのか……\p…… …… ……\n…… …… ……\pそういえば さいしょに あらわれて\nあいいろのたまを うばって いった\lマグマだん とやらが\lこんなものを おとしていった……\pこれが なんなのか わたしには わからん\pおまえさん よかったら こいつを\nもらって おくれ……\pもしかすると なにかの やくに\nたつのでは ないだろうか……!{EOS}"
	.if (. - gText_Rom_2172A1) > 0x138
	.error "gText_Rom_2172A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2172A1) < 0x138
	.space 0x138 - (. - gText_Rom_2172A1)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:514 MtPyre_Summit_Text_OrbsHaveBeenTaken
	.globl MtPyre_Summit_Text_OrbsHaveBeenTaken
MtPyre_Summit_Text_OrbsHaveBeenTaken: @ 0x082173D9
	.string "あやしげな ふたりの おとこに うばわれた\nあいいろのたまと べにいろのたま……\pふたつが はなればなれ では\nきっと よくないことが おこる……{EOS}"
	.if (. - MtPyre_Summit_Text_OrbsHaveBeenTaken) > 0x4a
	.error "MtPyre_Summit_Text_OrbsHaveBeenTaken may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_OrbsHaveBeenTaken) < 0x4a
	.space 0x4a - (. - MtPyre_Summit_Text_OrbsHaveBeenTaken)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:520 MtPyre_Summit_Text_GroudonKyogreAwakened
	.globl gText_Rom_217423
gText_Rom_217423: @ 0x08217423
	.string "なんと……\nグラードンと カイオーガが\lめざめて しまったと いうのか……\pかつて 2ひきの ポケモンの\nいかりを しずめたのが\lあいいろのたまと べにいろのたまだと\lそう いわれておる……\pそして そのたまの しんの もちぬしが\nどこかに いると いうのだが……\pそれが ひと なのか\nあるいは ポケモン なのか\pこればっかりは\nだれにも わからんのだよ……{EOS}"
	.if (. - gText_Rom_217423) > 0xb5
	.error "gText_Rom_217423 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217423) < 0xb5
	.space 0xb5 - (. - gText_Rom_217423)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:534 MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs
	.globl MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs: @ 0x082174D8
	.string "ふたつのたまを うばった おとこたちが\nみずから かえしに くるとは……\pあの ふたり……\nあんがい わるいやつでは ないのかもな{EOS}"
	.if (. - MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs) > 0x42
	.error "MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs) < 0x42
	.space 0x42 - (. - MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:540 MtPyre_Summit_Text_SuperAncientPokemonTaughtUs
	.globl gText_Rom_21751A
gText_Rom_21751A: @ 0x0821751A
	.string "だいちと うみと おおぞらの けしん……\pそれが ちょうこだいポケモンの\nしょうたい とも いわれておる……\pわしら にんげんや ポケモンに\nいのちが あるように\lこの せかいだって いきている……\pちょうこだいポケモンは わしたちに\nそのことを おしえて くれたのさ……{EOS}"
	.if (. - gText_Rom_21751A) > 0x89
	.error "gText_Rom_21751A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21751A) < 0x89
	.space 0x89 - (. - gText_Rom_21751A)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:551 MtPyre_Summit_Text_WillYouHearOutMyTale
	.globl MtPyre_Summit_Text_WillYouHearOutMyTale
MtPyre_Summit_Text_WillYouHearOutMyTale: @ 0x082175A3
	.string "おくりびやまは ポケモンの たましいを\nなぐさめる ための ところ……\pここは たかい ばしょに あって\nホウエンを みわたす ことが できるから\lポケモンたちの たましいも\lやすらぎを おぼえるの じゃろう……\pおまえさんが ここに きたのも\nなにかの えん……\pホウエンちほうに つたわる はなしを\nきいて いきなされ……{EOS}"
	.if (. - MtPyre_Summit_Text_WillYouHearOutMyTale) > 0xa4
	.error "MtPyre_Summit_Text_WillYouHearOutMyTale may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_WillYouHearOutMyTale) < 0xa4
	.space 0xa4 - (. - MtPyre_Summit_Text_WillYouHearOutMyTale)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:562 MtPyre_Summit_Text_GroudonKyogreTale
	.globl MtPyre_Summit_Text_GroudonKyogreTale
MtPyre_Summit_Text_GroudonKyogreTale: @ 0x08217647
	.string "とおい とおい おおむかしの こと……\pせかいでは りくと うみの ポケモンが\nはげしい たたかいを くりひろげていた\pりくの ポケモンは\nだいちを もりあげ じめんを ひろげ\pうみの ポケモンは\nあらなみを おこして うみを ひろげた\p2ひきの たたかいは おわることなく\nこの せかいは もえさかる ほのおと\lふきあれる あらしで うめつくされた\pそれを しずめたのが\nあいいろのたま と べにいろのたま……\pふたつの たまから ひろがる ひかりが\n2ひきの いかりを しずめた\pそして おとなしくなった 2ひきは\nかいてい ふかく もぐっていき\lやがて そのすがたを けしたのじゃ……{EOS}"
	.if (. - MtPyre_Summit_Text_GroudonKyogreTale) > 0x128
	.error "MtPyre_Summit_Text_GroudonKyogreTale may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_GroudonKyogreTale) < 0x128
	.space 0x128 - (. - MtPyre_Summit_Text_GroudonKyogreTale)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:582 MtPyre_Summit_Text_WellThatTooIsFine
	.globl gText_Rom_21776F
gText_Rom_21776F: @ 0x0821776F
	.string "そうかね……\nまあ それも よいじゃろう……{EOS}"
	.if (. - gText_Rom_21776F) > 0x17
	.error "gText_Rom_21776F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21776F) < 0x17
	.space 0x17 - (. - gText_Rom_21776F)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:586 MtPyre_Summit_Text_MaxieSilence
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MtPyre_Summit_Text_MaxieSilence
MtPyre_Summit_Text_MaxieSilence: @ 0x08217786
	.string "マツブサ『{PLAYER}……\p…… …… ……\n…… …… ……{EOS}"
	.if (. - MtPyre_Summit_Text_MaxieSilence) != 0x1c
	.error "MtPyre_Summit_Text_MaxieSilence must retain its original byte length"
	.endif
	.globl gText_Rom_217790
	.set gText_Rom_217790, MtPyre_Summit_Text_MaxieSilence + 0xa
	@ data/maps/MtPyre_Summit/scripts.inc:591 MtPyre_Summit_Text_HearTheNewLegendOfHoenn
	.globl MtPyre_Summit_Text_HearTheNewLegendOfHoenn
MtPyre_Summit_Text_HearTheNewLegendOfHoenn: @ 0x082177A2
	.string "ホウエンに のこされた いいつたえを\nかたりつぐのが わたしの やくめ\pそして いま\nルネで おこった じけんは まくを とじ\lいいつたえは また ぬりかえられた……\pあらたな ホウエンの いいつたえを\nきいて いきなされ……{EOS}"
	.if (. - MtPyre_Summit_Text_HearTheNewLegendOfHoenn) > 0x72
	.error "MtPyre_Summit_Text_HearTheNewLegendOfHoenn may not grow beyond its original slot"
	.endif
	.if (. - MtPyre_Summit_Text_HearTheNewLegendOfHoenn) < 0x72
	.space 0x72 - (. - MtPyre_Summit_Text_HearTheNewLegendOfHoenn)
	.endif
	@ field-script:0x216D18 FieldScriptText_217814
	.globl gText_Rom_217814
gText_Rom_217814: @ 0x08217814
	.string "とおい　とおい　おおむかしの　こと……\pせかいでは　りくと　うみの　ポケモンが\nはげしい　たたかいを　くりひろげていた\pりくの　ポケモンは\nだいちを　もりあげ　じめんを　ひろげ\pうみの　ポケモンは\nあらなみを　おこして　うみを　ひろげた\p2ひきの　たたかいは　おわることなく\nこの　せかいは　もえさかる　ほのおと\lふきあれる　あらしで　うめつくされた\pそのとき！\nあらしの　なかから　まいおりて　きたのが\lおおぞらの　ポケモン……\pその　みどりに　かがやく　ポケモンは\n2ひきの　いかりを　しずめると\lまた　どこかへと　とびさって　いった\pどこか　とおい\nそらの　かなたへ……{EOS}"
	.if (. - gText_Rom_217814) > 0x121
	.error "gText_Rom_217814 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217814) < 0x121
	.space 0x121 - (. - gText_Rom_217814)
	.endif
	@ Embedded ROM bytes: file offset 0x217935, size 0x8A
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x6A, 0x5A, 0x2B, 0x6F, 0x00, 0x06, 0x01, 0x5E, 0x79, 0x21, 0x08, 0x2B, 0xD4, 0x00, 0x06
	.byte 0x01, 0x54, 0x79, 0x21, 0x08, 0x0F, 0x00
	.4byte AquaHideout_1F_Text_OurBossIsSnatchingSomething @ ROM pointer 0x082179BF
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0x3C, 0x7A, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte AquaHideout_1F_Text_BossWentToJackASubmarine @ ROM pointer 0x08217A9D
	.byte 0x09, 0x04, 0x6C, 0x02, 0x6A, 0x5A, 0x2B, 0x6F, 0x00, 0x06, 0x01, 0x90, 0x79, 0x21, 0x08, 0x2B
	.byte 0xD4, 0x00, 0x06, 0x01, 0x86, 0x79, 0x21, 0x08, 0x0F, 0x00, 0x19, 0x7B, 0x21, 0x08, 0x09, 0x04
	.byte 0x6C, 0x02, 0x0F, 0x00
	.4byte AquaHideout_1F_Text_TeamMagmaAtMtChimney @ ROM pointer 0x08217B99
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0xF9, 0x7B, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x5C, 0x02
	.byte 0x02, 0x00, 0x00, 0x00
	.4byte AquaHideout_1F_Text_Grunt1Intro @ ROM pointer 0x08217C6D
	.4byte AquaHideout_1F_Text_Grunt1Defeat @ ROM pointer 0x08217C84
	.byte 0xB5, 0x79, 0x21, 0x08, 0x0F, 0x00, 0x92, 0x7C, 0x21, 0x08, 0x09, 0x06, 0x02, 0x0F, 0x00, 0x92
	.byte 0x7C, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02
