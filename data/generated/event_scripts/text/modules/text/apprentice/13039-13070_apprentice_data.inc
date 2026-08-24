	@ data/text/apprentice.inc:475 gText_ApprenticeThanksHeldItem15
	.globl gText_ApprenticeThanksHeldItem15
gText_ApprenticeThanksHeldItem15: @ 0x08270077
	.string "{STR_VAR_1}…… ほんとうかね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたしの ポケモンでも\lつかいこなせると いいな\pでは いずれまた あおう!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem15) > 0x52
	.error "gText_ApprenticeThanksHeldItem15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem15) < 0x52
	.space 0x52 - (. - gText_ApprenticeThanksHeldItem15)
	.endif

	@ data/text/apprentice.inc:478 gText_ApprenticeItemAlreadyRecommended15
	.globl gText_ApprenticeItemAlreadyRecommended15
gText_ApprenticeItemAlreadyRecommended15: @ 0x082700C9
	.string "いやいや まってくれ\nそれは まえに おしえてくれた だろう\lそれとは ちがった ものを\lすすめられて みたいんだ\pそれとも {STR_VAR_2}は\nなにも もたない ほうが いい……?\lほんとうかね?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended15) > 0x5e
	.error "gText_ApprenticeItemAlreadyRecommended15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended15) < 0x5e
	.space 0x5e - (. - gText_ApprenticeItemAlreadyRecommended15)
	.endif

	@ data/text/apprentice.inc:481 gText_ApprenticeWhichMonFirst0
	.globl gText_ApprenticeWhichMonFirst0
gText_ApprenticeWhichMonFirst0: @ 0x08270127
	.string "えーん {PLAYER}さーん!\nぼく こまって いるんです グスン\pそろそろ しょうぶを して みたいけど\nポケモンを どんな じゅんばんで\lだしたら つよいのか わかんない……\p{PLAYER}さん だったら\nどの ポケモンを さいしょに だすか\l……おしえて ください!"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst0) > 0x7f
	.error "gText_ApprenticeWhichMonFirst0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst0) < 0x7f
	.space 0x7f - (. - gText_ApprenticeWhichMonFirst0)
	.endif

	@ data/text/apprentice.inc:484 gText_ApprenticeMonFirstThanks0
	.globl gText_ApprenticeMonFirstThanks0
gText_ApprenticeMonFirstThanks0: @ 0x082701A6
	.string "{STR_VAR_1} ですね! うぅ うわーん!\pあ! ごめんなさい\nじゅんばんが きまった うれしさで\lなみだが……\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks0) > 0x46
	.error "gText_ApprenticeMonFirstThanks0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks0) < 0x46
	.space 0x46 - (. - gText_ApprenticeMonFirstThanks0)
	.endif

	@ data/text/apprentice.inc:487 gText_ApprenticeWhichMonFirst1
	.globl gText_ApprenticeWhichMonFirst1
gText_ApprenticeWhichMonFirst1: @ 0x082701EC
	.string "わわっ! {PLAYER}さんだー!\nわーい あえて よかった\lそうだん したいことが あるんだ!\pあのね ぼくの もってる\nポケモン たちの なかで\lどれを さいしょに だせば\lいいと おもう?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst1) > 0x5d
	.error "gText_ApprenticeWhichMonFirst1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst1) < 0x5d
	.space 0x5d - (. - gText_ApprenticeWhichMonFirst1)
	.endif

	@ data/text/apprentice.inc:490 gText_ApprenticeMonFirstThanks1
	.globl gText_ApprenticeMonFirstThanks1
gText_ApprenticeMonFirstThanks1: @ 0x08270249
	.string "{STR_VAR_1}かあ そーだよね!\nじゃあ そうするー!\pせんせい ありがと!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks1) > 0x22
	.error "gText_ApprenticeMonFirstThanks1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks1) < 0x22
	.space 0x22 - (. - gText_ApprenticeMonFirstThanks1)
	.endif

	@ data/text/apprentice.inc:493 gText_ApprenticeWhichMonFirst2
	.globl gText_ApprenticeWhichMonFirst2
gText_ApprenticeWhichMonFirst2: @ 0x0827026B
	.string "{PLAYER}さん こんにちは!\nしょうぶのときって さいしょに\pどの ポケモンを だすのかが\nとても だいじな きが するんです!\pぼくが もってる ポケモンの なかで\nどの ポケモンを\lさいしょに だすと いいでしょうか?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst2) > 0x6d
	.error "gText_ApprenticeWhichMonFirst2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst2) < 0x6d
	.space 0x6d - (. - gText_ApprenticeWhichMonFirst2)
	.endif

	@ data/text/apprentice.inc:496 gText_ApprenticeMonFirstThanks2
	.globl gText_ApprenticeMonFirstThanks2
gText_ApprenticeMonFirstThanks2: @ 0x082702D8
	.string "{STR_VAR_1} ですね!\nわかりました!\pじゃあ また!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks2) > 0x18
	.error "gText_ApprenticeMonFirstThanks2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks2) < 0x18
	.space 0x18 - (. - gText_ApprenticeMonFirstThanks2)
	.endif

	@ data/text/apprentice.inc:499 gText_ApprenticeWhichMonFirst3
	.globl gText_ApprenticeWhichMonFirst3
