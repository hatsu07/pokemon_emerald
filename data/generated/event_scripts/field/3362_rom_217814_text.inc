	@ data/maps/MtPyre_Summit/scripts.inc:424 MtPyre_Summit_Text_Grunt1Intro (+1 aliases)
	.globl gText_Rom_216FD6
gText_Rom_216FD6: @ 0x08216FD6
	.string "くっそー! マグマだんの れんちゅうに\nさきを こされて しまったが\pオレたちだって まけちゃ いないぜ!{EOS}"
	.if (. - gText_Rom_216FD6) > 0x36
	.error "gText_Rom_216FD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216FD6) < 0x36
	.space 0x36 - (. - gText_Rom_216FD6)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:429 MtPyre_Summit_Text_Grunt1Defeat (+1 aliases)
	.globl gText_Rom_21700C
gText_Rom_21700C: @ 0x0821700C
	.string "おまえ…… にげていった マグマだんが\nもどって きたのかと おもったんだよ{EOS}"
	.if (. - gText_Rom_21700C) > 0x27
	.error "gText_Rom_21700C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21700C) < 0x27
	.space 0x27 - (. - gText_Rom_21700C)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:433 MtPyre_Summit_Text_Grunt1PostBattle
	.globl gText_Rom_217033
gText_Rom_217033: @ 0x08217033
	.string "たしかに おまえは つよいな……\nだけど おれたちは たくさん いるんだぞ!{EOS}"
	.if (. - gText_Rom_217033) > 0x27
	.error "gText_Rom_217033 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217033) < 0x27
	.space 0x27 - (. - gText_Rom_217033)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:437 MtPyre_Summit_Text_Grunt2Intro (+1 aliases)
	.globl gText_Rom_21705A
gText_Rom_21705A: @ 0x0821705A
	.string "おっ ざんねん だったな!\pもうすこし はやく ここにくれば\nあの よわっちょろい マグマだんとの\lしょうぶで すんだ はずなのに\pいまごろ きた おかげで\nつよい オレたちが あいてだぜ!{EOS}"
	.if (. - gText_Rom_21705A) > 0x60
	.error "gText_Rom_21705A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21705A) < 0x60
	.space 0x60 - (. - gText_Rom_21705A)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:445 MtPyre_Summit_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_2170BA
gText_Rom_2170BA: @ 0x082170BA
	.string "うーむ…… マグマだんに\nあいてを させれば よかった……{EOS}"
	.if (. - gText_Rom_2170BA) > 0x1e
	.error "gText_Rom_2170BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2170BA) < 0x1e
	.space 0x1e - (. - gText_Rom_2170BA)
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
	.globl gText_Rom_2170F9
gText_Rom_2170F9: @ 0x082170F9
	.string "おまえ…… えんとつやまで あったな!\pどっちの だんいん でもないのに\nなぜ こんな ところに いるんだ!?{EOS}"
	.if (. - gText_Rom_2170F9) > 0x38
	.error "gText_Rom_2170F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2170F9) < 0x38
	.space 0x38 - (. - gText_Rom_2170F9)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:459 MtPyre_Summit_Text_Grunt3Defeat (+1 aliases)
	.globl gText_Rom_217131
gText_Rom_217131: @ 0x08217131
	.string "ぐぐぐ……\nじゃまを するなら マグマだんに しろ……{EOS}"
	.if (. - gText_Rom_217131) > 0x1c
	.error "gText_Rom_217131 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217131) < 0x1c
	.space 0x1c - (. - gText_Rom_217131)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:463 MtPyre_Summit_Text_Grunt3PostBattle
	.globl gText_Rom_21714D
gText_Rom_21714D: @ 0x0821714D
	.string "まあいいさ じかんは かせげた!\pリーダーの もくてきの もの\nうばえた はずだぜ!{EOS}"
	.if (. - gText_Rom_21714D) > 0x2b
	.error "gText_Rom_21714D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21714D) < 0x2b
	.space 0x2b - (. - gText_Rom_21714D)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:469 MtPyre_Summit_Text_Grunt4Intro (+1 aliases)
	.globl gText_Rom_217178
gText_Rom_217178: @ 0x08217178
	.string "あっ わかった!\nあんた マグマだんに はいろうと したけど\lいれて もらえなかったんでしょ!\pはん! うちら アクアだんに だって\nいれてやんないよ!{EOS}"
	.if (. - gText_Rom_217178) > 0x4d
	.error "gText_Rom_217178 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217178) < 0x4d
	.space 0x4d - (. - gText_Rom_217178)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:476 MtPyre_Summit_Text_Grunt4Defeat (+1 aliases)
	.globl gText_Rom_2171C5
gText_Rom_2171C5: @ 0x082171C5
	.string "そうしたら アクアだんに いれて\nやらない ことも ないよ……{EOS}"
	.if (. - gText_Rom_2171C5) > 0x20
	.error "gText_Rom_2171C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2171C5) < 0x20
	.space 0x20 - (. - gText_Rom_2171C5)
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
	.globl gText_Rom_2173D9