gText_ApprenticeWhichMonFirst3: @ 0x082702F0
	.string "{PLAYER}さん いつも\nそうだん ばかりで すみません……\lあたし じしんが なくって\l{PLAYER}さんが いないと……!\pあの ポケモンの じゅんばん って……\nどうすれば いいと おもいますか?\pあたし なんかが こだわっても\nしかたが ないかも しれません けど\lどうしても きめられなくて……\pどの ポケモンを 1ばん\nせんとうに すれば よいんでしょうか!"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst3) > 0xb1
	.error "gText_ApprenticeWhichMonFirst3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst3) < 0xb1
	.space 0xb1 - (. - gText_ApprenticeWhichMonFirst3)
	.endif

	@ data/text/apprentice.inc:502 gText_ApprenticeMonFirstThanks3
	.globl gText_ApprenticeMonFirstThanks3
gText_ApprenticeMonFirstThanks3: @ 0x082703A1
	.string "{STR_VAR_1} ですか わかりました!\pこんな あたし なんかに\nなんども こたえて いただけるなんて\lしんじられない!\pきょうは あたしなんかの ために\nありがとう ございました……!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks3) > 0x59
	.error "gText_ApprenticeMonFirstThanks3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks3) < 0x59
	.space 0x59 - (. - gText_ApprenticeMonFirstThanks3)
	.endif

	@ data/text/apprentice.inc:505 gText_ApprenticeWhichMonFirst4
	.globl gText_ApprenticeWhichMonFirst4
gText_ApprenticeWhichMonFirst4: @ 0x082703FA
	.string "{PLAYER}{KUN}! わたしよ\nよかったわ こまっていたの!\pちょっと ポケモンの じゅんばんを\nきめて もらえる かしら!\lと いっても そうねえ\lとりあえず 1ばんめの ポケモンで いいわ\lどの ポケモンに したら いいかしら?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst4) > 0x70
	.error "gText_ApprenticeWhichMonFirst4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst4) < 0x70
	.space 0x70 - (. - gText_ApprenticeWhichMonFirst4)
	.endif

	@ data/text/apprentice.inc:508 gText_ApprenticeMonFirstThanks4
	.globl gText_ApprenticeMonFirstThanks4
gText_ApprenticeMonFirstThanks4: @ 0x0827046A
	.string "{STR_VAR_1}ね いいわ!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks4) > 0x3d
	.error "gText_ApprenticeMonFirstThanks4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks4) < 0x3d
	.space 0x3d - (. - gText_ApprenticeMonFirstThanks4)
	.endif

	@ data/text/apprentice.inc:511 gText_ApprenticeWhichMonFirst5
	.globl gText_ApprenticeWhichMonFirst5
gText_ApprenticeWhichMonFirst5: @ 0x082704A7
	.string "ハイ! オレの せんせい\n{PLAYER}{KUN}!\pきょうも いそがしいんだ オレ\nサイクリングに ショッピングに ハミング!\pしょうぶに つかう ポケモンの\nじゅんばんさえ きめられなくてねー\pあのさ!\nちょっと オレの ポケモン みてよ!\lで どいつが はじめに でれば いいかな?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst5) > 0x89
	.error "gText_ApprenticeWhichMonFirst5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst5) < 0x89
	.space 0x89 - (. - gText_ApprenticeWhichMonFirst5)
	.endif

	@ data/text/apprentice.inc:514 gText_ApprenticeMonFirstThanks5
	.globl gText_ApprenticeMonFirstThanks5
gText_ApprenticeMonFirstThanks5: @ 0x08270530
	.string "オーケー わかった!\n{STR_VAR_1}を せんとうに する\nじかん くらいは あるぜ!\p……と いけね かのじょが まってる!\nサンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks5) > 0x49
	.error "gText_ApprenticeMonFirstThanks5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks5) < 0x49
	.space 0x49 - (. - gText_ApprenticeMonFirstThanks5)
	.endif

	@ data/text/apprentice.inc:517 gText_ApprenticeWhichMonFirst6
	.globl gText_ApprenticeWhichMonFirst6
gText_ApprenticeWhichMonFirst6: @ 0x08270579
	.string "ヤッホー ハーイ {PLAYER}さーん\nいつも つよそうな かおで あるいてるわね\pねえねえ! きょうも\nあれ…… おねがい! いいでしょ!\pジャーン では ほんじつの そうだん!\nわたしが もっている ポケモン!\lさあ どのコを いちばん\lさいしょに だせば いいでしょう?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst6) > 0x86
	.error "gText_ApprenticeWhichMonFirst6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst6) < 0x86
	.space 0x86 - (. - gText_ApprenticeWhichMonFirst6)
	.endif

	@ data/text/apprentice.inc:520 gText_ApprenticeMonFirstThanks6
	.globl gText_ApprenticeMonFirstThanks6
gText_ApprenticeMonFirstThanks6: @ 0x082705FF
	.string "ふむふむ!\n{STR_VAR_1} ですねぇ?\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks6) > 0x47
	.error "gText_ApprenticeMonFirstThanks6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks6) < 0x47
	.space 0x47 - (. - gText_ApprenticeMonFirstThanks6)
	.endif