gText_Rom_2173D9: @ 0x082173D9
	.string "あやしげな ふたりの おとこに うばわれた\nあいいろのたまと べにいろのたま……\pふたつが はなればなれ では\nきっと よくないことが おこる……{EOS}"
	.if (. - gText_Rom_2173D9) > 0x4a
	.error "gText_Rom_2173D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2173D9) < 0x4a
	.space 0x4a - (. - gText_Rom_2173D9)
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
	.globl gText_Rom_2174D8
gText_Rom_2174D8: @ 0x082174D8
	.string "ふたつのたまを うばった おとこたちが\nみずから かえしに くるとは……\pあの ふたり……\nあんがい わるいやつでは ないのかもな{EOS}"
	.if (. - gText_Rom_2174D8) > 0x42
	.error "gText_Rom_2174D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2174D8) < 0x42
	.space 0x42 - (. - gText_Rom_2174D8)
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
	.globl gText_Rom_2175A3
gText_Rom_2175A3: @ 0x082175A3
	.string "おくりびやまは ポケモンの たましいを\nなぐさめる ための ところ……\pここは たかい ばしょに あって\nホウエンを みわたす ことが できるから\lポケモンたちの たましいも\lやすらぎを おぼえるの じゃろう……\pおまえさんが ここに きたのも\nなにかの えん……\pホウエンちほうに つたわる はなしを\nきいて いきなされ……{EOS}"
	.if (. - gText_Rom_2175A3) > 0xa4
	.error "gText_Rom_2175A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2175A3) < 0xa4
	.space 0xa4 - (. - gText_Rom_2175A3)
	.endif
	@ data/maps/MtPyre_Summit/scripts.inc:562 MtPyre_Summit_Text_GroudonKyogreTale
	.globl gText_Rom_217647
gText_Rom_217647: @ 0x08217647
	.string "とおい とおい おおむかしの こと……\pせかいでは りくと うみの ポケモンが\nはげしい たたかいを くりひろげていた\pりくの ポケモンは\nだいちを もりあげ じめんを ひろげ\pうみの ポケモンは\nあらなみを おこして うみを ひろげた\p2ひきの たたかいは おわることなく\nこの せかいは もえさかる ほのおと\lふきあれる あらしで うめつくされた\pそれを しずめたのが\nあいいろのたま と べにいろのたま……\pふたつの たまから ひろがる ひかりが\n2ひきの いかりを しずめた\pそして おとなしくなった 2ひきは\nかいてい ふかく もぐっていき\lやがて そのすがたを けしたのじゃ……{EOS}"
	.if (. - gText_Rom_217647) > 0x128
	.error "gText_Rom_217647 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217647) < 0x128
	.space 0x128 - (. - gText_Rom_217647)
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
	.globl gText_Rom_217786
gText_Rom_217786: @ 0x08217786
	.string "マツブサ『{PLAYER}……\p…… …… ……\n…… …… ……{EOS}"
	.if (. - gText_Rom_217786) != 0x1c
	.error "gText_Rom_217786 must retain its original byte length"
	.endif
	.globl gText_Rom_217790
	.set gText_Rom_217790, gText_Rom_217786 + 0xa
	@ data/maps/MtPyre_Summit/scripts.inc:591 MtPyre_Summit_Text_HearTheNewLegendOfHoenn
	.globl gText_Rom_2177A2
gText_Rom_2177A2: @ 0x082177A2
	.string "ホウエンに のこされた いいつたえを\nかたりつぐのが わたしの やくめ\pそして いま\nルネで おこった じけんは まくを とじ\lいいつたえは また ぬりかえられた……\pあらたな ホウエンの いいつたえを\nきいて いきなされ……{EOS}"
	.if (. - gText_Rom_2177A2) > 0x72
	.error "gText_Rom_2177A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2177A2) < 0x72
	.space 0x72 - (. - gText_Rom_2177A2)
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
	.4byte gText_Rom_2179BF @ ROM pointer 0x082179BF
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0x3C, 0x7A, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte gText_Rom_217A9D @ ROM pointer 0x08217A9D
	.byte 0x09, 0x04, 0x6C, 0x02, 0x6A, 0x5A, 0x2B, 0x6F, 0x00, 0x06, 0x01, 0x90, 0x79, 0x21, 0x08, 0x2B
	.byte 0xD4, 0x00, 0x06, 0x01, 0x86, 0x79, 0x21, 0x08, 0x0F, 0x00, 0x19, 0x7B, 0x21, 0x08, 0x09, 0x04
	.byte 0x6C, 0x02, 0x0F, 0x00
	.4byte gText_Rom_217B99 @ ROM pointer 0x08217B99
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0xF9, 0x7B, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x5C, 0x02
	.byte 0x02, 0x00, 0x00, 0x00
	.4byte gText_Rom_217C6D @ ROM pointer 0x08217C6D
	.4byte gText_Rom_217C84 @ ROM pointer 0x08217C84
	.byte 0xB5, 0x79, 0x21, 0x08, 0x0F, 0x00, 0x92, 0x7C, 0x21, 0x08, 0x09, 0x06, 0x02, 0x0F, 0x00, 0x92
	.byte 0x7C, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02
